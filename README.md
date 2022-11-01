# C++ Ejercicio Arreglos

<img alt="points bar" align="right" height="36" src="../../blob/status/.github/activity-icons/points-bar.svg" />


```c++
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
//* Nombre:
//* Matricula:
//* Carrera:
//*************************************************

// Diseña y codifica en c++ una Función que lee del teclado todos los valores que
// almacenará en el arreglo
// concepto muy importante - paso de parámetros por referencia - tu y Yo somos uno mismo
// el argumento correspondiente es el que se modifica directamente
void leerArreglo(int arrA[], int size){
   // Añade las instrucciones y comentarios
}


// Diseña y codifica en c++ una Función que despliega el contenido del arreglo
//    - cada elemento en un renglón diferente  y
// además calcula y despliega la suma y promedio de todos los elementos del arreglo
// ver casos de prueba opcion 1
void sumaYpromedioArreglo(int arrA[], int size){
    // Añade las instrucciones y comentarios

}


// Diseña y codifica en c++ una Función que despliega los valores pares del arreglo
//    - cada elemento en un renglón diferente  y
//      calcula y despliega  la suma y promedio de los valores pares del arreglo
//      Si el arreglo no tiene valores pares la función muestra
//          "No hubo valores pares en el arreglo\n"
// ver casos de prueba opcion 2
void sumaValoresPares(int arrA[], int size){
    // Añade las instrucciones y comentarios
    
}

// Diseña y codifica en c++ una Función reporteAlumnos - despliega en pantalla el nombre de los alumnos que tuvieron
// una calificación igual o superior a la recibida en el parámetro de entrada calificacion.
// Posteriormente muestra el Total de alumnos que cumplieron usando  "Total = "
// Si ningún alumno cumple se muestra - "No hubo alumnos"
// ver casos de prueba opcion 3
void reporteAlumnos(string arrNombresAlumnos[], int arrCalificacionesAlumnos[], int size, int calificacion){
    // Añade las instrucciones y comentarios
}


int main() {
    // 1º Declaración de variables
    int arrB[5];
    
    // 2º Declaración e Inicialización de arreglos y variables desde código
    string arrNombres[] = {"Felipe","Natalia","Gustavo","Victoria", "Debanhi", "Paulina", "Vicente", "Ana Paula", "Gerardo", "Sergio", "Cho", "Gaby"};
    int arrCalificaciones[] = {110,110,100,100,100,110,120,100,110,110,100,105};
    int size = 5;
    int opcion, calificacion;
    
    // 3º leer la opcion a ejecutar
    cin >> opcion;
    
    // 4º Añade las instrucciones solicitadas:
    // solo Si es opcion 1 o 2 llamar a la función que lee 5 valores enteros del teclado
   
    // si la opcion es 1 llamar a la función sumaYpromedioArreglo(arrB, size)

    // si no Si la opcion es 2 llamar a la función sumaValoresPares(arrB, size)
    

    // si no Si la opcion es 3 leer calificación y llamar a la función      reporteAlumnos(arrNombres, arrCalificaciones, 12, calificacion)
    
    // si no es alguna de las opciones desplegar "opcion incorrecta"

    return 0;
}

```

```c++
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
```

2. Push your changes back to your assignment GitHub repo. Remember to try to make your commits atomic and your commit messages descriptive.

3. Wait a minute for the tests to run. Refresh the repo page to see if you have completed the exercise successfully.
You should score 100 marks if the test passes.
