uint8_t red_led = 14;
uint8_t yellow_led = 15;
uint8_t green_led = 16;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_led, HIGH);
  delay(1000);
  digitalWrite(red_led, LOW);

}
