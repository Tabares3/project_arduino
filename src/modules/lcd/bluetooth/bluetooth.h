#ifndef BLUETOOTH_H // se utiliza para evitar la inclusión múltiple de un mismo archivo de encabezado (.h) en un programa
#define BLUETOOTH_H // Se define el nombre

#include <Arduino.h> //Se agrega la libreria correspondientes

class ModuloBluetooth // Se establece la clase
{
public:
    ModuloBluetooth(int rx); // Se declaran las variables publicas y privadas
    void inicializarBluetooth();
    char leerBluetooth();

private:
    int pinRX;
};

#endif