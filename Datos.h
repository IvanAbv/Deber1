#ifndef DATOS_H
#define DATOS_H

#include <string>

class Datos {
    private:

        std::string nombre,
        apellido,
        carnet;

        public:
       
        Datos(std::string _nombre, std::string _apellido, std::string _carnet);
        void setNombre(std::string _nombre);
        void setApellido(std::string _apellido);
        void setCarnet(std::string _carnet);

        std::string getNombre();
        std::string getApellido();
        std::string getCarnet();
};

#endif
        