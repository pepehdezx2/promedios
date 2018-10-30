//  A01381334
//  main.cpp
//  tareaarchivosb
//
//  Created by Jose Antonio on 22/01/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//  Algoritmo
//  declara variables con arreglos para la matricula de los alumnos, las calificaciones y el promedio
//  para poder sumar a mas de 1 alumno
//  declarar un archivo de salida que cree un archivo llamado promedios de tipo texto
//  preguntar y recibir la cantidad de alumnos y trabajos que influyen en el promedio
//  hacer un ciclo para llenar las matriculas de los alumnos y dentro un ciclo anidado que pregunte
//  y ejecute ese numero de veces la tarea para recibir datos de sus calificaciones en la tarea
// sumar dentro del ciclo todas las calificaciones y en un ciclo ir llenando el promedio dividiendo
//  el total de la calificacion entre el numero de trabajos
//  guardarlo en el archivo de salida con un ciclo e ir pasando de linea cada fin de matricula
//  cerrar el archivo
//  casos de prueba
//  3 alumnos 5 trabajos
//  matricula 123456 4 trabajos hecho calificaciones 10 9 7 10
//  matricula 234567 5 trabajos hecho calificaciones 9 8 9 9 9
//  matricula 345678 3 trabajos hecho calificaciones 7 8 6
//  se creara un archivo con cada matricula y su promedio

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // declaracion de variables y arreglos...
    int alumnos, matricula[20], trabajos, entregados, calif[20];
    double promedio[20];
    double total;
    // declaracion de archivo de salida...
    ofstream archivosalida("promedios.txt");
    // preguntar y conseguir datos de alumnos y trabajos a calificar...
    cout << "cuantos alumnos se revisaran"<< endl;
    cin >> alumnos;
    cout << "cuantos trabajos se encargaron" << endl;
    cin >> trabajos;
    // ciclo que realiza n veces segun haya alumnos...
    for (int i=0; i<alumnos; i++){
        total=0;
        cin >> matricula[i];
        cin >> entregados;
        // ciclo anidado que se repite n veces segun cuantos trabajos se hayan hecho...
        for (int c=0; c<entregados; c++){
            // consegui calificaciones de cada trabajo y sumar el total...
            cin >> calif[c];
            total+=calif[c];
        }
        promedio[i]=total/trabajos; // promedio de cada alumno...
    }
    // guardar promedio de cada alumno en un archivo de salida...
    for (int i=0; i<alumnos; i++){
        archivosalida << matricula[i] << " " << promedio[i] << endl;
    }
    // cerrar archivo...
    archivosalida.close();
    return 0;
}
