#include <stdio.h>
#include <string.h>

int contar_diamantes(char *linha) {
    int i, count = 0;
    int pilha = 0;  

    for (i = 0; linha[i] != '\0'; i++) {
        if (linha[i] == '<') {
            pilha++;  
        } else if (linha[i] == '>') {
            if (pilha > 0) {
                pilha--;  
                count++;  
            }
        }
      
    }

    return count;
}

int main() {
    int N;
    char linha[1001];

    scanf("%d", &N);
    getchar(); 

    for (int i = 0; i < N; i++) {
        fgets(linha, 1001, stdin);
        
       
        linha[strcspn(linha, "\n")] = '\0';

        int resultado = contar_diamantes(linha);
        printf("%d\n", resultado);
    }

    return 0;
}