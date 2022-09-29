
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "persona.h"
#include "vacuna.h"

#define DOSIS 5

struct _Persona
{
    char nombre[20];
    int dni;

    Vacuna vacunas[5];
};


/// Setters

void setNombre(Persona persona, char nuevoNombre[])
{
    strcpy(persona->nombre, nuevoNombre);
}

void setDNI(Persona persona, int nuevoDNI)
{
    persona->dni = nuevoDNI;
}


/// Getters

char * getNombre(Persona persona)
{
    return persona->nombre;
}

int getDNI(Persona persona)
{
    return persona->dni;
}


/// Funciones propias de _Persona

Persona cargarPersona()
{

    char nombre[20];
    int dni;

    Persona persona = malloc(sizeof(struct _Persona));

    printf("\nIngrese su nombre: ");
    fflush(stdin);
    gets(nombre);

    printf("\n%s, ingresa tu DNI: ", nombre);
    scanf("%d", &dni);

    for(int i = 0; i < DOSIS; i++)
    {
        persona->vacunas[i] = cargarVacuna();
    }

    setNombre(persona, nombre);
    setDNI(persona, dni);

    return persona;

}

void mostrarPersona(Persona persona)
{
    printf("\nPersona:");
    printf("\n\tNombre completo: %s", getNombre(persona));
    printf("\n\tDNI: %d", getDNI(persona));

    for(int i = 0; i < DOSIS; i++)
    {
        mostrarVacuna(persona->vacunas[i]);
    }
}

int buscarVacunaPorLote(Persona persona, int lote)
{
    int encontrado = -1;

    for(int i = 0; i < DOSIS; i++)
    {
        if(getLote(persona->vacunas[i]) == lote)
        {
            encontrado = i;
            i = DOSIS;
        }
    }

    return encontrado;
}

void ordenarVacunasPorLote(Persona persona)
{
    Vacuna vacunaAuxiliar;

    for(int i = 0; i < DOSIS; i++)
    {
        for(int j=0; j < (DOSIS - 1); j++ )
        {
            if(getLote(persona->vacunas[j]) > getLote(persona->vacunas[j+1]))
            {
                vacunaAuxiliar = persona->vacunas[j];
                persona->vacunas[j] = persona->vacunas[j+1];
                persona->vacunas[j+1] = vacunaAuxiliar;
            }
        }
    }
}
