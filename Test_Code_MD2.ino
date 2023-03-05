#include <Servo.h>
Servo myservo;

int pos = 90;

void setup() {
  // put your setup code here, to run once:
    myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(90);
  delay(8000);
    for (pos = 90; pos > 47; pos -= 1)
      myservo.write(pos);
      delay(1);
  delay(200);
}
