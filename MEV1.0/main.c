#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

// Estrutura para armazenar os dados do user:
struct Usuario {
    char login[30];
    char senha[30];
};

// Função para verificar se o usuário existe no "banco de dados"
int verificarUsuario(struct Usuario usuarios[], int numUsuarios, char login[], char senha[]) {
    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].login, login) == 0 && strcmp(usuarios[i].senha, senha) == 0) {
            return 1; // Usuário encontrado
        }
    }
    return 0; // Usuário não encontrado
}

// Sistema Média Escolar V1.0
void MEV1() {
    // Traçando localização, para funcionar melhor sintaxe..
    setlocale(LC_ALL, "portuguese");

    // Cabeçalho
    printf ("\n\n====== Média Escolar - V1 ======\n\n");

    // Declaração de variaveis:
    int opcao;
    int opcao2;
    char opcao3, opcao4, opcao5, opcao6, opcao7, opcao8, opcao9;
    float media_math, media_bio, media_hist, media_fis, media_gram, media_qui;
    float math_nota1, math_nota2, math_nota3, math_nota4;
    float bio_nota1,bio_nota2,bio_nota3,bio_nota4;
    float his_nota1, his_nota2, his_nota3, his_nota4;
    float qui_nota1, qui_nota2, qui_nota3, qui_nota4;
    float gram_nota1, gram_nota2, gram_nota3, gram_nota4;
    float fis_nota1, fis_nota2, fis_nota3, fis_nota4;

    // Estrutura de repetição & Processamento de dados:
    do {
        if (opcao2 == 10 || 20 || 30 || 40 || 50) {
        printf ("\nEscolha á matéria:\n10-Matemática\n20-Biologia\n30-História\n40-Gramática\n50-Fisíca\n60-Química\n");
        printf("\nEscolha: ");
        scanf("%i", &opcao2);

                if (opcao2 == 10) {
                printf("\nSelecionado: Matemática\n");
                printf("Digite sua nota do 1° bimestre: ");
                scanf("%f", &math_nota1);
                fflush(stdin);

                printf("Digite sua nota do 2° bimestre: ");
                scanf("%f", &math_nota2);
                fflush(stdin);

                printf("Digite sua nota do 3° bimestre: ");
                scanf("%f", &math_nota3);
                fflush(stdin);

                printf("Digite sua nota do 4° bimestre: ");
                scanf("%f", &math_nota4);
                fflush(stdin);

                // Estrutura: Reprovado x Aprovado:

                media_math = (math_nota1 + math_nota2 + math_nota3 + math_nota4);

                    if (media_math >= 20) {
                        printf("\nParabéns, você foi aprovado!\n");
                    } else if (media_math < 20) {
                        printf("\nVocê foi reprovado com base na média escolar (20)\n");
                    }

                // Calculo de média - Math.

                printf("\nDeseja consultar sua média? (s/n): ");
                scanf("%c", &opcao3);
                fflush(stdin);

                if (opcao3 == 's') {
                    printf("\nSua média em matemática é: %.2f\n", media_math);
                    } else {
                        printf("\nFechando Programa...\n");
                    }
                }

                // Notas Biologia.
                if (opcao2 == 20) {
                printf("\nSelecionado: Biologia.\n");
                printf("Digite sua nota do 1° bimestre: ");
                scanf("%f", &bio_nota1);
                fflush(stdin);

                printf("Digite sua nota do 2° bimestre: ");
                scanf("%f", &bio_nota2);
                fflush(stdin);

                printf("Digite sua nota do 3° bimestre: ");
                scanf("%f", &bio_nota3);
                fflush (stdin);

                printf("Digite sua nota do 4° bimestre: ");
                scanf ("%f", &bio_nota4);
                fflush(stdin);

                // Média: Aprovado x Reprovado | Biologia:

                    media_bio = (bio_nota1 + bio_nota2 + bio_nota3 + bio_nota4);

                    if (media_bio >= 20) {
                        printf("\nParabéns, você foi aprovado !\n");
                    } else if (media_bio < 20) {
                            printf("\nVocê foi reprovado com base na média escolar (20)\n");
                    }

                    // Consulta de Média | Biologia:
                    printf("\nDeseja consultar sua média ? (s/n): ");
                    scanf("%c", &opcao4);

                    if (opcao4 == 's') {
                        printf("\nSua média em Biologia é: %.2f\n", media_bio);
                    } else {
                        printf("\nFechando Programa....\n");
                    }

                } // fechamento biologia..

                //Notas História.
                if (opcao2 == 30) {
                    printf("\nSelecinado: História");
                    printf("\nDigite sua nota do 1° bimestre: ");
                    scanf("%f", &his_nota1);
                    fflush(stdin);

                    printf("Digite sua nota do 2° bimestre: ");
                    scanf("%f", &his_nota2);
                    fflush(stdin);

                    printf("Digite sua nota do 3° bimestre: ");
                    scanf("%f", &his_nota3);
                    fflush(stdin);

                    printf("Digite sua nota do 4° bimestre: ");
                    scanf("%f", &his_nota4);
                    fflush(stdin);

                    // Média = Aprovado x Reprovado | História:

                    media_hist = (his_nota1 + his_nota2 + his_nota3 + his_nota4);

                    if (media_hist >= 20) {
                        printf("\nParabéns, você foi aprovado!\n");
                    } else if (media_hist <  20) {
                        printf("\nVocê foi reprovado com base na média escolar (20)\n");
                    }

                    // Consulta de média | História:

                    printf("\nDeseja consultar sua média ? (s/n): ");
                    scanf("%c", &opcao5);

                    if (opcao5 == 's') {
                        printf("\nSua média em História é: %.2f\n", media_hist);
                    } else {
                        printf("Fechando Programa....");
                    }
                } // fechamento História.


                // Estrutura | Gramática:
                if (opcao2 == 40) {
                    printf("\nSelecionado: Gramática");
                    printf("\nDigite sua nota do 1° bimestre: ");
                    scanf("%f", &gram_nota1);
                    fflush(stdin);

                    printf("Digite sua nota do 2° bimestre: ");
                    scanf("%f", &gram_nota2);
                    fflush(stdin);

                    printf("Digite sua nota do 3° bimestre: ");
                    scanf("%f", &gram_nota3);
                    fflush(stdin);

                    printf("Digite sua nota do 4° bimestre: ");
                    scanf("%f", &gram_nota4);
                    fflush(stdin);


                    // Média: Aprovado x Reprovado | Gramática:

                    media_gram = (gram_nota1 + gram_nota2 + gram_nota3 + gram_nota4);

                    if (media_gram >= 20) {
                        printf("\nParabéns, você foi aprovado !\n");
                    } else if (media_gram < 20) {
                        printf("\nVocê foi reprovado com base na média escolar (20)\n");
                    }

                    // Consulta de média:

                    printf("\nDeseja consultar sua média ? (s/n): ");
                    scanf("%c", &opcao7);

                    if (opcao7 == 's') {
                        printf("\nSua média em Gramática é: %.2f\n", media_gram);
                    } else {
                        printf("\nFechando programa...\n");
                    }

                } // Fechamento | Gramática

                if (opcao2 == 50) {
                    printf("\nSelecionado: Física");
                    printf("\nDigite sua nota do 1° bimestre: ");
                    scanf("%f", &fis_nota1);
                    fflush(stdin);

                    printf("Digite sua nota do 2° bimestre: ");
                    scanf("%f", &fis_nota2);
                    fflush(stdin);

                    printf("Digite sua nota do 3° bimestre: ");
                    scanf("%f", &fis_nota3);
                    fflush(stdin);

                    printf("Digite sua nota do 4° bimestre: ");
                    scanf("%f", &fis_nota4);
                    fflush(stdin);

                    // Média: Aprovado x Reprovado | Fisíca:

                    media_fis  = (fis_nota1 + fis_nota2 + fis_nota3 + fis_nota4);

                    if (media_fis >= 20) {
                        printf("\nParabéns, você foi aprovado !\n");
                    } else if (media_fis < 20) {
                        printf("\nVocê foi reprovado com base na média escolar (20)\n");
                    }

                    // Consulta de média:

                    printf("\nDeseja consultar sua média ?(s/n): ");
                    scanf("%c", &opcao8);
                    fflush(stdin);

                    if (opcao8 == 's') {
                        printf("\nSua média em Fisíca é: %.2f\n", media_fis);
                    } else {
                        printf("\nFechando Programa....\n");
                    }

                } // Fechamento | Física.

                if (opcao2 == 60) {
                    printf("\nSelecionado: Química");

                    printf("\nDigite sua nota do 1° bimestre: ");
                    scanf("%f", &qui_nota1);
                    fflush(stdin);

                    printf("Digite sua nota do 2° bimestre: ");
                    scanf("%f", &qui_nota2);
                    fflush(stdin);

                    printf("Digite sua nota do 3° bimestre: ");
                    scanf("%f", &qui_nota3);
                    fflush(stdin);

                    printf("Digite sua nota do 4° bimestre: ");
                    scanf("%f", &qui_nota4);
                    fflush(stdin);

                    // Média: Aprovado x Reprovado:

                    media_qui = (qui_nota1 + qui_nota2 + qui_nota3 + qui_nota4);

                    if (media_qui >= 20) {
                        printf("\nParabéns, você foi aprovado !\n");
                    } else if (media_qui < 20) {
                        printf("\nLamento, você foi reprovado segundo á média escolar (20)\n");
                    }

                    // Consulta de média:

                    printf("\nDeseja consultar sua média ? (s/n): ");
                    scanf("%c", &opcao9);

                    if (opcao9 == 's') {
                        printf("\nSua média em Química é: %.2f\n", media_qui);
                    } else {
                        printf("\nFechando Programa....\n");
                    }
                } // Fechamento Estrutura | Química.

        } // Fechamento | Estrutura de processamento de dados


    // Fechamento | Estrutura de Repetição
    } while (opcao == 1);

}

// Sistema de login | Créditos Coder:

void main() {
    // Introdução; Créditos ao programador:
printf ("Este programa foi desenvolvido por: Enrique Ricci");
printf("\nMeu github: https://github.com/salvatore021\n");

setlocale(LC_ALL, "portuguese");

    // Dados dos usuários (simulado como um "banco de dados")
    struct Usuario usuarios[] = {
        {"Salvatore", "021"},
        {"SV", "0021"},
        {"root", "9090"}
    };
    int numUsuarios = sizeof(usuarios) / sizeof(usuarios[0]);

    char login[30];
    char senha[30];

    printf("\nDigite seu usuário: ");
    scanf("%s", &login);
    printf("Digite sua senha: ");
    scanf("%s", &senha);

    if (verificarUsuario(usuarios, numUsuarios, login, senha)) {
        printf("\nLOGIN EFETUADO COM SUCESSO\n");

        // Aqui já podemos executar o programa de cálculo de notas.
        MEV1();
    } else {
        printf("\nLogin ou senha incorretos!\n");
    }



    return 0;
}
