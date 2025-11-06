#include <stdio.h>
#include <string.h>

float somarNotas(float n1, float n2) {
    return n1 + n2; 
}

void mostrarResultado(float media) {
    if (media == 6) {
        printf("Aluno aprovado!\n");
    } else if (media > 6) {
        printf("Aluno aprovado com nota alta!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
}

int main() {
    int opcao = 0;
    float nota1 = 0, nota2 = 0, media = 0;
    char nome[30];
    int contador = 0;
    int i = 0;

    do {
        printf("\n===== MENU ALUNO =====\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Mostrar media\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                do {
                    printf("Digite o nome do aluno: ");
                    scanf("%s", nome);

                    if (strlen(nome) > 30) {
                        printf("Nome muito longo!\n");
                        i++;
                    }
                
                } while (i != 1);

                printf("Digite a primeira nota: ");
                scanf("%f", &nota1);

                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);

                media = somarNotas(nota1, nota2) / 2.0;

                contador++;

                printf("Aluno cadastrado!\n");
                break;

            case 2:
                if (contador == 0) {
                    printf("Nenhum aluno cadastrado ainda!\n");
                } else {
                    printf("Média do aluno %s = %.2f\n", nome, media);
                    mostrarResultado(media);

                    if (media >= 0 && media <= 10)
                        printf("Nota valida.\n");
                    else
                        printf("Nota invalida.\n");
                }
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opção invalida!\n");
        }

    } while (opcao != 3);

    return 0;
}

