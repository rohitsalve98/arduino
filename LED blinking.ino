void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  // SET PIN 2 TO HIGH
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // SET PIN 2 TO LOW
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
