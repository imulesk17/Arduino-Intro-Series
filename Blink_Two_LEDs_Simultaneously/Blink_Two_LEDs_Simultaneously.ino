void setup() {
  // put your setup code here, to run once:

  // The flow of current:
  // Pin 12 -> resistor -> LED 1 -> GND
  // Pin 8  -> resistor -> LED 2 -> GND
  // Pin 12 and pin 8 are separate outputs but the code turns them on and off together, so both current paths start and stop together.

  // We connected our LED to Arduino pin 12
  // We need to tell the Arduino that we are going to use pin 12 as an output
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT); // For our second LED connected to pin 8
}

void loop() {
  // put your main code here, to run repeatedly:

  // To turn our LED on, we use the 'digitalWrite' command
  digitalWrite(12,HIGH); // 'HIGH' means to turn it on
  digitalWrite(8,HIGH);

  // We want pin 12 to stay on for 1 second
  delay(1000); // Remember, 1s = 1000ms, only need one delay command for all LEDs (if you want them to blink simultaneously)

  // Then, we want the pin to go 'LOW' (off)
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);

  // We want pin 12 to stay off for 1 second
  delay(1000);
}
