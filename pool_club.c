#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu();

//void cadastraUsuario();
//void buscarCadastro();
//void editarCadastro();
//void listarCadastros();
//void listarPiscinas();
//void listarAtletas();
//void excluirCadastro();

int main () {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do {
        menu();
        printf("        Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
//                cadastraUsuario();
                break;
            case 2:
//                buscarCadastro();
                break;
            case 3:
//                editarCadastro();
                break;
            case 4:
//                listarCadastros();
                break;
            case 5:
//                listarPiscinas();
                break;
            case 6:
//                listarAtletas();
                break;
            case 7:
//                excluirCadastro();
                break;
            case 8:
                printf("Finalizando o sistema.");
                break;
            default:
                printf("Opção inválida.");
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