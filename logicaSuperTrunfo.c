#include <stdio.h>

int main(){

    char Estado01[30];
    char Código01[10];
    char Cidade01[30];
    unsigned int Populacao01;
    float Area01;
    float PIB01;
    int Turismo01;
    char Estado02[30];
    char Código02[10];
    char Cidade02[30];
    unsigned int Populacao02;
    float Area02;
    float PIB02;
    int Turismo02;

    printf("-- Carta número 01 --\n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado01);

    printf("Digite o código da carta: \n");
    scanf("%s", Código01);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade01);

    printf("Digite o número da população: \n");
    scanf("%u", &Populacao01);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area01);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB01);

    printf("N. de pontos turísticos: \n");
    scanf("%d", &Turismo01);

    printf("\n-- Carta número 02 --\n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado02);

    printf("Digite o código da carta: \n");
    scanf("%s", Código02);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade02);

    printf("Digite o número da população: \n");
    scanf("%u", &Populacao02);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area02);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB02);

    printf("N. de pontos turísticos: \n");
    scanf("%d", &Turismo02);

    float densidade1, densidade2;
    float PIBC01, PIBC02;
    densidade1 = Populacao01 / Area01;
    densidade2 = Populacao02 / Area02;
    PIBC01 = PIB01 / Populacao01;
    PIBC02 = PIB02 / Populacao02;

    printf("\n-- CARTA NÚMERO 01 --\nEstado: %s\nCódigo da carta: %s\nCidade: %s\nPopulação: %u\nÁrea: %.3f km2\nPIB: %.9f\nPontos Turísticos: %d\nDensidade Populacional: %f hab/km2\nPIB per Capita: %.6f reais\n",Estado01, Código01, Cidade01, Populacao01, Area01, PIB01, Turismo01, densidade1, PIBC01);
    
    printf("\n-- CARTA NÚMERO 02 --\nEstado: %s\nCódigo da carta: %s\nCidade: %s\nPopulação: %u\nÁrea: %.3f km2\nPIB: %.9f\nPontos Turísticos: %d\nDensidade Populacional: %f hab/km2\nPIB per Capita: %.6f reais\n",Estado02, Código02, Cidade02, Populacao02, Area02, PIB02, Turismo02, densidade2, PIBC02);

    unsigned int resultado1;
    int resultado4, resultado5, resultado6, resultado2, resultado3, resultadoSuperPoder;
    float superPoder01, superPoder02;

    printf("\n---- RESULTADO ----\n");

    printf("\nAtributo: População:\n");
    printf("\nCarta 01 - %s (%s): %u\nCarta 02 - %s (%s): %u", Cidade01, Estado01, Populacao01, Cidade02, Estado02, Populacao02);
    
    if( Populacao01 > Populacao02 ) {
        printf("\nPopulação: A carta 01 venceu.\n");
    } else {
        printf("\nPopulação: A carta 02 venceu.\n");
    } 

    printf("\nAtributo: Área:\n");
    printf("\nCarta 01 - %s (%s): %.3fkm2\nCarta 02 - %s (%s): %.3fkm2", Cidade01, Estado01, Area01, Cidade02, Estado02, Area02);
    
    if ( Area01 > Area02 ) {
        printf("\nÁrea: A carta 01 venceu.\n");
    } else {
        printf("\nÁrea: A carta 02 venceu.\n");
    }

    printf("\nAtributo: PIB:\n");
    printf("\nCarta 01 - %s (%s): R$%.9f\nCarta 02 - %s (%s): R$%.9f", Cidade01, Estado01, PIB01, Cidade02, Estado02, PIB02);

    if ( PIB01 > PIB02 ){
        printf("\nPIB: A carta 01 venceu.\n");
    } else {
        printf("\nPIB: A carta 02 venceu.\n");
    }

    printf("\nAtributo: PIB per Capita:\n");
    printf("\nCarta 01 - %s (%s): R$%.6f\nCarta 02 - %s (%s): R$%.6f", Cidade01, Estado01, PIBC01, Cidade02, Estado02, PIBC02);

    if ( PIBC01 > PIBC02 ){
        printf("\nPIB per Capita: A carta 01 venceu.\n");
    } else {
        printf("\nPIB per Capita: A carta 02 venceu,\n");
    }

    printf("\nAtributo: Densidade Populacional:\n");
    printf("\nCarta 01 - %s (%s): %f\nCarta 02 - %s (%s): %f", Cidade01, Estado01, densidade1, Cidade02, Estado02, densidade2);

    if ( densidade1 > densidade2 ){
        printf("\nDensidade Populacional: A carta 01 venceu.\n");
    } else {
        printf("\nDensidade Populacional: A carta 02 venceu.\n");
    }

    printf("\nAtributo: Pontos Turísticos:\n");
    printf("\nCarta 01 - %s (%s): %d\nCarta 02 - %s (%s): %d", Cidade01, Estado01, Turismo01, Cidade02, Estado02, Turismo02);

    if ( Turismo01 > Turismo02 ){
        printf("\nPontos Turísticos: A carta 01 venceu.\n");
    } else {
        printf("\nPontos Turístics: A carta 02 venceu.\n");
    }
    if ( superPoder01 > superPoder02 ){
        printf("\nSuper Poder: A carta 01 venceu.\n");
    } else {
        printf("\nSuper Poder: A carta 02 venceu.\n");
    }

return 0;
}