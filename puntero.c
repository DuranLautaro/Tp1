#include <stdio.h>
#include <stdlib.h>
int main() {
    int a=5;
    int *p=&a;
    printf("Contenido del puntero: %d",*p);
    printf("\nDireccion de memoria almacenada por el puntero: %p",p);
    printf("\nDireccion de memoria de la variable: %p",&a);
    printf("\nDireccion de memoria del puntero %p",&p);
    printf("\nCantidad de bytes que ocupa la variable %zu",sizeof(a));
}