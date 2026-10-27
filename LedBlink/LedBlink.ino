int led =13;
void setup()
{
  pinMode(led,OUTPUT);
}

void loop()
{
  digitalWrite(led,HIGH); //1
  delay(1000);
  digitalWrite(led,LOW); //0
  delay(1000);
}