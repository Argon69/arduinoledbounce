# Control de Motor con Botón utilizando Bounce2

Este proyecto consiste en un sistema que permite controlar el encendido y apagado de un motor utilizando un botón y un relé, implementando debounce para evitar rebotes en la lectura del botón.

## Componentes necesarios

- Arduino Uno (u otro modelo compatible)
- Botón pulsador
- Relé
- Motor
- Resistencias y cables de conexión

## Instalación y configuración

1. Conecta el botón pulsador al pin designado en el código como `botonPin` (por ejemplo, pin 7 en este caso).
2. Conecta el relé al pin designado como `relePin` (por ejemplo, pin 2 en este caso).
3. Conecta el motor al relé.
4. Instala la biblioteca Bounce2 para el debouncing del botón en el IDE de Arduino.
5. Sube el código proporcionado al Arduino utilizando el IDE de Arduino.

## Uso

- Al presionar el botón, el motor cambiará su estado de encendido a apagado o viceversa.
- Se implementa debounce para evitar rebotes en la lectura del botón, lo que proporciona una lectura más confiable.

## Personalización

- Puedes ajustar el tiempo de debounce modificando el valor pasado al constructor de la clase Bounce. En este caso, se utiliza un tiempo de 25ms (`Bounce boton = Bounce(botonPin, 25);`).
- Puedes cambiar los pines asignados para el botón y el relé modificando las constantes `botonPin` y `relePin` en el código según sea necesario.

## Contribuciones

¡Las contribuciones son bienvenidas! Si deseas mejorar este proyecto, por favor, siéntete libre de enviar pull requests o abrir issues para discutir nuevas ideas.

## Licencia

Este proyecto está bajo la Licencia [MIT](LICENSE).
