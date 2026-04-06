#include <stdio.h>
int cuadrado(int a);
void cuadrado2 (int *a);
void invertir(int *a,int *b);
void orden (int *a, int *b);
int main () {
    int v,d;
    printf("Ingrese el valor de v:");
    scanf("%d", &v);
    printf("Ingrese el valor de d: ");
    scanf("%d", &d);
    v=cuadrado(v);
    d=cuadrado(d);
    cuadrado2(&v);
    cuadrado2(&d);
    printf("valor de v=%d",v);
    printf("\nDireccion de v: %p",&v);
    printf("\nvalor de d=%d",d);
    printf("\nDireccion de d: %p",&d);
    invertir(&v,&d);
    printf("\nValores invertidos: v=%d, d=%d\n", v, d);
    orden(&v,&d);
    printf("\nValores ordenados: menor=%d, mayor=%d\n", v, d);
    return 0;
}
int cuadrado(int a) {
    a=a*a;
    return a;
}
void cuadrado2 (int *a) {
    *a=*a*(*a);
}
void invertir(int *a,int *b) {
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    
}
void orden (int *a, int *b) {
    int aux;
    if(*a>*b) {
        aux=*a;
        *a=*b;
        *b=aux;
    }
    
}