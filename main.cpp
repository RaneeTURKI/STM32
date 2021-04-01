
#include "mbed.h"

DigitalOut led1(LED1);

int main()
{
    while (true)
    {
        printf("Blink!\n");
        led1 = !led1;
        wait(1);
    }
}