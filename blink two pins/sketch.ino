int pin1 = 12;
int pin2 = 13;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  delay(300);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin1, LOW);
  delay(300);
}
