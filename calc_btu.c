#include <stdio.h>

int calcularBTU(int area, int pessoas, int eletronicos, int bateSol) {
    int btuBase = area * 600;
    int btuPessoas = (pessoas > 1) ? (pessoas - 1) * 600 : 0; // pessoa adicional
    int btuEletronicos = eletronicos * 600;
    int btuSol = bateSol ? 800 : 0;

    return btuBase + btuPessoas + btuEletronicos + btuSol;
}

int main() {
    int area, pessoas, eletronicos, bateSol;

    printf("Digite a área da sala em metros quadrados: ");
    scanf("%d", &area);

    printf("Digite o número de pessoas na sala: ");
    scanf("%d", &pessoas);

    printf("Digite o número de eletrônicos (Computadores, TV, etc.): ");
    scanf("%d", &eletronicos);

    printf("Bate sol diretamente na sala? (1 para Sim, 0 para Não): ");
    scanf("%d", &bateSol);

    int btuNecessario = calcularBTU(area, pessoas, eletronicos, bateSol);

    printf("A quantidade necessária de BTUs para a sala é: %d\n", btuNecessario);

    return 0;
}
