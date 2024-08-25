#include <Arduino.h>

int numero =10; //variable global

void duplicar(int * puntero); //prototipo funcion duplicar

/**
 * @brief este es el punto de entrada del programa
 * sirve para inicializar las variables y configuraciones
 */
void setup() { //10khz es el maximo ancho de banda de una linea telefonica
  Serial.begin(115200);//1200 baudios (bits x segundo), 2400,4800,[9600] etc..

}

/**
 * @brief este el el loop principal del programa
 * se ejecuta despues de que el setup termina
 */
void loop() {
 Serial.println("[loop] numero ="+String(numero));
 duplicar(&numero); //& numero significa que le paso la direccion de memoria de la variable numero
 delay(1000); // 1 segundo
}

void duplicar(int * puntero){
  * puntero  = * puntero * 2; // * puntero significa que accedo al valor de la direccion de la memoria que me pasaron
   Serial.println("[duplicar] numero ="+String(* puntero)); // imprime: numero = 20
}


