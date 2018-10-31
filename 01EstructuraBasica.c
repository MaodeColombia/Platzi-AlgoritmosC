// cuando se cree una "libreria" a ser usada en el programa (o sea que no viene dentro del compilador) no se agrega con <> sino con ""
#include <stdio.h>
//la libreria que permite usar  prinf "imprimir en pantalla"
/*entre estas dos secciones se colocan
- las variables globales (IMPORTANTE: declarar una v)
- funciones externas*/
void main()
//main() es la función padre que usa C,
{
  //dentro del blaque de {} de main está lo que el compilador analiza para sacar el programa. lo que está fuera el "linker" o enlazador es el que se encarga de importarlo para anexarlo al programa
    printf("Hola carebola");
    //todas las instrucciones deben llevar ;
}
