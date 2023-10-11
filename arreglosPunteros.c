#include <stdio.h>


// Se usa la recomendacion para el prototipo de las funciones
void enconMinMax(int *array, int *minimo, int *maximo, int longitud);
int enconMin(int *array, int longitud);
int enconMax(int *array, int longitud);




//Encontrar el valor minimo del array
int enconMin(int *array, int longitud) {
    int minimo = array[0];
    for (int i = 1; i < longitud; i++) {
        if (array[i] < minimo) {
            minimo = array[i]; 
        }
    }
    return minimo;
}

//Encontrar el valor maximo del array
int enconMax(int *array, int longitud) {
    int maximo = array[0];
    for (int i = 1; i < longitud; i++) {
        if (array[i] > maximo) {
            maximo = array[i]; 
        }
    }
    return maximo;
}

//Encontrar min y maximo con los punteros
void enconMinMax(int *array, int *minimo, int *maximo, int longitud) {
    *minimo = array[0];

    *maximo = array[0];

    for (int i = 1; i < longitud; i++) {
        if (array[i] < *minimo) {
            *minimo = array[i];
        }
        if (array[i] > *maximo) {
            *maximo = array[i];
        }
    }
}

int main() {
    int array[] = {21, 24, 65, 3, 56, 12, 35, 15}; //Array desordenado
    int longitud  = sizeof(array) / sizeof(array[0]); //Calculo la longitud del array


    // Encuentro el dato minimo del array
    int minimo =  enconMin(array, longitud);

    // Encuentro el dato minimo del array
    int maximo = enconMax(array, longitud);

    //Se hace un printf de los resultados obtenidos
    printf("El valor minimo del arreglo es %d\n", minimo);

    printf("El valor maximo del arreglo es %d\n", maximo);

    enconMinMax(array, &minimo, &maximo, longitud);
}


