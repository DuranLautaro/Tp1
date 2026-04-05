#include <stdio.h>

void InvertirNumero(int *p) {
    int aux = *p;
    int invertido = 0;
    while (aux > 0) {
        invertido = (invertido * 10) + (aux % 10);
        aux = aux / 10;
    }
    *p = invertido; //apunta a la direccion del numero invertido
}

void DatoInvertidoDividoen2(int *p) {
    *p = *p / 2; //divido en 2 al numero invertido
}

void SumaDeDigitos(int *p) {
    int aux = *p;
    int suma = 0;
    while (aux > 0) {
        suma = suma + (aux % 10);
        aux = aux / 10;
    }
    *p = *p + suma; //le sumo los digitos al contenido apuntado
}

void procesar_enigma(int *valor_referencia) {
    InvertirNumero(valor_referencia);
    DatoInvertidoDividoen2(valor_referencia);
    SumaDeDigitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}