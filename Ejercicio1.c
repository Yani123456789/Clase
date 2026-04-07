#Hacer el código para una calculadora que sume, reste, multiplique y divida 
#include <stdio.h>
int main ()
{ 
  float n1, n2, res;
  int op=0;
  printf("Bienvenido a mi calculadora\n");
  printf("Escoje una opción\n");
  printf("1.- SUMA\n");
  printf("2.- Resta\n");
  printf("3.- Multiplicación\n");
  printf("4.- DIVISIÓN\n");
  printf("opcion: ");
  scanf("%d", &op);
  printf("Ingresa dos cantidades separadas por espacio\n");
  scanf("%f %f", &n1, &n2);
  switch(op)
  {
    default:
      printf("opción no válida\n");
      break;
    case 1:
      res=n1+n2;
      printf("El resultado es %f\n", res);
      break;
    case 2:
      res=n1-n2;
      printf("El resultado es %f\n", res);
      break;
    case 3:
      res=n1*n2;
      printf("El resultado es %f\n", res);
      break;
    case 4:
      res=n1/n2;
      printf("El resultado es %f\n", res);
      break;  
  }
  return 0;
}
