[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/MCJunYEq)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=23741335&assignment_repo_type=AssignmentRepo)
# Lab06: Comunicación UART con PIC18F45K22

## Integrantes
# [Jose Angel Figueroa Castañeda ](https://github.com/joseanfigueroaca)

# [Diego Fernando Yugue Robayo](https://github.com/DiegoYugue)

# [Nicolas Esteban Martines Rocha](https://github.com/NicolasMartinez)
## Documentación
[PICK18F45K22] (https://www.alldatasheet.com/datasheet-pdf/download/348759/MICROCHIP/PIC18F45K22.html)

 ## Marco teorico 

En este laboratorio exploramos cómo lograr que un microcontrolador y una computadora se comuniquen en tiempo real utilizando una conexión serial. Para que ambos se entiendan, deben "hablar el mismo idioma" a través del cable. Como el microcontrolador no puede enviar valores matemáticos directos, primero debe traducir sus mediciones numéricas (como un voltaje) a texto simple. Luego, envía este mensaje hacia la computadora por una "puerta" virtual o puerto, el cual es muy estricto y solo permite que un programa escuche a la vez. Cuando el texto llega con el formato exacto que configuramos —incluyendo las palabras clave y los saltos de línea correctos—, nuestro programa en Python puede leerlo de inmediato. Finalmente, Python toma esos mensajes, extrae los números y los transforma al instante en una gráfica visual, permitiéndonos ver el comportamiento del circuito de forma clara y dinámica.

## Objetivos

1. Configure el módulo UART en un microcontrolador PICpara permitir la comunicación serial.

2. Transmitir datos a través del UART desde el PIC hacia un terminal serial conectado a través de USB-UART.

3. Implementar funciones de transmisión y recepción de datos a través de UART .

4. Visualizar los datos recibidos en el terminal y comprender el proceso de transmisión asíncrona.

## Procedimiento 

El procedimiento de este proyecto se realizó paso a paso para asegurar el éxito de la comunicación. Primero, hicimos una prueba básica de conexión para confirmar que los cables estuvieran bien puestos y que la computadora pudiera "escuchar" a nuestra tarjeta electrónica, algo así como hacer una prueba de micrófono antes de un evento. Le dimos a la tarjeta la instrucción de enviar un simple mensaje de texto diciendo "Hola" repetidamente, y al ver este saludo claramente en una pantalla de monitoreo, comprobamos que la carretera de información estaba abierta. Una vez superada esta etapa, pasamos al objetivo principal: lograr que la computadora dibujara una gráfica en vivo. Para esto, cambiamos las instrucciones de la tarjeta para que borrara el saludo y empezara a enviar números de forma continua, simulando ser un sensor. Como el programa de la computadora es muy estricto para leer datos, tuvimos que empacar estos números usando un formato exacto: escribimos la palabra "Voltaje:" antes de cada número y le pusimos un salto de línea al final, como si apretáramos la tecla "Enter". De esta manera, al abrir nuestro programa de dibujo, este pudo reconocer la frase secreta, atrapar cada número que llegaba y dibujar rápidamente puntitos en la pantalla que, al unirse, le dieron vida a nuestra gráfica en movimiento.



## Diagramas
MONTAJE

<img width="988" height="603" alt="image" src="https://github.com/user-attachments/assets/1f2b61d6-52d5-4dcb-a376-3b072afcdeb6" />

PARTE 1

<img width="980" height="566" alt="image" src="https://github.com/user-attachments/assets/31337f4b-96ed-407d-88f4-65d92aed0de6" />

PARTE 2

<img width="1600" height="838" alt="image" src="https://github.com/user-attachments/assets/fb7d4cf2-91c8-412c-9f90-e9cf8a21a8ca" />

CODIGO PYTHON

<img width="1600" height="840" alt="image" src="https://github.com/user-attachments/assets/afe683f8-56e8-4cc8-8b04-e517af2e9a10" />

## Evidencias de implementación
[parte do del montaje ](https://youtu.be/gFHOwWI7sXg?si=kx4-zpO95poqRgmp)

## Conclusiones 

- 1 El puerto de comunicación es exclusivo: Solo un programa puede escuchar al microcontrolador a la vez. Comprobamos que si dejamos un monitor como PuTTY abierto, el programa de Python se bloquea y no puede dibujar la gráfica.

- 2 El microcontrolador solo envía texto, no matemáticas: Para mandar números (como un voltaje) a la computadora, primero es obligatorio convertirlos a texto plano usando código. Si intentamos enviar el número directamente, la computadora recibe símbolos sin sentido.

- 3 El formato del mensaje debe ser exacto: Para que el microcontrolador y Python se entiendan, tienen que hablar el mismo idioma. Si olvidamos poner la palabra clave exacta o el salto de línea al final del texto, Python no sabe qué leer y la gráfica se queda en blanco.
