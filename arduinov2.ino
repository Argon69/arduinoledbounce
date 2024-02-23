#include <Bounce2.h>

const int botonPin = 7; // Pin del botón
const int relePin = 2;  // Pin del relé

bool motorEncendido = false;
bool estadoBotonAnterior = true;

Bounce boton = Bounce(botonPin, 25); // Debounce con tiempo de 25ms

void setup() {
  pinMode(botonPin, INPUT);
  pinMode(relePin, OUTPUT);
  digitalWrite(relePin, !motorEncendido); // Inicializar motor apagado
}

void loop() {
  boton.update();

  if (boton.fell()) {
    motorEncendido = !motorEncendido;
    digitalWrite(relePin, motorEncendido);
  }

  estadoBotonAnterior = boton.read();
}
