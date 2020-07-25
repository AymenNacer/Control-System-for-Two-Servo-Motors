#include <Servo.h>
Servo servo;
Servo servo2;
void setup()
{
servo.attach(8);
servo2.attach(12);
}

void loop()
{
  servo.write(90);
  servo2.write(90);
  delay(1000);
  servo.write(0);
  servo2.write(0);
  delay(1000);
}