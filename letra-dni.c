#include <stdlib.h>
#include <string.h>
#include <stdio.h>
 
/* numero de cifras para el DNI */
#define kTAM 8
 
int main(int argc, char *argv[])
{
        int  dni;
        char letra[] = "TRWAGMYFPDXBNJZSQVHLCKE";
 
        if (argc != 2) {
                printf("Uso: %s <DNI>\n", argv[0]);
        } else {
            if (strlen(argv[1]) != kTAM) {
                puts("DNI no valido.");
            } else {
                dni = atoi (argv[1]);
                dni %= 23;
                printf("%s-%c\n", argv[1],letra[dni]);
             }
        }
 
        return 0;
}

