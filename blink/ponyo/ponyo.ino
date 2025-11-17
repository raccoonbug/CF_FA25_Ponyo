#include <Servo.h>
const int armSwitch = 7; //for arm
Servo myservo;
Servo wave; // waves moving
Servo ponyo; //ponyo in the bucket
Servo arm; //Ponyo's dads arm
int ServoAngle = 0;
float speed = 0.5;

void setup() {
  
  pinMode(armSwitch, INPUT); //makes the arm move down

  wave.attach(10); 
  wave.write(0);

  ponyo.attach(8);
  ponyo.write(0);

  arm.attach(6);
  arm.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin) == HIGH){
    myservo.write(180);
  } else {
    myservo.write(0);
  }

}
