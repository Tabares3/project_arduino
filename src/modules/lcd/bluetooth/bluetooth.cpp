#include <Arduino.h> //Se agregan las librerias y dependencias correspondientes
#include "Bluetooth.h"

const int rx = 0;

ModuloBluetooth::ModuloBluetooth(int rx)
{
    pinRX = rx;
}

void ModuloBluetooth::inicializarBluetooth()
{
    Serial.begin(9600); // Iniciar comunicación serial para Bluetooth
}

char ModuloBluetooth::leerBluetooth()
{
    if (Serial.available() > 0)
    {
        return Serial.read();
    }
    return '\0'; // Devolver carácter nulo si no hay datos disponibles
}
