#include <stdio.h>      //  Para la Entrada y salida
#include <math.h>       // para sqrt()
#include <stdlib.h>     //  Para system()

// ---------Prototipos
float distanciaPuntos(int x1, int y1, int x2, int y2);
int square(int numero);
float pitagoras(int cateto1, int cateto2);

// ---Función 1
float distanciaPuntos(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) + (y2-y1));
}

// ---Función 2
int square(int numero)
{
	return (numero * numero);
}


// ---Función 3
float pitagoras(int cateto1, int cateto2)
{
	return sqrt( (int)square(cateto1) + square(cateto2) );
}

int main()
{
    int x1, y1, x2, y2;    float dist;	// Variables para la función 1
	int num, cuadrado;					// Variables para la función 3
	float h, c1, c2;					// Variables para la función 3
    // ----------------- Función 1 -----------------
    printf("Da las coordenadas del punto 1 separado por coma: ");
    scanf("%d,%d", &x1, &y1);
    printf("Da las coordenadas del punto 2 separado por coma: ");
    scanf("%d,%d", &x2, &y2);

    dist = distanciaPuntos(x1, y1, x2, y2);

    printf("La distancia entre los puntos es: %7.3f\n", dist);

	// ---------------Función 2----------------
	printf("Dame el numero del que quieres el cuadrado: ");
	scanf("%d", x1);

	x2 = square(x1);

	printf("El cuadrado de %d es %d\n", x1, x2);

	// ----------------- Funcion 3-------------
	printf("Dame el cateto adyacente: ");
	scanf("%d", &c1);
	printf("Dame el cateto opuesto: ");
	scanf("%d", &c2);
	h = pitagoras(c1, c2);

	printf("La hipotenusa del triangulo es %f: \n", h);

    system("pause");
    return 1;
}