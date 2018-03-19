//
// Created by cris on 19/03/18.
//

#ifndef EXTRACLASE_2_CODIGOSINGLETON_H
#define EXTRACLASE_2_CODIGOSINGLETON_H


class CodigoSingleton {

private:
    //Variable que controla si existe la clase
    static CodigoSingleton* unicaInstancia;


public:
    CodigoSingleton(void);
    ~CodigoSingleton(void);


    /*
     * Se implementa el patrón de diseño Singleton
     */
    static CodigoSingleton *getInstance()
    {
        //Si la instancia de la clase no existe la crea
        if(unicaInstancia == nullptr) {
            unicaInstancia = new CodigoSingleton();
        }

        //Devuelve la instancia unica
        return unicaInstancia;
    }
};


#endif //EXTRACLASE_2_CODIGOSINGLETON_H
