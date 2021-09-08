#include <stdio.h>
#include <stdlib.h>

void mostrar (int a, int b)
{
    printf("%d\n%d\n", a, b);
}

int main()
{
int a,b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    mostrar (a, b);
}


