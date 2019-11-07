const int button = 8;
int count = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{
  int c = analogRead(A0);
  delay(500);
  if(c<300)
  {
    if(digitalRead(button)==HIGH){
      delay(500);
      count++;
      }
      
    if(count%2==0){
     digitalWrite(2,HIGH);
     delay(500);
     digitalWrite(2,LOW);
     
      }
    if(count%2!=0){
     digitalWrite(2,HIGH);
     delay(1000);
     digitalWrite(2,LOW);
     delay(1000);
      }     
  }
  else
  {
    digitalWrite(2,LOW);
    delay(1000);
  }
}