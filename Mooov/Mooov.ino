//PROGRAMACION DE UN MOTOR PAP WITH DRIVER MORADITO(DVR8825)

const int delanteroIzq[2]= {2,3}; 
const int delanteroDer[2]= {4,5};
const int traseroIzq[2]= {6,7};
const int traseroDer[2]= {8,9};

const int velocidad = 500;

 
void setup() {
}

void loop() {
}



//Movimientos Motor 

void adl(int motor[]){
  int dirPin = motor[0];
  int stepPin = motor[1];
  digitalWrite(dirPin,HIGH); 
  for(int x = 0; x < 200; x++){
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(velocidad);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(velocidad);
}
}
void atr (int motor[]){
  int dirPin = motor[0];
  int stepPin = motor[1];
  digitalWrite(dirPin,LOW); 
  for(int x = 0; x < 200; x++){
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(velocidad);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(velocidad);
}
void stp(int motor[]){
  int dirPin = motor[0];
  int stepPin = motor[1];
  digitalWrite(stepPin, LOW)
}
//Movimientos del Carro

void adelante(){
  adl(delanteroIzq);
  adl(delanteroDer);
  adl(traseroIzq);
  adl(traseroDer); 
}
void atras(){
  atr(delanteroIzq);
  atr(delanteroDer);
  atr(traseroIzq);
  atr(traseroDer);
}
void derecha(){
  adl(delanteroIzq);
  atr(delanteroDer);
  atr(traseroIzq);
  adl(traseroDer);
}
void izquierda(){
  atr(delanteroIzq);
  adl(delanteroDer);
  adl(traseroIzq);
  atr(traseroDer);
}
void diagonalDerechaAdelante(){
  adl(delanteroIzq);
  stp(delanteroDer);
  stp(traseroIzq);
  adl(traseroDer);
}
void diagonalIzquierdaAtras(){
  atr(delanteroIzq);
  stp(delanteroDer);
  stp(traseroIzq);
  atr(traseroDer);  
}
void diagonalIzquierdaAdelante(){
  stp(delanteroIzq);
  adl(delanteroDer);
  adl(traseroIzq);
  stp(traseroDer);
}
void diagonalDerechaAtras(){
  stp(delanteroIzq);
  atr(delanteroDer);
  atr(traseroIzq);
  stp(traseroDer);
}
void giroDerecha(){
  atr(delanteroIzq);
  adl(delanteroDer);
  atr(traseroIzq);
  adl(traseroDer);
  
}
void giroIzquierda(){
  adl(delanteroIzq);
  atr(delanteroDer);
  adl(traseroIzq);
  atr(traseroDer);

}
void quieto(){
  stp(delanteroIzq[2]);
  stp(delanteroDer[2]);
  stp(traseroIzq[2]);
  stp(traseroDer[2]); 
}
