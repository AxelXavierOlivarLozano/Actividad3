///
//  main.cpp
//  Arreglos
//
//  Created by Ma. Guadalupe Roque Díaz de León on 31/10/22.
//
// Objetivos - arreglos unidimensionales -
//           - ciclo for
//           - uso de condicionales if - else
//           - arreglos como parámetros de una función - paso de parámetros x REFERENCIA
//           - llamar a una función usando arreglos
//           - funciones void en c++
//
#include <iostream>
using namespace std;
//*************************************************
//* Nombre:Axel
//* Matricula: A0126176
//* Carrera:IDM
//*************************************************

// Función que lee del teclado todos los valores que
// almacenará en el arreglo
// concepto muy importante - paso de parámetros por referencia - tu y Yo somos uno mismo
// el argumento correspondiente es el que se modifica directamente
void leerArreglo(int arrA[], int size){
    cout << "Ingrese " << size << " valores enteros:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arrA[i];
    }
}

// Función que despliega el contenido del arreglo
// y además calcula y despliega la suma y promedio de todos los elementos del arreglo
void sumaYpromedioArreglo(int arrA[], int size){
    int suma = 0;
    for (int i = 0; i < size; i++) {
        cout << arrA[i] << endl;
        suma += arrA[i];
    }
    cout << "Total = " << suma << endl;
    cout << "Promedio = " << static_cast<double>(suma) / size << endl;
}

// Función que despliega los valores pares del arreglo
// y calcula y despliega la suma y promedio de los valores pares del arreglo
void sumaValoresPares(int arrA[], int size){
    int suma = 0;
    int cantidadPares = 0;
    for (int i = 0; i < size; i++) {
        if (arrA[i] % 2 == 0) {
            cout << arrA[i] << endl;
            suma += arrA[i];
            cantidadPares++;
        }
    }
    if (cantidadPares > 0) {
        cout << "Total = " << suma << endl;
        cout << "Promedio = " << static_cast<double>(suma) / cantidadPares << endl;
    } else {
        cout << "No hubo valores pares en el arreglo" << endl;
    }
}

// Función reporteAlumnos - despliega en pantalla el nombre de los alumnos que tuvieron
// una calificación igual o superior a la recibida en el parámetro de entrada calificacion.
// Posteriormente muestra el Total de alumnos que cumplieron.
// Función reporteAlumnos - despliega en pantalla el nombre de los alumnos que tuvieron
// una calificación igual o superior a la recibida en el parámetro de entrada calificacion.
void reporteAlumnos(string arrNombresAlumnos[], int arrCalificacionesAlumnos[], int size, int calificacion){
    int totalCumplen = 0; // Inicializa el contador de alumnos que cumplen en cero.

    // Recorre el arreglo de calificaciones y verifica si cada calificación es igual o superior a la calificación requerida.
    for (int i = 0; i < size; i++) {
        if (arrCalificacionesAlumnos[i] >= calificacion) { // Comprueba si la calificación es igual o superior.
            totalCumplen++; // Incrementa el contador de alumnos que cumplen.
            cout << i + 1 << " " << arrNombresAlumnos[i] << " " << arrCalificacionesAlumnos[i] << endl; // Muestra el número, nombre y calificación del alumno.
        }
    }

    if (totalCumplen > 0) { // Si al menos un alumno cumple con la calificación requerida.
        // Muestra el total de alumnos que cumplieron.
        cout << "Total = " << totalCumplen << endl;
    } else {
        // Si ningún alumno cumple, muestra un mensaje indicando que no hubo alumnos que cumplieran con la calificación.
        cout << "No hubo alumnos que cumplieran con la calificación requerida." << endl;
    }
}
int main() {
    const int size = 5; // Tamaño del arreglo arrB
    int arrB[size]; // Declarar el arreglo con el tamaño correcto

    string arrNombres[] = {"Felipe", "Natalia", "Gustavo", "Victoria", "Debanhi", "Paulina", "Vicente", "Ana Paula", "Gerardo", "Sergio", "Cho", "Gaby"};
    int arrCalificaciones[] = {110, 110, 100, 100, 100, 110, 120, 100, 110, 110, 100, 105};

    int opcion, calificacion;
    
    cin >> opcion;
    
    if (opcion == 1 || opcion == 2) {
        leerArreglo(arrB, size);
    }

    if (opcion == 1) {
        sumaYpromedioArreglo(arrB, size);
    } else if (opcion == 2) {
        sumaValoresPares(arrB, size);
    } else if (opcion == 3) {
        cin >> calificacion;
        reporteAlumnos(arrNombres, arrCalificaciones, 12, calificacion);
    } else {
        cout << "Opción incorrecta" << endl;
    }
    return 0;
}


/* Casos de Prueba
// caso 1 - opcion 1
Datos de entrada:
1
90
100
40
30
40
Datos de salida:
90
100
40
30
40
Total = 300
Promedio = 60

// caso 2 - opcion 1
Datos de entrada:
1
2
3
4
5
6
Datos de salida:
2
3
4
5
6
Total = 20
Promedio = 4

// caso 3 - opcion 1
Datos de entrada
1
10
20
30
40
50
Datos de salida
10
20
30
40
50
Total = 150
Promedio = 30

// caso 4 - opcion 2
Datos de entrada:
2
1
3
5
7
9
Datos de salida:
No hubo valores pares en el arreglo

// caso 5 - opcion 2
Datos de entrada:
2
10
15
20
25
30
Datos de salida:
10
20
30
Total = 60
Promedio = 20

// caso 6 - opcion 2
Datos de entrada:
2
1
500
2
700
7
Datos de salida:
500
2
700
Total = 1202
Promedio = 400.667

// caso 7 - opcion 3
Datos de entrada:
3
110

Datos de salida:
1 Felipe 110
2 Natalia 110
3 Paulina 110
4 Vicente 120
5 Gerardo 110
6 Sergio 110
Total = 6

// caso 8 - opcion 3
Datos de entrada:
3
120

Datos de salida:
1 Vicente 120
Total = 1

// caso 9 - opcion 3
Datos de entrada:
3
300
Datos de salida:
No hubo alumnos


*/
