/*Alfonso Francisco De Abiega L'Eglisse
programa calculadora
ejercicio para aprencer funciones y math.h*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Declaracion de variables globales

//Declaracion de encabezado de funciones
double suma1(double n1, double n2);
void suma2(double n1, double n2);
double resta1(double n1, double n2);
void resta2(double n1, double n2);
double mult1(double n1, double n2);
void mult2(double n1, double n2);
double div1(double n1, double n2);
void div2(double n1, double n2);
double raiz1(double n1);
void raiz2(double n1);
double pot1(double n1, double n2);
void pot2(double n1, double n2);

//Declaracion de funcion principal
void main ()
{
	double num1, num2, res;
	int op;
	
	do
	{
		printf("Bienvenidos a la calculadora\n");
		printf("Elige una opcion\n");
		printf("1.- Suma\n");
		printf("2.- Resta\n");
		printf("3.- Multiplicacion\n");
		printf("4.- Division\n");
		printf("5.- Raiz Cuadrada\n");
		printf("6.- Potencia\n");
		printf("7.- Salida\n");
		do
		{
			printf("Opcion a escoger: ");
			scanf("%d", &op);
		}
		while(op < 1 || op > 7);
		
		if(op != 7)
		{
			//validacion de datos
			if (op == 5)
			{
				printf("Dame la cifra para raiz: ");
				scanf("%lf", &num1);
				if (num1 < 0 )
				{
					do
					{
						printf("Numero no valido, dame otro numero: ");
						scanf("%lf", &num1);
					}
					while(num1 < 0);
				}
			}
			else
			{
				if(op == 4)
				{
					printf("Dame la primera cifra: ");
					scanf("%lf", &num1);
					printf("Dame la segunda cifra: ");
					scanf("%lf", &num2);
					if (num2 == 0);
					{
						do
						{
							printf("No se puede dividir por cero, dame otro numero: ");
							scanf("%lf", &num2);
						}
						while(num1 == 0);
					}
				}
				else
				{
					if (op == 6)
					{
						printf("Dame la base: ");
						scanf("%lf", &num1);
						printf("Dame el exponente: ");
						scanf("%lf", &num2);
					}
					else
					{
						printf("Dame la primera cifra: ");
						scanf("%lf", &num1);
						printf("Dame la segunda cifra: ");
						scanf("%lf", &num2);
					}
				}
			}

			//operaciones
			switch(op)
			{
				default:
					printf("Opcion no valida\n");
					break;
				case 1:
					res = suma1(num1, num2);
					suma2(num1, num2);
					break;
				case 2:
					res = resta1(num1, num2);
					resta2(num1, num2);
					break;
				case 3:
					res = mult1(num1, num2);
					mult2(num1, num2);
					break;
				case 4:
					res = div1(num1, num2);
					div2(num1, num2);
					break;
				case 5:
					res = raiz1(num1);
					raiz2(num1);
					break;
				case 6:
					res = pot1(num1, num2);
					pot2(num1, num2);
					break;
			}
			
			printf("El resultado es %lf \n", res);
		}
		printf("\n");
	}
	while(op > 0 && op < 7);
	
	printf("Gracis por utilizar la calculadora :)\n\n");
}



//Declaracion de funciones
double suma1(double n1, double n2)
{
	double r;
	r = n1 + n2;
	return r;
}

void suma2(double n1, double n2)
{
	double r;
	r = n1 + n2;
	printf("El resultado de la suma es %lf\n", r);
}

double resta1(double n1, double n2)
{
	double r;
	r = n1 - n2;
	return r;
}

void resta2(double n1, double n2)
{
	double r;
	r = n1 - n2;
	printf("El resultado de la resta es %lf\n", r);
}

double mult1(double n1, double n2)
{
	double r;
	r = n1 * n2;
	return r;
}

void mult2(double n1, double n2)
{
	double r;
	r = n1 * n2;
	printf("El resultado de la multiplicacion es %lf\n", r);
}

double div1(double n1, double n2)
{
	double r;
	r = n1 / n2;
	return r;
}

void div2(double n1, double n2)
{
	double r;
	r = n1 / n2;
	printf("El resultado de la division es %lf\n", r);
}

double raiz1(double n1)
{
	double r;
	r = sqrt(n1);
	return r;
}

void raiz2(double n1)
{
	double r;
	r = sqrt(n1);
	printf("El resultado de la division es %lf\n", r);
}

double pot1(double n1, double n2)
{
	double r;
	r = pow(n1, n2);
	return r;
}

void pot2(double n1, double n2)
{
	double r;
	r = pow(n1, n2);
	printf("El resultado de la division es %lf\n", r);
}
