void setup()
{ int i;
for(i=1;i&lt;=4;i++)
{
pinMode(i, OUTPUT); }
}
void loop()
{ int i;
for(i=1;i&lt;=4;i++)
{ digitalWrite(i, HIGH);

Page 8 of 20

delay(1000); }
for(i=4;i&gt;=1;i--)
{ digitalWrite(i, LOW);
delay(1000); }
}