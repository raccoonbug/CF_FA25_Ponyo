#include <Servo.h>
const int armSwitch = 8; //for arm
const int bubble = 5; // for speech bubble
const int waves = 4; // moving waves
const int bucket = 2; //ponyo
const int ledPin = 3;
const int switchPin = 7;
Servo speak; //ponyo talking
Servo wave; // waves moving
Servo ponyo; //ponyo in the bucket
Servo arm; //Ponyo's dads arm



void setup() {
  
  pinMode(armSwitch, INPUT); //makes the arm move down
  pinMode(bubble, INPUT);
  pinMode(waves, INPUT);
  pinMode(bucket, INPUT);
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

  wave.attach(7); //360
  wave.write(0);

  ponyo.attach(12); //360
  ponyo.write(0);

  arm.attach(9); //180
  arm.write(0);

  speak.attach(4); //180
  speak.write(0);

}

void loop() {
  //arm servo
  if (digitalRead(armSwitch) == HIGH){
    arm.write(180);
  } else {
    arm.write(0);
  }
  // speech bubble servo
  if (digitalRead(bubble) == HIGH){
    speak.write(90);
  } else {
    speak.write(0);
  }
  //wave
  if (digitalRead(waves) == HIGH){
    wave.write(360);
  } else {
    wave.write(0);
  }

  //ponyo in bucket
   if (digitalRead(bucket) == HIGH){
    ponyo.write(360);
  } else {
    ponyo.write(0);
  }
  // FOR LED PIN IN BOAT
  // LOW = copper tape touching
  if (digitalRead(switchPin) == LOW) {  
    digitalWrite(ledPin, HIGH);  // LED ON
  } else {
    digitalWrite(ledPin, LOW);   // LED OFF
  }
}

//this is the final code !



