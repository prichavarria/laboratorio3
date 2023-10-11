#include <stdio.h>
#include <math.h>

int array[] = {2, 4, 6, 23, 56, 79};
    int n = sizeof(array) / sizeof(array[0]);

//Funcion para la busqueda lineal

int buscaLineal(int array[], int n, int dato) {
    for (int i = 0; i < n; i++) {
        if (array[i] == dato) {
            return i; // Si el dato esta en el array, se devuelve la posicion
        }
    }
    return -18;// En caso de que el dato no se encuentre en el array devuelve el num -18.

}

//Funcion para la busqueda binaria 

int buscaBin(int array[], int n, int dato) {
    int inicio = 0, fin = n - 1;
    while (inicio <= fin) {
        int medio = floor((inicio + fin) / 2);
        
        if (array[medio] == dato) {
            return medio; // Si el dato esta en el medio del array, se devuelve la posicion
        }
        if (array[medio] < dato) {
            inicio = medio + 1; // Si el dato es mayor al valor en medio del array, busca en la segunda parte del intervalo
        } else {
            fin = medio - 1; // Si el dato es menor al valor en medio del array, busca en la primera parte del intervalo
        }
    }
    return -18; // En caso de que el dato no se encuentre en el array devuelve el num -18.
}

//Funcion para la busqueda binaria recursiva

int buscaBinRecur(int array[], int inicio, int fin, int dato) {
    if (inicio > fin) return -18;
    int medio = (inicio + fin) / 2;
    if (array[medio] == dato) {
            return medio; 
            // Si el dato esta en el medio del array se devuelve la posicion
    int array[] = {2, 4, 6, 23, 56, 79}; 
        }
    if (array[medio] < dato) {
            inicio = medio + 1; // Si el dato es mayor al valor en medio del array, busca en la segunda parte del intervalo
        } else {
            fin = medio - 1; // Si el dato es menor al valor en medio del array, busca en la primera parte del intervalo
        }     
        return buscaBinRecur(array, dato, inicio, fin);  // En caso de que el dato no se encuentre en el array devuelve el num -18. 
}

int main() {
    
    int dato;

//Se ingresa un valor entero
    printf ("Ingrese un valor entero");
    scanf("%d", &dato);

// Se inicia la busqueda lineal

int posicionLineal = buscaLineal(array, n, dato);
if (posicionLineal != -18) {
    printf("Busqueda lineal: El dato ingresado %d se encuentra en el puesto %d del arreglo.\n", dato, posicionLineal);
} else {
    printf("Busqueda lineal: El dato ingresado %d no fue encontrado en el arreglo.\n", dato);
}

// Se inicia la busqueda binaria

int posicionBin = buscaBin(array, n - 1, dato);
if (posicionBin != -18) {
    printf("Busqueda binaria: El dato ingresado %d se encuentra en el puesto %d del arreglo.\n", dato, posicionLineal);
} else {
    printf("Busqueda binaria: El dato ingresado %d no fue encontrado en el arreglo.\n", dato);
}

// Se inicia la busqueda binaria recursiva

int posicionBinRecur = buscaBinRecur(array, 0, n -1, dato);
if (posicionBinRecur != -18) {
    printf("Busqueda binaria recursiva: El dato ingresado %d se encuentra en el puesto %d del arreglo.\n", dato, posicionLineal);
} else {
    printf("Busqueda binaria recursiva: El dato ingresado %d no fue encontrado en el arreglo.\n", dato);
}
return 0;
}