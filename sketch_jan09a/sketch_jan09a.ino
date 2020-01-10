int i=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<255;i++)
{  
analogWrite(3,i);
delay(10);
}
for(i=255;i>0;i--)
{  
analogWrite(3,i);
delay(10);
}
}
