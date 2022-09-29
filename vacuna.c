
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "vacuna.h"


struct _Vacuna
{
    char nombre[20];
    int lote;
};

/// Setters

void setNombreVacuna(Vacuna vacuna, char nuevoNombre[])
{
    strcpy(vacuna->nombre, nuevoNombre);
}

void setLote(Vacuna vacuna, int nuevoLote)
{
    vacuna->lote = nuevoLote;
}

/// Getters

char * getNombreVacuna(Vacuna vacuna)
{
    return vacuna->nombre;
}

int getLote(Vacuna vacuna)
{
    return vacuna->lote;
}


/// Funciones propias de _Vacuna

Vacuna cargarVacuna()
{
    char nombre[20];
    int lote;

    Vacuna vacuna = malloc(sizeof(struct _Vacuna));

    printf("\nIngrese nombre de la vacuna: ");
    fflush(stdin);
    gets(nombre);

    printf("\nIngrese el lote de la vacuna %s: ", nombre);
    scanf("%d", &lote);

    setNombreVacuna(vacuna, nombre);
    setLote(vacuna, lote);

    return vacuna;
}

void mostrarVacuna(Vacuna vacuna)
{
    printf("\nVacuna:");
    printf("\n\tNombre: %s", getNombreVacuna(vacuna));
    printf("\n\tLote: %d", getLote(vacuna));
}
