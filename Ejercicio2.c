#Una empresa de comida tiene los siguientes precios: el costo por platillo 
#por persona es de $95 pero si el número de personas es mayor a 200 pero menor 
#o igual a 300 es de $85. Para más de 300 personas el costo es de $75.
if(a<b)
{
}
..
else
{
}
#include <stdio.h>
int main()
{
   int a=0;
   int cost=0;
   printf("Calcular el costo del platillo: ");
   printf("Ingrese el número de personas:\n");
   scanf("%d", &a);
   if(a>300)
   {
       if(a<=300)
        cost=a*85;
       else
        cost=a*75;
   }
   else
   {
       cost=a*95;
   }
   printf("El costo total es %d\n", cost);
   return 0;
}
