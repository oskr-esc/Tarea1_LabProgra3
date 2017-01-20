#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b){
        return a;
    }else{
        return b;
    }
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if(a<b){
        return a;
    }else{
        return b;
    }
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b){
        if (a>c){
            return a;
        }else{
            return c;
        }
    }else{
        return b;
    }
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    int val=arreglo[posicion];
    return val;
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int n=0;
    int maximo=0;
    for(int c=0;c<tamano;c++){
        n=arreglo[c];
        if (n>maximo){
            maximo=n;
        }
    }
    return maximo;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int n=0;
    int minimo=INT_MAX;
    for(int c=0;c<tamano;c++){
        n=arreglo[c];
        if (n<minimo){
            minimo=n;
        }
    }
    return minimo;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int total=0;
    for(int c=0;c<tamano;c++){
        total+=arreglo[c];
    }
    int prom = total/tamano;
    return prom;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
