//***** Estructuras condicionales simples y compuestas *****//

/*
? Estructura condicional simple (if)

No todos los problemas pueden resolverse empleando estructuras secuenciales. Cuando hay que tomar una decisión aparecen las estructuras condicionales.
En nuestra vida diaria se nos presentan situaciones donde debemos decidir.
¿Elijo la carrera A o la carrera B?
¿Me pongo este pantalón?
Para ir al trabajo, ¿elijo el camino A o el camino B?
Al cursar una carrera, ¿elijo el turno mañana, tarde o noche?

Por supuesto que en un problema se combinan estructuras secuenciales y condicionales.
*/

//! Problema:
/*
Ingresar el sueldo de una persona, si supera los 3000 pesos mostrar un mensaje en pantalla indicando que debe abonar impuestos.
Podemos observar lo siguiente: Siempre se hace la carga del sueldo, pero si el sueldo que ingresamos supera 3000 pesos se mostrará por pantalla el mensaje "Esta persona debe abonar impuestos", en caso que la persona cobre 3000 o menos no aparece nada por pantalla.
*/

//? Solucion
#include <iostream>

using namespace std;

int main(){
    int sueldo;//Inicializamos la variable sueldo con su tipo de dato entero

    cout <<"Ingrese su sueldo: ";//Le pedimos al usuario que digite su sueldo
    cin >>sueldo;//Guardamos ese valor en la variable sueldo
    cout << endl;//Salto de linea

    if(sueldo >= 3000){//Si sueldo es mayor o igual 3000
        cout << "Usted debe pagar impuestos" << endl;//Entonces mostramos el siguiente mensaje en  pantalla
    }

    return 0;
}

/*
?La palabra clave "if" indica que estamos en presencia de una estructura condicional; seguidamente disponemos la condición entre paréntesis. Por último encerrada entre llaves las instrucciones de la rama del verdadero.
Es necesario que las instrucciones a ejecutar en caso que la condición sea verdadera estén encerradas entre llaves { }, con ellas marcamos el comienzo y el fin del bloque del verdadero.
Ejecutando el programa e ingresamos un sueldo superior a 3000 pesos. Podemos observar como aparece en pantalla el mensaje "Esta persona debe abonar impuestos", ya que la condición del if es verdadera.
Volvamos a ejecutar el programa y carguemos un sueldo menor o igual a 3000 pesos. No debe aparecer mensaje en pantalla.
*/

//? Estructura condicional compuesta.
/*
Cuando se presenta la elección tenemos la opción de realizar una actividad u otra. Es decir tenemos actividades por el verdadero y por el falso de la condición. Lo más importante que hay que tener en cuenta que se realizan las actividades de la rama del verdadero o las del falso, NUNCA se realizan las actividades de las dos ramas.
*/
//!Problema:
/*
Realizar un programa que solicite ingresar dos números distintos y muestre por pantalla el mayor de ellos.
Se hace la entrada de num1 y num2 por teclado. Para saber cual variable tiene un valor mayor preguntamos si el contenido de num1 es mayor (>) que el contenido de num2, si la respuesta es verdadera vamos por la rama de la derecha e imprimimos num1, en caso que la condición sea falsa vamos por la rama de la izquierda (Falsa) e imprimimos num2.
Como podemos observar nunca se imprimen num1 y num2 simultáneamente.
*/

//? Solucion
int main()
{
    int num1, num2;
    cout <<"Ingrese primer valor:";
    cin >>num1;
    cout <<"Ingrese segundo valor:";
    cin >>num2;
    if (num1 > num2)
    {
        cout <<num1;
    }
    else
    {
        cout <<num2;
    }    
    return 0;
}

/*
Cotejemos el diagrama de flujo y la codificación y observemos que el primer bloque de llaves después del if representa la rama del verdadero y el segundo bloque de llaves representa la rama del falso.

Compilemos el programa, si hubo errores sintácticos corrijamos y carguemos dos valores, como por ejemplo:

Ingrese el primer valor: 10
Ingrese el segundo valor: 4
10
Si ingresamos los valores 10 y 4 la condición del if retorna verdadero y ejecuta el primer bloque.
Un programa se controla y corrige probando todos sus posibles resultados.
Ejecutemos nuevamente el programa e ingresemos:

Ingrese el primer valor: 10
Ingrese el segundo valor: 54
54
Cuando a un programa le corregimos todos los errores sintácticos y lógicos ha terminado nuestra tarea y podemos entregar el mismo al USUARIO que nos lo solicitó.

?Operadores Relacionales:
>  (mayor)	
<  (menor)
>= (mayor o igual)
<= (menor o igual)
== (igual)
!= (distinto)
?Operadores Matemáticos
+ (más)
- (menos)
* (producto)
/ (división)
% (resto de una división)  Ej.:  x=13%5;  {se guarda 3}

Hay que tener en cuenta que al disponer una condición debemos seleccionar que operador relacional se adapta a la pregunta.
*/
