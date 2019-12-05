#include <Servo.h>

#define NUM_SERVOS  7

// minimum/maximum values read via serial.  customized per-servo.
// these numbers were tested on a 5v3a power supply and may change with a 5v4a supply.
int floors  [NUM_SERVOS] = { 0, 0, 0, 0, 0, 0, 0 };
int ceilings[NUM_SERVOS] = { 670, 670, 670, 670, 670, 670, 670, };
int outputPins[NUM_SERVOS] = { 2, 4, 5, 8, 9, 10, 3 };




Servo a[NUM_SERVOS];

void setup() {
  Serial.begin(57600);
  Serial.println("\n** SETUP **");

  for(int i=0;i<NUM_SERVOS;++i) {
    a[i].attach(outputPins[i]);
  }

  Serial.println("\n** LOOP **");
}

void loop() {
  for(int i=0;i<NUM_SERVOS;++i) {
    int j = analogRead(i);
    float f = map(j,floors[i],ceilings[i],10,170);
    //float f = (float)j * 180.0/1024.0;
    Serial.print(j);
    Serial.print('=');
    Serial.print(f);
    Serial.print('\t');
    a[i].write(f);
  }
  Serial.print("\n");

  delay(5);
}

