int flag=0;
void setup() {
  // put your setup code here, to run once: 
  pinMode(9,OUTPUT);
  pinMode(5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if((digitalRead(5)==HIGH)&&(flag==0))
  {
    delay(1000);
    digitalWrite(9,HIGH);
    flag=1;
  }
  if((digitalRead(5)==HIGH)&&(flag==1))
  {
    delay(1000);
    digitalWrite(9,LOW);
    flag=0;
  }
  
}
