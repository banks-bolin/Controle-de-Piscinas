#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "string.h"

void menu(void);
int gerarMatricula(void);
void cadastraUsuario(void);
void flushStdin(void);
void entradaString(char *s, int tam);
//void buscarCadastro();
//void editarCadastro();
//void listarCadastros();
//void listarPiscinas();
//void listarAtletas();
//void excluirCadastro();

#define MAX_CAD 200
#define MAX_STR_CAD 51
#define MAX_CPF 12

typedef struct {
    char nome[MAX_STR_CAD];
    char cpf[MAX_CPF];
    char endereco[MAX_STR_CAD];
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
                system("cls");
                cadastraUsuario();
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

int gerarMatricula (void) {
    srand(time(NULL));
    int i = rand();
    return i;
}

void flushStdin(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void entradaString(char *s, int tam){
    fgets(s, tam, stdin);
    s[strcspn(s, "\n")] = '\0';
    flushStdin();
}

void cadastraUsuario(void) {
    char x;
    int valid = 0;

    if (qtdCadastro < MAX_CAD) {
        cliente[qtdCadastro].matricula = gerarMatricula();

        printf("Insira o nome: ");
        entradaString(cliente[qtdCadastro].nome, sizeof(cliente[qtdCadastro].nome));
        printf("Informe o CPF: ");
        entradaString(cliente[qtdCadastro].cpf, sizeof(cliente[qtdCadastro].cpf));
        printf("Informe o endereço: ");
        entradaString(cliente[qtdCadastro].endereco, sizeof(cliente[qtdCadastro].endereco));
        printf("Informe a idade: ");
        scanf("%d", &cliente[qtdCadastro].idade);
        flushStdin();

        do {
            //Faz uma validação se o cliente é atleta ou não
            printf("O cliente é atleta? (s/n)");
            scanf("%c",&x);
            flushStdin();

            if (x == 's' || x == 'S') {
                cliente[qtdCadastro].atleta = 1;
                valid = 1;
            } else if (x == 'n' || x == 'N') {
                cliente[qtdCadastro].atleta = 0;
                valid = 1;
            } else {
                system("cls");
                printf("Valor inválido.\n\n");
            }
        }while (!valid);
    } else {
        printf("Limite de cadastros atingido.");
    }
}