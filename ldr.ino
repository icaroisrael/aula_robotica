int led = 13;
int ldr = A0;
int leitura = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop()
{
  leitura = analogRead(ldr);
  delay(500);
  if(leitura <= 612){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  Serial.println(leitura);  
  
}
