# KiloMux-Shield
Repositorio para el KiloMux Shield para Arduino desarrollado en Yaeltex

El KiloMux es un shield para Arduino UNO que expande la cantidad de
entradas y salidas usando multiplexores e integrados 79HC595 y permite
la comunicación via MIDI, ya sea por USB o por hardware.

Se tienen 16 salidas digitales (por ahora sin PWM) y 32 entradas con la
posibilidad de combinar 16 digitales y 16 analógicas o 32 analógicas o
32 digitales. El shield tiene también libres los pines 2, 3, 12 y 13,
pensado para conectar un sensor de ultrasonido y un botón y un LED para
su activación.

En el repositorio se encuentra el código de Arduino que realiza la
lectura de las entradas, con funciones para enviar los datos usando la
librería MIDI de Arduino, o por serial y que recibe datos por MIDI o
serial y enciende las salidas corresponientes.

Se pueden encontrar las librerías de código necesarias para el
funcionamiento del sketch, que son la MuxShield (modificada de la de
MayhewLabs), MIDI (Arduino) y NewPing (para el sensor de ultrasonido).

También se encuentra en el repositorio entero de HIDUINO, el firmware
necesario para envíar MIDI por USB y que la PC reconozca a la Arduino
como un dispositivo MIDI. En la carpeta "hiduino-master" se puede
encontrar un tutorial para recompilar (y renombrar) el firmware y para
cargarlo en la Arduino.

Si tenes dudas, sugerencias o comentarios acerca del shield, escribi a
franco@yaeltex.com.ar.

Saludos!
