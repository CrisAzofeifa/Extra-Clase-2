#include <iostream>
#include "CodigoSingleton.h"
#include <iostream>

using namespace std;

int main() {

    /*
     * Prueba del funcionamiento del patrón de diseño Singleton
     */
    CodigoSingleton *pruebaSingleton = pruebaSingleton->getInstance();
    CodigoSingleton *pruebaSin = pruebaSin->getInstance();

    if(pruebaSingleton == pruebaSin){
        cout<<"Son la misma instancia de la clase.";
    }



}