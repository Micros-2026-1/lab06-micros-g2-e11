#include <xc.h>
#include <stdio.h>
#include "lab06.h"



void main(void) {
    OSCCON = 0b01110000; // 16MHz
    UART_Init();          
    
    float mi_voltaje = 0.0;
    char mensaje[30]; 

    while(1) {
        
        mi_voltaje += 0.1;
        if(mi_voltaje > 5.0) mi_voltaje = 0.0;

        
        sprintf(mensaje, "Voltaje: %.2f\r\n", mi_voltaje);

        UART_WriteString(mensaje);
        
        __delay_ms(30); 
    }
}