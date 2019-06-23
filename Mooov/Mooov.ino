//PROGRAMACION DE UN MOTOR PAP WITH DRIVER MORADITO(DVR8825)
#include <AccelStepper.h>

AccelStepper delanteroIzq(1,2,3); //(Driver, pinPaso, pinDir) ****Motor1 o 
AccelStepper delanteroDer(1,4,5); 
AccelStepper traseroIzq(1,6,7); 
AccelStepper traseroDer(1,8,9); 

int velocidad = 1500;

 
void setup() {
  //velocidades Maximas 
  delanteroIzq.setMaxSpeed(3000);
  delanteroDer.setMaxSpeed(3000);
  traseroIzq.setMaxSpeed(3000);
  traseroDer.setMaxSpeed(3000);  
}

void loop() {

}


/* FUNCIONES DE MOVIMIENTO :
    adelante();
    atras();
    derecha();
    izquierda();
    diagonalDerechaAdelante();
    diagonalDerechaAtras();
    diagonalIzquierdaAdelante();
    diagonalIzquierdaAtras();
    giroDerecha();
    giroIzquierda();
    quieto();
    Alocao(); "Se aloca"
*/  
void adelante(){
  delanteroIzq.setSpeed(velocidad);
  delanteroDer.setSpeed(velocidad);
  traseroIzq.setSpeed(velocidad);
  traseroDer.setSpeed(velocidad);
}
void atras(){
  delanteroIzq.setSpeed(-velocidad);
  delanteroDer.setSpeed(-velocidad);
  traseroIzq.setSpeed(-velocidad);
  traseroDer.setSpeed(-velocidad);
}
void derecha(){
  delanteroIzq.setSpeed(velocidad);
  delanteroDer.setSpeed(-velocidad);
  traseroIzq.setSpeed(-velocidad);
  traseroDer.setSpeed(velocidad);
}
void izquierda(){
  delanteroIzq.setSpeed(-velocidad);
  delanteroDer.setSpeed(velocidad);
  traseroIzq.setSpeed(velocidad);
  traseroDer.setSpeed(-velocidad);
}
void diagonalDerechaAdelante(){
  delanteroIzq.setSpeed(velocidad);
  delanteroDer.setSpeed(0);
  traseroIzq.setSpeed(0);
  traseroDer.setSpeed(velocidad);
}
void diagonalIzquierdaAtras(){
  delanteroIzq.setSpeed(-velocidad);
  delanteroDer.setSpeed(0);
  traseroIzq.setSpeed(0);
  traseroDer.setSpeed(-velocidad);
}
void diagonalIzquierdaAdelante(){
  delanteroIzq.setSpeed(0);
  delanteroDer.setSpeed(velocidad);
  traseroIzq.setSpeed(velocidad);
  traseroDer.setSpeed(0);
}
void diagonalDerechaAtras(){
  delanteroIzq.setSpeed(0);
  delanteroDer.setSpeed(-velocidad);
  traseroIzq.setSpeed(-velocidad);
  traseroDer.setSpeed(0);
}  
void giroIzquierda(){
  delanteroIzq.setSpeed(-velocidad);
  delanteroDer.setSpeed(velocidad);
  traseroIzq.setSpeed(-velocidad);
  traseroDer.setSpeed(velocidad);
}
void giroDerecha(){
  delanteroIzq.setSpeed(velocidad);
  delanteroDer.setSpeed(-velocidad);
  traseroIzq.setSpeed(velocidad);
  traseroDer.setSpeed(-velocidad); 
}
void quieto(){
  delanteroIzq.setSpeed(0);
  delanteroDer.setSpeed(0);
  traseroIzq.setSpeed(0);
  traseroDer.setSpeed(0);
  }
void Alocao(){
    adelante();
    delay(200);
    atras();
    delay(200);
    derecha();
    delay(200);
    izquierda();
    delay(200);
    diagonalDerechaAdelante();
    delay(200);
    diagonalDerechaAtras();
    delay(200);
    diagonalIzquierdaAdelante();
    delay(200);
    diagonalIzquierdaAtras();
    delay(200);
    giroDerecha();
    delay(200);
    giroIzquierda();
    delay(200);
    quieto();
}