void setup() {
  // put your setup code here, to run once:
pinMode(11, OUTPUT); //red led
pinMode(12, OUTPUT);//blue led
pinMode(10, OUTPUT);//white led
pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(8,5);
  digitalWrite(8, HIGH);
digitalWrite(11, HIGH);
digitalWrite(12, LOW);
digitalWrite(10, HIGH);
delay(1000);
digitalWrite(10,LOW);
delay(1000);
tone(8,1.0);

digitalWrite(11, LOW);
digitalWrite(12, HIGH);
digitalWrite(10, HIGH);
delay(1000);
digitalWrite(10,LOW);
delay(1000);
digitalWrite(8, LOW);
tone(8,0.1);
delay(500);
tone(8,5.0);
}
