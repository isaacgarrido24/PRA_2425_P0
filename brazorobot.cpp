#include "brazorobot.h"
#include <iostream>

// Constructor: Inicializa las coordenadas y el estado de carga
BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetando) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->sujetandoObjeto = sujetando;
}

// Consultores
double BrazoRobotico::getX() const { return x; }
double BrazoRobotico::getY() const { return y; }
double BrazoRobotico::getZ() const { return z; }
bool BrazoRobotico::estaSujetando() const { return sujetandoObjeto; }

// Cambia el estado a sujetando si no tiene nada ya
void BrazoRobotico::coger() {
    if (!sujetandoObjeto) {
        sujetandoObjeto = true;
        std::cout << "Objeto cogido con exito." << std::endl;
    } else {
        std::cout << "El brazo ya tiene un objeto." << std::endl;
    }
}

// Cambia el estado a no sujetando
void BrazoRobotico::soltar() {
    if (sujetandoObjeto) {
        sujetandoObjeto = false;
        std::cout << "Objeto soltado." << std::endl;
    } else {
        std::cout << "El brazo no tiene nada que soltar." << std::endl;
    }
}

// Actualiza las coordenadas 3D
void BrazoRobotico::mover(double nuevaX, double nuevaY, double nuevaZ) {
    x = nuevaX;
    y = nuevaY;
    z = nuevaZ;
    std::cout << "Brazo movido a: (" << x << ", " << y << ", " << z << ")" << std::endl;
}
