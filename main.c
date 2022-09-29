
#include <stdio.h>
#include <stdlib.h>

#include "persona.h"

int main()
{

    Persona persona = cargarPersona();
    ordenarVacunasPorLote(persona);
    mostrarPersona(persona);

    printf("\nBuscando vacuna lote 1: %d", buscarVacunaPorLote(persona, 1));
}

