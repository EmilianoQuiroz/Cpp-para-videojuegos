//***** Programacion secuencial en C++ *****//

/*
Cuando en un problema sólo participan operaciones, entradas y salidas se la denomina una estructura secuencial.
Los problemas diagramados y codificados previamente emplean solo estructuras secuenciales.
La programación requiere una práctica ininterrumpida de diagramación y codificación de problemas.

! Problema:
Realizar la carga de dos números enteros por teclado e imprimir su suma y su producto.
Tenemos dos entradas num1 y num2, dos operaciones: realización de la suma y del producto de los valores ingresados y dos salidas, que son los resultados de la suma y el producto de los valores ingresados. En el símbolo de impresión podemos indicar una o más salidas, eso queda a criterio del programador, lo mismo para indicar las entradas por teclado.
*/

//*Solucion
#include <iostream>

using namespace std;

int main()
{

    int num1, num2, suma, producto;//Inicializamos las variables que necesitamos con su respectivo tipo de dato
    
    cout <<"Ingrese primer valor:";//Pedimos al usuario que ingrese un numero
    cin >>num1;//Guardamos el numero en la variable
    cout <<"Ingrese segundo valor:";//Le pedimos al usuario que ingrese otro numero
    cin >>num2;//Lo guardamos en su variable
    suma = num1 + num2;//Sumamos los dos valores
    producto = num1 * num2;//Acemos la multiplicacion de los dos valores
    cout <<"La suma de los dos valores es:";
    cout <<suma;//Mostramos en pantalla el resultado de la suma
    cout <<"\n";//Salto de linea
    cout <<"El producto de los dos valores es:";
    cout <<producto;//Mostramos en pantalla el resultado de la multiplicacion
    
    
    return 0;    
}