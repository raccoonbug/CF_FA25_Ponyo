const int switchPin = 7;
const int ledPin = 3;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);  
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // LOW = copper tape touching
  if (digitalRead(switchPin) == LOW) {  
    digitalWrite(ledPin, HIGH);  // LED ON
  } else {
    digitalWrite(ledPin, LOW);   // LED OFF
  }
}





