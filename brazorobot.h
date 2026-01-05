#ifndef brazorobot_H
#define brazorobot_H

class BrazoRobotico {
private:
    // Atributos privados
    double x, y, z;
    bool sujetandoObjeto;

public:
    // Constructor
    BrazoRobotico(double x = 0, double y = 0, double z = 0, bool sujetando = false);

    // Métodos consultores (getters)
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetando() const;

    // Métodos de acción
    void coger();
    void soltar();
    void mover(double nuevaX, double nuevaY, double nuevaZ);
};

#endif
