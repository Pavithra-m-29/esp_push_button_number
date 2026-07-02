int led=D0;
int button=D1;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);// put your setup code here, to run once:

}

void loop() {
  int a= digitalRead(D1);
  if (a==HIGH)
  {digitalWrite(led,HIGH);}
  else{digitalWrite(led,LOW);}// put your main code here, to run repeatedly:

}
