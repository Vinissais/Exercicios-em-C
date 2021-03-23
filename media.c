#include <stdio.h>

int main() {
    float n1, n2, n3, media, exfinal; // declarar variáveis
    
    //cabeçalho
    printf("\n\tSISTEMA DE GESTAO ESCOLAR\n");

    //colher a entrada do usuário
    printf("\n\tDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("\tDigite a segunda nota: ");
    scanf("%f", &n2);
    printf("\tDigite a terceira nota: ");
    scanf("%f", &n3);

    //calcular a media aritmética
    media = (n1 + n2 + n3) / 3;

    if (media > 7 && media <= 10) {
        printf("\n\tMedia = %.1f", media);
        printf("\n\tsituacao do aluno: \"Aprovado\".\n");
    } else if (media > 3 && media <= 7) {
        printf("\n\tMedia = %.1f", media);
        printf("\n\tSituacao do aluno: \"Exame Final\".\n");
        exfinal = 12 - media; //dedução da formula 6 = (media + exfinal) / 2
        printf("\tO aluno precisa tirar uma nota acima de %.1f no exame final.\n", exfinal);
    } else if (media >= 0 && media <= 3) {
        printf("\n\tMedia = %.1f", media);
        printf("\n\tSituacao do aluno: \"Reprovado\".\n");
    }

    //notas em ordem
    if (n1 > n2 && n1 > n3) {
        if (n2 > n3) {
            printf("\n\tNotas do aluno em ordem crescente: %.1f | %.1f | %.1f\n\n", n3, n2, n1);
        } else {
            printf("\tNotas do aluno em ordem crescente: %.1f | %.1f | %.1f\n\n", n2, n3, n1);
        }
    }

    if (n2 > n1 && n2 > n3) {
        if (n1 > n3) {
            printf("\n\tNotas do aluno em ordem crescente: %.1f | %.1f | %.1f\n\n", n3, n1, n2);
        } else {
            printf("\n\tNotas do aluno em ordem crescente: %.1f | %.1f | %.1f\n\n", n1, n3, n2);
        }
    }

    if (n3 > n1 && n3 > n2) {
        if (n1 > n2) {
            printf("\n\tNotas do aluno em ordem crescente: %.1f | %.1f | %.1f\n\n", n2, n1, n3);
        } else {
            printf("\n\tNotas do aluno em ordem crescente: %.1f | %.1f | %.1f\n\n", n1, n2, n3);
        }
    }
}