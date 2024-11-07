#include <stdio.h>

#define

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

void contar_produtos_abaixo_do_valor(Produto produtos[], int n, float valor_limite) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (produtos[i].preço < valor limite) {
            contador++;
        }
    }
    printf("Número de produtos abaixo de %.2f: %d\n", valor limite, contador);
}

void buscar_produto_por_id(Produto produtos[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (produtos[i].id == id) {
            printf("Produto encontrado: ID: %d, Nome: %s, Preço: %.2f\n", produtos[i].id, produtos[i].nome, produtos[i].preço);
            return;
        }
    }
    printf("Produto com ID %d não encontrado.\n", id);
}

void atualizar valor produto(Produto produtos[], int n, int id, float novo preço) {
    for (int i = 0; i < n; i++) {
        if (produtos[i].id == id) {
            produtos[i].preço = novo preço;
            printf("Preço do produto ID %d atualizado para %.2f.\n", id, novo preço);
            return;
        }
    }
    printf("Produto com ID %d não encontrado para atualização.\n", id);
}

float calcular média preços(Produto produtos[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += produtos[i].preço;
    }
    return soma / n;
}

void exibir produtos acima da média(Produto produtos[], int n, float media) {
    printf("Produtos acima da média (%.2f):\n", media);
    for (int i = 0; i < n; i++) {
        if (produtos[i].preço > média) {
            printf("ID: %d, Nome: %s, Preço: %.2f\n", produtos[i].id, produtos[i].nome, produtos[i].preço);
        }
    }
}

int main() {
    Produto produtos;
    int n;

    printf("Quantos produtos você deseja adicionar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", & produtos[i].id);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", & produtos[i].preço);
    }


    float valor limite;
    printf("Digite o valor limite: ");
    scanf("%f", &valor limite);
    contar_produtos_abaixo_do_valor(produtos, n, valor limite);


    int id busca;
    printf("Digite o ID do produto a buscar: ");
    scanf("%d", &id_busca);
    buscar produto _por_(produtos, n, id busca);

  
    int id atualiza;
    float novo preço;
    printf("Digite o ID do produto a atualizar: ");
    scanf("%d", &i

