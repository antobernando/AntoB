int LmotorUp = 10;  
int LmotorDn = 11;  
int RmotorUp = 8;   
int RmotorDn = 9;  
const int flame = 7;
const int txt = 6;
void setup() 
{
  pinMode(flame,INPUT);
  pinMode(txt,OUTPUT);
  pinMode(LmotorUp,OUTPUT);//Setting ports as OUTPUTS as they 
  pinMode(LmotorDn,OUTPUT);//supply signal values to motor driver
  pinMode(RmotorUp,OUTPUT);
  pinMode(RmotorDn,OUTPUT);
  digitalWrite(flame, LOW);
  digitalWrite(txt,LOW);
}

void loop() 
{
 int result=digitalRead(flame);
 if(result==HIGH)
 {
  digitalWrite(txt,HIGH); 
  Stop(); 
 }
 else
 {
  digitalWrite(txt,LOW);
  MoveF();
 }

}

void MoveF()
{
  digitalWrite(LmotorUp,HIGH);  
  digitalWrite(LmotorDn,LOW);  
  digitalWrite(RmotorUp,HIGH);  
  digitalWrite(RmotorDn,LOW); 
}

void Stop()
{
  digitalWrite(LmotorUp,LOW); 
  digitalWrite(LmotorDn,LOW);
  digitalWrite(RmotorUp,LOW);
  digitalWrite(RmotorDn,LOW);
}
