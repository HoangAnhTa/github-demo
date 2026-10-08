#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t REG =   0b10111110;
  

    if (REG & (1<<3)){
        printf("Bit 3 = 1\n");
    }
    else
    {
        printf("Bit 3 = 0\n");
    }
    REG ^= (1<<6);
 printf("REG = 0x%02X\n", REG);
}