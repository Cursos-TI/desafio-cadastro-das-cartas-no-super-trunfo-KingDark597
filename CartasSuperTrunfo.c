#include <stdio.h>

#define MAX_CARTAS 32 // 8 estados * 4 cidades

typedef struct {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void cadastrarCidades(Cidade cidades[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nCadastro da cidade %d:\n", i + 1);
        
        printf("Código: ");
        scanf("%d", &cidades[i].codigo);
        
        printf("Nome: ");
        scanf(" %[^\n]", cidades[i].nome); // Lê a string até a nova linha
        
        printf("População: ");
        scanf("%d", &cidades[i].populacao);
        
        printf("Área (km²): ");
        scanf("%f", &cidades[i].area);
        
        printf("PIB: ");
        scanf("%f", &cidades[i].pib);
        
        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
    }
}

int main() {
    Cidade cidades[MAX_CARTAS];
    int n;
    
    printf("Quantas cidades deseja cadastrar? (Máximo %d): ", MAX_CARTAS);
    scanf("%d", &n);
    
    if (n > MAX_CARTAS || n <= 0) {
        printf("Número inválido de cidades!\n");
        return 1;
    }
    
    cadastrarCidades(cidades, n);
    
    printf("\nCadastro concluído!\n");
    
    return 0;
}
