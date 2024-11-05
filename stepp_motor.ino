void setup() 
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

double dell = 0;
int readValue = 0;
void loop() 
{
  readValue = analogRead(A2);
  dell = (readValue * 50.0)/1023; 
  Serial.println(dell);
  if(dell > 50)
  {
    dell = 50;
  } 
  
  
  digitalWrite(2,HIGH);
  delay(dell);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(dell);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(dell);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(dell);
  digitalWrite(5,LOW);
}
