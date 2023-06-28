#include <Servo.h>
int sign=A2, val, unpressed=20, pressed=2, servoPin=7;
Servo mera;
void setup()
{
  mera.attach(servoPin);
  mera.write(unpressed);
  pinMode(sign, INPUT);
  Serial.begin(9600);
  delay(100);
}
void loop()
{
  val=(int)analogRead(sign);
  Serial.println(val);
  if(val<890)
    mera.write(pressed);
  else
    mera.write(unpressed);
  delay(100);
}
