#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "funciones.h"
#define MAXIMA_LONGITUD_CADENA 50

int main(){
    char vectorPacientes[][MAXIMA_LONGITUD_CADENA] = {"Paciente 1", "Paciente 2", "Paciente 3", "Paciente 4"};
    char paciente[MAXIMA_LONGITUD_CADENA];
    bool bandera = false;
    int cantidadCaracteres;
    printf("Digite el nombre del paciente a buscar: ");
    fgets(paciente,50,stdin);
    strtok(paciente,"\n");
    bandera = existePacienteAMonitorear(paciente, vectorPacientes);
    if(bandera)
    {
        cantidadCaracteres = strlen(paciente);
        printf("EL paciente %s con una cantidad de caracteres %d fue encontrado \n", paciente, cantidadCaracteres);
    }
    else{
        printf("El paciente %s no fue encontrado \n", paciente);
    }
    return 0;
}
