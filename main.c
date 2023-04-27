#include <stdio.h>
#include <string.h>

// Definir la estructura Remedios
typedef struct {
    int codigo;
    char nombre[50];
    float precio;
    int cantidad;
} Remedios;

int main() {
    Remedios remedios[30];
    int codigo, cantidad, i;
    float total = 0.0;
    char nombre[50];

    printf("Ingrese los remedios que desea comprar (0 para terminar):\n");
    do {
        printf("Código: ");
        scanf("%d", &codigo);
        printf("Cantidad: ");
        scanf("%d", &cantidad);

        // Buscar el remedio en el arreglo de remedios
        for (i = 0; i < 30; i++) {
            if (remedios[i].codigo == codigo) {

                remedios[i].cantidad= cantidad;
                float precio = remedios[i].precio * cantidad;
                total += precio;

                // Imprimir la información del remedio comprado
                printf("%d  %d  %s  %.2f  %.2f\n", remedios[i].codigo, cantidad, remedios[i].nombre, remedios[i].precio, precio);
                break;
            }
        }

    } while (codigo != 0);

    // Imprimir el total a pagar
    printf("Total a pagar: %.2f\n", total);

    return 0;
}
