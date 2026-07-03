// Breadboard and Arduino connections are same as for Blink_Two_LEDs_Simultaneously

void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT); // Initialize pin 12 as output
  pinMode(8,OUTPUT); // Initialize pin 8 as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH); // LED 1 on
  digitalWrite(8,LOW); // LED 2 off
  delay(1000); // For one second

  digitalWrite(12,LOW); // LED 1 off
  digitalWrite(8,HIGH); // LED 2 on
  delay(1000); // For one second
}
