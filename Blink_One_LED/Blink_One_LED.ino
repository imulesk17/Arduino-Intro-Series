void setup() {
  // put your setup code here, to run once:
  // We connected our LED to Arduino pin 12
  // We need to tell the Arduino that we are going to use pin 12 as an output
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // The flow of current: 
  // Current flows from pin 12, through the resistor, through the LED, and back to ground. 
  // The resistor limits the current so the LED does not burn out.

  // To turn our LED on, we use the 'digitalWrite' command
  digitalWrite(12,HIGH); // 'HIGH' means to turn it on

  // We want pin 12 to stay on for 1 second
  delay(1000); // Remember, 1s = 1000ms

  // Then, we want the pin to go 'LOW' (off)
  digitalWrite(12,LOW);

  // We want pin 12 to stay off for 1 second
  delay(1000);
}
