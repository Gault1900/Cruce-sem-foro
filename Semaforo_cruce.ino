int verde_1= 7;
int amarillo_1= 6;
int rojo_1= 5;

int verde_2= 10;
int amarillo_2= 9;
int rojo_2= 8;

int cont=0;
int cont2=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(verde_1,OUTPUT);
  pinMode(amarillo_1,OUTPUT);
  pinMode(rojo_1,OUTPUT);
  pinMode(verde_2,OUTPUT);
  pinMode(amarillo_2,OUTPUT);
  pinMode(rojo_2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(verde_1,HIGH);
 digitalWrite(rojo_2,HIGH);
 delay(5000);
 digitalWrite(verde_1,LOW);
 while(cont<5){
 digitalWrite(amarillo_1,HIGH);
 delay(200);
 digitalWrite(amarillo_1,LOW);
 delay(200);
 cont++;
 }
 cont=0;
 digitalWrite(rojo_2,LOW);
 digitalWrite(verde_2,HIGH);
 digitalWrite(rojo_1,HIGH);
 delay(5000);
 digitalWrite(verde_2,LOW);
 while(cont2<5){
 digitalWrite(amarillo_2,HIGH);
 delay(200);
 digitalWrite(amarillo_2,LOW);
 delay(200);
 cont2++;}
 cont2=0;
 digitalWrite(rojo_1,LOW);
}
