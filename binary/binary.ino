void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.availiable>0)
  {
int n=32,a[5],count=0,i;
for(i=0;n>0;i++)
{
  a[i]=n%2;
  n=n/2;
  count=count+1;
}
j=i;  
for(i=j-1;i=>0;i--)
{
  
  Serial.print(a[j]);
}
if(a[0]==1)
{
  digitalWrite(8,"HIGH");
}
if(a[1]==1)
{
  digitalWrite(9,"HIGH");
}
if(a[2]==1)
{
  digitalWrite(10,"HIGH");
}
if(a[3]==1)
{
  digitalWrite(11,"HIGH");
}
if(a[4]==1)
{
  digitalWrite(12,"HIGH");
}
}
}
