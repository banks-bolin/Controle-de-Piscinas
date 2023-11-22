#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "string.h"

void menu();
int gerarMatricula();
void cadastraUsuario();
void limpaCache();
void entradaString();
//void buscarCadastro();
//void editarCadastro();
//void listarCadastros();
//void listarPiscinas();
//void listarAtletas();
//void excluirCadastro();

#define MAX_CAD 200

typedef struct {
    char nome[51];
    char cpf[12];
    char endereco[51];
    int idade;
    int atleta;
    int matricula;
}usuario;

usuario cliente[MAX_CAD];
int qtdCadastro = 0;

int main () {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do {
        menu();
        printf("        Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastraUsuario();
                system("cls");
                printf("%s\n", cliente[qtdCadastro].nome);
                printf("%s\n", cliente[qtdCadastro].cpf);
                printf("%s\n", cliente[qtdCadastro].endereco);
                printf("%d\n", cliente[qtdCadastro].idade);
                printf("%d\n", cliente[qtdCadastro].matricula);
                printf("atleta (1/0): %d\n", cliente[qtdCadastro].atleta);
                break;
            case 2:
                system("cls");
//                buscarCadastro();
                break;
            case 3:
                system("cls");
//                editarCadastro();
                break;
            case 4:
                system("cls");
//                listarCadastros();
                break;
            case 5:
                system("cls");
//                listarPiscinas();
                break;
            case 6:
                system("cls");
//                listarAtletas();
                break;
            case 7:
                system("cls");
//                excluirCadastro();
                break;
            case 8:
                system("cls");
                printf("Finalizando o sistema.");
                break;
            default:
                system("cls");
                printf("Opção inválida.\n");
        }

    } while(opcao != 8);

    return 0;
}

void menu() {
    printf("\t****************************************************************************\n");
    printf("\t*    Você está prestes a ser atendido, escolha uma das opções abaixo:      *\n");
    printf("\t*     1. Cadastrar Usuário                                                 *\n");
    printf("\t*     2. Buscar Cadastro                                                   *\n");
    printf("\t*     3. Editar Cadastro                                                   *\n");
    printf("\t*     4. Listar Cadastro                                                   *\n");
    printf("\t*     5. Listar Piscinas                                                   *\n");
    printf("\t*     6. Listar Atletas                                                    *\n");
    printf("\t*     7. Excluir Cadastro                                                  *\n");
    printf("\t*     8. Sair                                                              *\n");
    printf("\t****************************************************************************\n");
}

int gerarMatricula () {
    srand(time(NULL));
    int matricula = rand();

    return matricula;
}
void limpaCache() {
    while(getchar() != '\n' && getchar() != EOF);
}

void entradaString(char *s){
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    limpaCache();
}

void cadastraUsuario() {
    char x, valid = 1;

    if (qtdCadastro < MAX_CAD) {
        cliente[qtdCadastro].matricula = gerarMatricula();

        printf("Insira o nome: ");
        entradaString(cliente[qtdCadastro].nome);
        printf("Informe o CPF: ");
        entradaString(cliente[qtdCadastro].cpf);
        printf("Informe o endereço: ");
        entradaString(cliente[qtdCadastro].endereco);
        printf("Informe a idade: ");
        scanf("%d", &cliente[qtdCadastro].idade);
        limpaCache();
        do {
            printf("O cliente é atleta?");
            scanf("%c", x);
            limpaCache();

            if (x == 's' || x == 'S') {
                cliente[qtdCadastro].atleta = 0;
                valid = 0;
            } else if (x == 'n' || x == 'N') {
                cliente[qtdCadastro].atleta = 1;
                valid = 0;
            } else {
                printf("Valor inválido.");
                system("cls");
                valid = 1;
            }
        }while (valid != 0);

    } else {
        printf("Limite de cadastros atingido.");
    }
}