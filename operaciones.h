//
// Created by Ciro on 10/5/2023.
//

#ifndef EDYA1_4_OPERACIONES_H
#define EDYA1_4_OPERACIONES_H

typedef struct punto{
    int x;
    int y;
    int z;
}Punto; //se le pone mayuscula(buenas practicas de programacion)

Punto suma(Punto p0, Punto p1);
float distanciaO(Punto p0);
Punto prodVectorial(Punto p0, Punto p1);
#endif //EDYA1_4_OPERACIONES_H
