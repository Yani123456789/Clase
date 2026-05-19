//Escribir un programa en C que escribe los números comprendidos entre 1 y 1000.
//El programa escribirá en la pantalla los números en grupos de 20, solicitando al 
//usuario si quiere o nocontinuar visualizando el siguiente grupo de números. Generalizar 
//el programa para que escriba los números comprendidos entre los valores que introduzca el 
//usuario, y sea éte tembién quien decida el tamaño del grupo a visualizar por pantalla.

#include <stdio.h>
#include <ctype.h> // Para usar la función tolower()

int main() {
    int inicio, fin, tamano_grupo;
    int contador_grupo = 0;
    char respuesta;

    // 1. Solicitar los datos de configuración al usuario
    printf("=== CONFIGURACION DEL PROGRAMA ===\n");
    printf("Introduce el numero de inicio: ");
    scanf("%d", &inicio);
    
    printf("Introduce el numero de fin: ");
    scanf("%d", &fin);
    
    printf("Introduce el tamano del grupo a visualizar: ");
    scanf("%d", &tamano_grupo);
    printf("\n==================================\n\n");

    // Validar que el rango sea correcto
    if (inicio > fin) {
        printf("Error: El numero de inicio no puede ser mayor que el de fin.\n");
        return 1; // Terminar el programa con código de error
    }
    if (tamano_grupo <= 0) {
        printf("Error: El tamano del grupo debe ser mayor a 0.\n");
        return 1;
    }

    // 2. Bucle principal para recorrer y mostrar los números
    for (int i = inicio; i <= fin; i++) {
        printf("%d ", i);
        contador_grupo++;

        // 3. Verificar si se ha alcanzado el tamaño del grupo
        if (contador_grupo == tamano_grupo) {
            // Si el número actual 'i' ya es el último del rango total, no tiene sentido pausar
            if (i == fin) {
                break; 
            }

            // Preguntar al usuario si desea continuar
            printf("\n\n--- Grupo completado. ¿Desea continuar visualizando el siguiente grupo? (S/N): ");
            
            // Nota: El espacio antes de %c es crucial para limpiar el salto de línea anterior en el búfer
            scanf(" %c", &respuesta); 
            
            // Convertir la respuesta a minúscula para aceptar tanto 's' como 'S'
            if (tolower(respuesta) != 's') {
                printf("\nPrograma finalizado por el usuario.\n");
                return 0; // Terminar el programa limpiamente
            }

            printf("\n");
            contador_grupo = 0; // Reiniciar el contador para el siguiente grupo
        }
    }

    printf("\n\nSe han mostrado todos los numeros del rango.\n");
    return 0;
}
