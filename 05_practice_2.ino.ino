const int pinLED = 7;
void setup() {
  pinMode(pinLED, OUTPUT);

}

void loop() {
  digitalWrite(pinLED, 0);
  delay(1000);
  digitalWrite(pinLED, 1);
  delay(100);
  for (int i = 0; i < 5; i++) {
    digitalWrite(pinLED, 0);
    delay(100);
    digitalWrite(pinLED, 1);
    delay(100);
  }
  while (1) {}

}
