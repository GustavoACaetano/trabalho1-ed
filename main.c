#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"

// Impressao do menu principal do programa
void print_menu() {
    printf("\nMenu:\n");
    printf("1 - Consultar paciente\n");
    printf("2 - Atualizar paciente\n");
    printf("3 - Remover paciente\n");
    printf("4 - Inserir pacientes\n");
    printf("5 - Imprimir lista de pacientes\n");
    printf("Q - Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    // Carregando o "banco de dados" no programa
    char *arquivo = "bd_paciente.csv";
    PacientesDynVec *pacientes = pdv_create_from_file(arquivo);
    if (pacientes == NULL) {
        printf("Erro ao carregar pacientes. Programa interrompido.\n");
        return 1;
    }
    
    print_menu();
    // Loop principal de funcionamento
    char menu;
    scanf(" %c", &menu);
    while (menu != 'Q') {
        switch (menu) {
            case '1':
                consultar_pacientes(pacientes);
                break;
            case '2':
                printf("Função não implementada!\n");
                break;
            case '3':
                printf("Função não implementada!\n");
                break;
            case '4':
                printf("Função não implementada!\n");
                break;
            case '5':
                print_pacientes(pacientes);
                break;
            default:
                printf("Opção inválida!\n");
        }
        print_menu();
        scanf(" %c", &menu);
    }
    pdv_free(pacientes);
    return 0;
}