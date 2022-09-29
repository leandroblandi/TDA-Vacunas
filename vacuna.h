#ifndef VACUNA_H_INCLUDED
#define VACUNA_H_INCLUDED

struct _Vacuna;

typedef struct _Vacuna * Vacuna;


/// Setters

void setNombreVacuna(Vacuna vacuna, char nuevoNombre[]);
void setLote(Vacuna vacuna, int nuevoLote);


/// Getters

char * getNombreVacuna(Vacuna vacuna);
int getLote(Vacuna vacuna);


/// Funciones propias de _Vacuna

Vacuna cargarVacuna();
void mostrarVacuna(Vacuna vacuna);

#endif // VACUNA_H_INCLUDED
