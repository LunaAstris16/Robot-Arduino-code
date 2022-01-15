#include <Servo.h>

Servo motor1;

int motor1Pin = 8;
int val = 0;

void setup() {
  motor1.attach(motor1Pin);
  Serial.begin(9600);
}
void loop() {
  int val = analogRead(A0);
  int strength = analogRead(A0);
  val = map(val, 0, 1023, 0, 180);
  motor1.write(val);
 
}
