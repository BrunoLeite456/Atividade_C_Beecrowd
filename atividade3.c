#include <stdio.h>

int main() {
    int codigo;
    int alcool = 0, gasolina = 0, diesel = 0;

    while (1) {
        scanf("%d", &codigo);

        if (codigo == 1) {
            alcool++;
        } else if (codigo == 2) {
            gasolina++;
        } else if (codigo == 3) {
            diesel++;
        } else if (codigo == 4) {
            break;
        } else {
            // Código inválido, apenas ignora e continua o loop
            continue;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}