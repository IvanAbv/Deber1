#include <iostream>
#include "Datos.h"

int main() {
    
    Datos persona("Juan", "Perez", "123456");

    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Apellido: " << persona.getApellido() << std::endl;
    std::cout << "Carnet: " << persona.getCarnet() << std::endl;

    return 0;
}   