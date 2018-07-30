#include <Servo.h>

// minimum/maximum values read via serial.  customized per-servo.
// these numbers were tested on a 5v3a power supply and may change with a 5v4a supply.
int floors  [6] = { 237, 115, 231, 111, 112, 109 };
int ceilings[6] = { 492, 358, 502, 362, 351, 356 };

Servo a[6];

void setup() {
  a[0].attach(4);
  a[1].attach(5);
  a[2].attach(6);
  a[3].attach(7);
  a[4].attach(8);
  a[5].attach(9);

  Serial.begin(57600);
  Serial.println("\n** BEGIN **");
}

void loop() {
  for(int i=0;i<6;++i) {
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

