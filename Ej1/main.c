#include <stdio.h>
#include <stdlib.h>


int main()
{
    int letra;

    int n1 = 30;
    int n2 = 10;

    int suma= n1+n2;

    printf("%d",suma);

    printf("\n\n\n");
    printf("Ingresar letra:\n");
    letra = getchar();

    printf("La letra ingresada fue: ");
    putchar(letra);
    return 0;
}
