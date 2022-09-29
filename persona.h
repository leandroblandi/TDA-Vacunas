
#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include "vacuna.h"

struct _Persona;

typedef struct _Persona * Persona;


/// Setters

void setNombre(Persona persona, char nuevoNombre[]);

void setDNI(Persona persona, int nuevoDNI);


/// Getters

char * getNombre(Persona persona);

int getDNI(Persona persona);


/// Funciones propias del struct

Persona cargarPersona();

void mostrarPersona(Persona persona);

void ordenarVacunasPorLote(Persona persona);

int buscarVacunaPorLote(Persona persona, int lote);

#endif // PERSONA_H_INCLUDED
