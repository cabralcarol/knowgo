#include <stdio.h>
#include <uart.h>

#define COUNT 1000
void main() {

    printf("Hello World!!");
    for (size_t i = 0; i < COUNT; i++)
    {
        printUART(i);
    }
    
}
