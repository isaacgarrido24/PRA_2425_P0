#include "brazorobot.h"
#include <iostream>

int main() {
    BrazoRobotico miRobot;

    miRobot.mover(10.5, 5.0, 2.0);
    miRobot.coger();
    
    std::cout << "Coordenada X actual: " << miRobot.getX() << std::endl;
    
    return 0;
}
