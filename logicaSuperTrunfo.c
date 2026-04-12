#include <stdio.h>
int main(){

    char cidade1[20] = "Rolante", cidade2[20] = "Igrejinha";
    int populacao1 = 21253, populacao2 = 34776;
    float area1 = 296.090, area2 = 138.116;
    float pib1 = 1.000000, pib2 = 2.000000;
    int turismo1 = 15, turismo2 = 10;
    float densidade1, densidade2;
    int opcao;

    densidade1 = -(populacao1 / area1);
    densidade2 = -(populacao2 / area2);

    printf("\n*** SUPER TRUNFO ***\n");
    printf("\n--Carta 01 --\nCidade 01: %s\nPopulação: %d\nÁrea: %.3f\nPIB: %.6f\nPontos Turísticos: %d\nDensidade Populacional: %.2f\n", cidade1, populacao1, area1, pib1, turismo1, densidade1);
    printf("\n--Carta 02 --\nCidade 02: %s\nPopulação: %d\nÁrea: %.3f\nPIB: %.6f\nPontos Turísticos: %d\nDensidade Populacional: %.2f\n", cidade2, populacao2, area2, pib2, turismo2, densidade2);

    printf("\nCompare os atributos:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfrica\n");
    printf("\nEscolha a opção:\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        if (populacao1 > populacao2) {
            printf("\nCarta 01:\nCidade: %s\nPopulação: %d\nCarta02:\nCidade: %s\nPopulação: %d\n\nCARTA 01 VENCEU!\n", cidade1, populacao1, cidade2, populacao2);
        } else if (populacao1 < populacao2) {
           printf("\nCarta 01:\nCidade: %s\nPopulação: %d\nCarta02:\nCidade: %s\nPopulação: %d\n\nCARTA 02 VENCEU!\n", cidade1, populacao1, cidade2, populacao2); 
        } else {
            printf("Empate!");
        }
        break;
        case 2:
        if (area1 > area2) {
            printf("\nCarta 01: Cidade: %s\n Área: %3.f\nCarta 02:\nCidade: %s\nÁrea: %3.f\n\nCARTA 01VENCEU!\n", cidade1, area1, cidade2, area2);
        } else if (area1 < area2) {
            printf("\nCarta 01: Cidade: %s\n Área: %3.f\nCarta 02:\nCidade: %s\nÁrea: %3.f\n\nCARTA 02VENCEU!\n", cidade1, area1, cidade2, area2);
        } else {
            printf("Empate!");
        }
        break;
        case 3:
        if (pib1 > pib2) {
            printf("\nCarta 01: Cidade: %s\nPIB: %.6f\nCarta 02:\nCidade: %s\nPIB: %.6f\n\nCARTA 01VENCEU!\n", cidade1, pib1, cidade2, pib2);
        } else if (pib1 < pib2) {
            printf("\nCarta 01: Cidade: %s\nPIB: %.6f\nCarta 02:\nCidade: %s\nPIB: %.6f\n\nCARTA 02VENCEU!\n", cidade1, pib1, cidade2, pib2);
        } else {
            printf("Empate!");
        }
        break;
        case 4:
        if (turismo1 > turismo2) {
            printf("\nCarta 01: Cidade: %s\nPontos Turísticos: %d\nCarta 02:\nCidade: %s\nPontos Turísticos: %d\n\nCARTA 01VENCEU!\n", cidade1, turismo1, cidade2, turismo2);
        } else if (turismo1 < turismo2) {
            printf("\nCarta 01: Cidade: %s\nPontos Turísticos: %d\nCarta 02:\nCidade: %s\nPontos Turísticos: %d\n\nCARTA 02VENCEU!\n", cidade1, turismo1, cidade2, turismo2);
        } else {
            printf("Empate!");
        }
        break;
        case 5:
        if (densidade1 > densidade2) {
            printf("\nCarta 01: Cidade: %s\nDensidade Demográfica: %.2f\nCarta 02:\nCidade: %s\nDensidade Demográfica: %.2f\n\nCARTA 02VENCEU!\n", cidade1, densidade1, cidade2, densidade2);
        } else if (densidade1 < densidade2) {
            printf("\nCarta 01: Cidade: %s\nDensidade Demográfica: %.2f\nCarta 02:\nCidade: %s\nDensidade Demográfica: %.2f\n\nCARTA 01VENCEU!\n", cidade1, densidade1, cidade2, densidade2);
        } else {
            printf("Empate!");
        }
        break;
        default: 
            printf("Opção inválida!\n");
        }
    
    return 0;

}
