void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH); // red is on
  delay(3000);

  digitalWrite(8,HIGH); // yellow is on
  delay(1000);

  digitalWrite(12,LOW);
  digitalWrite(8,LOW);  // red & yellow both are off

  digitalWrite(7,HIGH); //green is on 
  delay(3000);
  digitalWrite(7,LOW); 
  delay(500);

  digitalWrite(7,HIGH); // green is on (blink 1)
  delay(500);
  digitalWrite(7,LOW);  
  delay(500);

  digitalWrite(7,HIGH); // green is on (blink 2)
  delay(500);
  digitalWrite(7,LOW);  
  delay(500);

  digitalWrite(7,HIGH); // green is on (blink 3)
  delay(500);
  digitalWrite(7,LOW);  
  delay(2000);


}
