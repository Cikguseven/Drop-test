#include <Servo.h>

// This programme uses the Servo Library to control the PWM value sent to a brushless motor.
// It was used to test the drop time of wings A1 to A4 at different PWM values.
// Written by Donovan and Kieron 

Servo myservo;

int PWM = 700;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(3); // Attach servo variable to digital pin 3

  myservo.writeMicroseconds(PWM);

  delay(5000);

  Serial.begin(9600);

  Serial.println("finish");
}

void loop() {
  // put your main code here, to run repeatedly:

  // Ramp function to increase PWM value
  for (PWM = 700; PWM <= 1450; PWM += 10) {
    myservo.writeMicroseconds(PWM);
    delay(50);
    Serial.println(PWM);
  }
  
  delay(5500);
  Serial.println("Three");
  delay(1000);
  Serial.println("Two");
  delay(1000);
  Serial.println("One");
  delay(1000);
  Serial.println("Zero");

  myservo.writeMicroseconds(1320);
  delay(17000);
  myservo.writeMicroseconds(700);
  delay(500);
}
