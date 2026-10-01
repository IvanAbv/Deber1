#include "Datos.h"

Datos::Datos(std::string _nombre, std::string _apellido, std::string _carnet) {
    nombre = _nombre;
    apellido = _apellido;
    carnet = _carnet;
}

void Datos::setNombre(std::string _nombre) {
    nombre = _nombre;
}
void Datos::setApellido(std::string _apellido) {
    apellido = _apellido;
}
void Datos::setCarnet(std::string _carnet) {
    carnet = _carnet;
}
std::string Datos::getNombre() {
    return nombre;
}
std::string Datos::getApellido() {
    return apellido;
}
std::string Datos::getCarnet() {
    return carnet;
}
