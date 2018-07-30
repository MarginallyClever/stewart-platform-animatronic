# stewart-platform-animatronic

https://www.instagram.com/p/BleN0-bjPU8/

These are the printed parts, PCB design files, and laser cutting plans for miniature stewart platforms used in animatronics.

There are four in the instagram link above.  To make ONE of these platforms you will need

6x M3 rod 10cm long
12x M3x10 screws (can be M3x15)
18x M3x15 screws
3x 3d printed lower gimbal limit
6x 3d printed servo horn 
6x 3d printed servo mount
1x 3d printed top
1x laser cut floor A
1x laser cut floor B

For the handle you'll need 3x M3x15 screws.

To fit the servo into the servo mount I unscrewed the back so the wire would bend down and out of the way.  This is convenient on the input side where I also removed one gear AND unsoldered the white wire and resoldered it to the potentiometer.

The potentiometer returns a value between ~110 and ~520 (of a possible 0-1023).  In the code I adjusted the floor and ceiling values to get the full range of motion out of the servos.

To attach the arms to the input servos, I opened the serial window and turned the servo until it was in middle position, then attached the arm horizontally.  The output servos could then be attached to match.  If there's a better way to do this, please let me know.