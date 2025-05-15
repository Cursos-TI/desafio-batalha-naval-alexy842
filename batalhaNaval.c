#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

int main() {
int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0}; // Inicializa todas as posições com 0 (água)
// Coordenadas iniciais definidas no código
int linhaNavioH = 2, colunaNavioH = 4; // Navio horizontal começando na posição (2,4)
int linhaNavioV = 5, colunaNavioV = 7; // Navio vertical começando na posição (5,7)
// Validação dos limites para navio horizontal
if (colunaNavioH + TAM_NAVIO > TAM_TABULEIRO) {
printf("Erro: navio horizontal fora dos limites do tabuleiro.\n");
return 1;
}
// Validação dos limites para navio vertical
if (linhaNavioV + TAM_NAVIO > TAM_TABULEIRO) {
printf("Erro: navio vertical fora dos limites do tabuleiro.\n");
return 1;
}
// Verifica sobreposição
for (int i = 0; i < TAM_NAVIO; i++) {
if (tabuleiro[linhaNavioH][colunaNavioH + i] == 3 || tabuleiro[linhaNavioV + i][colunaNavioV] == 3) {
printf("Erro: sobreposição de navios detectada.\n");
return 1;
}
}
// Posiciona o navio horizontal
for (int i = 0; i < TAM_NAVIO; i++) {
                                                                                                                                            tabuleiro[linhaNavioH][colunaNavioH + i] = 3;
                                                                                                                                                }
// Posiciona o navio vertical
for (int i = 0; i < TAM_NAVIO; i++) {
tabuleiro[linhaNavioV + i][colunaNavioV] = 3;
}
// Exibe o tabuleiro
printf("Tabuleiro:\n");
for (int i = 0; i < TAM_TABULEIRO; i++) {
for (int j = 0; j < TAM_TABULEIRO; j++) {
printf("%d ", tabuleiro[i][j]);
}
printf("\n");
}
return 0;
}

