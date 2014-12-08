int led = 12; ///correspond to ports on arduino breadboard
int led1 = 8;
int led2 = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);///HIGH sends current
  delay(1000);///programs pauses before turning light off (milleseconds)
  digitalWrite(led,LOW);///LOW turns off current
  delay(1000);
  
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);
  
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
}
