#include <stdio.h>
#include <string.h>

// Estrutura da carta Super Trunfo
typedef struct {
    char codigo[5];
    char pais[30];
    char capital[30];
    char estado[20]; // pode ser continente ou região
    long populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para mostrar os dados de uma carta
void mostrarCarta(Carta c) {
    printf("\nCódigo: %s", c.codigo);
    printf("\nPaís: %s", c.pais);
    printf("\nCapital: %s", c.capital);
    printf("\nEstado/Continente: %s", c.estado);
    printf("\nPopulação: %ld habitantes", c.populacao);
    printf("\nÁrea: %.2f km²", c.area);
    printf("\nPIB: %.2f bilhões US$", c.pib);
    printf("\nPontos turísticos: %d\n", c.pontosTuristicos);
}

// Função para comparar dois países por atributo
void compararCartas(Carta c1, Carta c2, int atributo) {
    printf("\nComparando %s x %s\n", c1.pais, c2.pais);

    switch(atributo) {
        case 1: // População
            if(c1.populacao > c2.populacao)
                printf("➡️ %s venceu em População!\n", c1.pais);
            else if(c2.populacao > c1.populacao)
                printf("➡️ %s venceu em População!\n", c2.pais);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            if(c1.area > c2.area)
                printf("➡️ %s venceu em Área!\n", c1.pais);
            else if(c2.area > c1.area)
                printf("➡️ %s venceu em Área!\n", c2.pais);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            if(c1.pib > c2.pib)
                printf("➡️ %s venceu em PIB!\n", c1.pais);
            else if(c2.pib > c1.pib)
                printf("➡️ %s venceu em PIB!\n", c2.pais);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            if(c1.pontosTuristicos > c2.pontosTuristicos)
                printf("➡️ %s venceu em Pontos Turísticos!\n", c1.pais);
            else if(c2.pontosTuristicos > c1.pontosTuristicos)
                printf("➡️ %s venceu em Pontos Turísticos!\n", c2.pais);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Atributo inválido!\n");
    }
}

int main() {
    // Criando cartas de exemplo
    Carta brasil = {"A01", "Brasil", "Brasília", "América do Sul", 214000000, 8515767, 1600.0, 15};
    Carta eua    = {"A02", "Estados Unidos", "Washington D.C.", "América do Norte", 331000000, 9833517, 21400.0, 20};
    Carta japao  = {"A03", "Japão", "Tóquio", "Ásia", 125000000, 377975, 5050.0, 18};

    // Mostrar cartas
    mostrarCarta(brasil);
    mostrarCarta(eua);
    mostrarCarta(japao);

    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    // Comparar Brasil x EUA
    compararCartas(brasil, eua, escolha);

    return 0;
}
