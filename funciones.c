#include <string.h>
#include <stdbool.h>

#define MAXIMA_LONGITUD_CADENA 50

bool existePacienteAMonitorear(char nombrePaciente[], char vectorPacientes[][MAXIMA_LONGITUD_CADENA]){
    bool bandera = false;
    for (int i = 0; i < 5; i++){
        if(strcmp(nombrePaciente, vectorPacientes[i]) == 0){
            bandera = true;
        }
    }
    return bandera;
}