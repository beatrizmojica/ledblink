int ledPin = 13;
int ledPin2 = 14;
int buttonPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  delay(500);

  if (digitalRead(buttonPin) == HIGH) {
    usbMIDI.sendNoteOn(60, 127, 1);
    delay(5);
  } else {
    usbMIDI.sendNoteOff(0, 127, 1);
  }
}
