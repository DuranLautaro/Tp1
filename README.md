"# tp1" 
---CODIGO MISTERIOSO---
El codigo misterioso nos da un dato 452 y a ese dato con pasaje por referencia lo modifica de tal forma que en la primera funcion llamada InvertirNumero, nombramos a un auxiliar que apunte al contenido del valor pasado por referencia que es el 452. Entonces dentro de la estructura de repeticion invertimos el valor del numero y el puntero pasa a apuntar al contenido del valor invertido 254.
Luego en la funcion DatoInvertidoDividoen2, divido en 2 al valor apuntado es decir 254 y queda 127.
Por ultimo en la funcion SumaDeDigitos tambien utilizamos pasaje por referencia donde un auxiliar apunta al contenido de mi variable (127) y entonces se le suma la cantidad de digitos que posee el numero, es decir, 1+2+7=10.
Luego se muestra por pantalla el valor 137
---CODIGO SIN FUNCIONAR---
Falto la biblioteca de entrada y salida(<stdio.h>), de esta forma pude ejecutar el archivo
Falto un ampersand(&) al ingresar un dato, ya que en ese caso la variable ingresada no guardaria jamas su valor sin la direccion de memoria que se almacena en el stack
Que la funcion duplicar_numero haga un pasaje por referencia(&valor) para mulplicar el valor de ese variable y agregar otra llamada a la funcion y mostrar por pantalla el valor2. La funcion antes de modificarla hacia un pasaje por parametro y al ser una funcion void no podia retornar ningun valor por lo tanto la solucion era hacer pasaje por parametro
Por ultimo agregar un ; en el return 0
