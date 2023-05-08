// C++ code 
int LED = 8;
int btn = 2;
void setup()
  
{
  pinMode(LED, OUTPUT);
  pinMode(btn, INPUT);
  
}

void loop()
{
  int johnTravolta = digitalRead(btn);
  if(johnTravolta == HIGH){
          digitalWrite(LED, LOW);
  }
  else{
    digitalWrite(LED, HIGH);

}
}