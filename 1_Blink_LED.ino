int LED = 7; // replace the number with whatever pin u connected the non-gnd wire to. (if putting in analog pins put the name on the arduino like A1 or A2 and so on)

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); // to tell the arduino that the LED gives outputs
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH); // to firstly turn on the LED
  delay(100); // extreeeeemely important (learnt the hard way)
  digitalWrite(LED, LOW); // to then turn it off to give it that blinking effect
  delay(100); // i say important cus if u dont use it then it will stay on "HIGH"
  // note: putting delay of 100 is a little small which makes it look like a bomb ticking so make it a little slower for the true blinking effect
}
