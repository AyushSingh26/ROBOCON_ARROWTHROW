void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(IN_2,LOW);
  digitalWrite(IN_2,HIGH);
  analogWrite(PWM,80);
  delay(20);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_2,HIGH);
  analogWrite(PWM,150);
  delay(10);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_2,HIGH);
  analogWrite(PWM,220);
  delay(50);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_2,HIGH);
  analogWrite(PWM,210);
  delay(20);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_2,HIGH);
  analogWrite(PWM,50);
  delay(400);*/
  //Throw code
  digitalWrite(12,0);
  analogWrite(13,200);
  delay(260);

  //return code
  digitalWrite(12,1);
  analogWrite(13,200);
  delay(130);

  //free motor
  digitalWrite(12,0);
  analogWrite(13,0);
  delay(5000);
}
