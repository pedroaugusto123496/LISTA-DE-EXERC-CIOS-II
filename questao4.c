#include <stdio.h>
#define TAMANHO 24  

int main() {
  
    int lista[TAMANHO] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    
    int valorlista;
    int inicio = 0;             
    int fim = TAMANHO - 1;      
    int meio;                   
    int encontrado = 0;         
    printf("Digite o numero de 1 a 100 que deseja buscar: ");
    scanf("%d", &valorlista);
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;  
        if (lista[meio] == valorlista) {
            printf("O numero %d foi encontrado na lista na posiçao %d.\n", valorlista, meio + 1);
            encontrado = 1;  
            break;  
        }
        else if (lista[meio] > valorlista) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }
    if (!encontrado) {
        printf("O numero %d nao foi encontrado na lista.\n", valorlista);
    }

    return 0;
}
