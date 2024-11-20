#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

// Estrutura para armazenar os dados do user:
struct Usuario {
    char login[30];
    char senha[30];
};

// Fun��o para verificar se o usu�rio existe no "banco de dados"
int verificarUsuario(struct Usuario usuarios[], int numUsuarios, char login[], char senha[]) {
    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].login, login) == 0 && strcmp(usuarios[i].senha, senha) == 0) {
            return 1; // Usu�rio encontrado
        }
    }
    return 0; // Usu�rio n�o encontrado
}

// Sistema M�dia Escolar V1.0
void MEV1() {
    // Tra�ando localiza��o, para funcionar melhor sintaxe..
    setlocale(LC_ALL, "portuguese");

    // Cabe�alho
    printf ("\n\n====== M�dia Escolar - V1 ======\n\n");

    // Declara��o de variaveis:
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

    // Estrutura de repeti��o & Processamento de dados:
    do {
        if (opcao2 == 10 || 20 || 30 || 40 || 50) {
        printf ("\nEscolha � mat�ria:\n10-Matem�tica\n20-Biologia\n30-Hist�ria\n40-Gram�tica\n50-Fis�ca\n60-Qu�mica\n");
        printf("\nEscolha: ");
        scanf("%i", &opcao2);

                if (opcao2 == 10) {
                printf("\nSelecionado: Matem�tica\n");
                printf("Digite sua nota do 1� bimestre: ");
                scanf("%f", &math_nota1);
                fflush(stdin);

                printf("Digite sua nota do 2� bimestre: ");
                scanf("%f", &math_nota2);
                fflush(stdin);

                printf("Digite sua nota do 3� bimestre: ");
                scanf("%f", &math_nota3);
                fflush(stdin);

                printf("Digite sua nota do 4� bimestre: ");
                scanf("%f", &math_nota4);
                fflush(stdin);

                // Estrutura: Reprovado x Aprovado:

                media_math = (math_nota1 + math_nota2 + math_nota3 + math_nota4);

                    if (media_math >= 20) {
                        printf("\nParab�ns, voc� foi aprovado!\n");
                    } else if (media_math < 20) {
                        printf("\nVoc� foi reprovado com base na m�dia escolar (20)\n");
                    }

                // Calculo de m�dia - Math.

                printf("\nDeseja consultar sua m�dia? (s/n): ");
                scanf("%c", &opcao3);
                fflush(stdin);

                if (opcao3 == 's') {
                    printf("\nSua m�dia em matem�tica �: %.2f\n", media_math);
                    } else {
                        printf("\nFechando Programa...\n");
                    }
                }

                // Notas Biologia.
                if (opcao2 == 20) {
                printf("\nSelecionado: Biologia.\n");
                printf("Digite sua nota do 1� bimestre: ");
                scanf("%f", &bio_nota1);
                fflush(stdin);

                printf("Digite sua nota do 2� bimestre: ");
                scanf("%f", &bio_nota2);
                fflush(stdin);

                printf("Digite sua nota do 3� bimestre: ");
                scanf("%f", &bio_nota3);
                fflush (stdin);

                printf("Digite sua nota do 4� bimestre: ");
                scanf ("%f", &bio_nota4);
                fflush(stdin);

                // M�dia: Aprovado x Reprovado | Biologia:

                    media_bio = (bio_nota1 + bio_nota2 + bio_nota3 + bio_nota4);

                    if (media_bio >= 20) {
                        printf("\nParab�ns, voc� foi aprovado !\n");
                    } else if (media_bio < 20) {
                            printf("\nVoc� foi reprovado com base na m�dia escolar (20)\n");
                    }

                    // Consulta de M�dia | Biologia:
                    printf("\nDeseja consultar sua m�dia ? (s/n): ");
                    scanf("%c", &opcao4);

                    if (opcao4 == 's') {
                        printf("\nSua m�dia em Biologia �: %.2f\n", media_bio);
                    } else {
                        printf("\nFechando Programa....\n");
                    }

                } // fechamento biologia..

                //Notas Hist�ria.
                if (opcao2 == 30) {
                    printf("\nSelecinado: Hist�ria");
                    printf("\nDigite sua nota do 1� bimestre: ");
                    scanf("%f", &his_nota1);
                    fflush(stdin);

                    printf("Digite sua nota do 2� bimestre: ");
                    scanf("%f", &his_nota2);
                    fflush(stdin);

                    printf("Digite sua nota do 3� bimestre: ");
                    scanf("%f", &his_nota3);
                    fflush(stdin);

                    printf("Digite sua nota do 4� bimestre: ");
                    scanf("%f", &his_nota4);
                    fflush(stdin);

                    // M�dia = Aprovado x Reprovado | Hist�ria:

                    media_hist = (his_nota1 + his_nota2 + his_nota3 + his_nota4);

                    if (media_hist >= 20) {
                        printf("\nParab�ns, voc� foi aprovado!\n");
                    } else if (media_hist <  20) {
                        printf("\nVoc� foi reprovado com base na m�dia escolar (20)\n");
                    }

                    // Consulta de m�dia | Hist�ria:

                    printf("\nDeseja consultar sua m�dia ? (s/n): ");
                    scanf("%c", &opcao5);

                    if (opcao5 == 's') {
                        printf("\nSua m�dia em Hist�ria �: %.2f\n", media_hist);
                    } else {
                        printf("Fechando Programa....");
                    }
                } // fechamento Hist�ria.


                // Estrutura | Gram�tica:
                if (opcao2 == 40) {
                    printf("\nSelecionado: Gram�tica");
                    printf("\nDigite sua nota do 1� bimestre: ");
                    scanf("%f", &gram_nota1);
                    fflush(stdin);

                    printf("Digite sua nota do 2� bimestre: ");
                    scanf("%f", &gram_nota2);
                    fflush(stdin);

                    printf("Digite sua nota do 3� bimestre: ");
                    scanf("%f", &gram_nota3);
                    fflush(stdin);

                    printf("Digite sua nota do 4� bimestre: ");
                    scanf("%f", &gram_nota4);
                    fflush(stdin);


                    // M�dia: Aprovado x Reprovado | Gram�tica:

                    media_gram = (gram_nota1 + gram_nota2 + gram_nota3 + gram_nota4);

                    if (media_gram >= 20) {
                        printf("\nParab�ns, voc� foi aprovado !\n");
                    } else if (media_gram < 20) {
                        printf("\nVoc� foi reprovado com base na m�dia escolar (20)\n");
                    }

                    // Consulta de m�dia:

                    printf("\nDeseja consultar sua m�dia ? (s/n): ");
                    scanf("%c", &opcao7);

                    if (opcao7 == 's') {
                        printf("\nSua m�dia em Gram�tica �: %.2f\n", media_gram);
                    } else {
                        printf("\nFechando programa...\n");
                    }

                } // Fechamento | Gram�tica

                if (opcao2 == 50) {
                    printf("\nSelecionado: F�sica");
                    printf("\nDigite sua nota do 1� bimestre: ");
                    scanf("%f", &fis_nota1);
                    fflush(stdin);

                    printf("Digite sua nota do 2� bimestre: ");
                    scanf("%f", &fis_nota2);
                    fflush(stdin);

                    printf("Digite sua nota do 3� bimestre: ");
                    scanf("%f", &fis_nota3);
                    fflush(stdin);

                    printf("Digite sua nota do 4� bimestre: ");
                    scanf("%f", &fis_nota4);
                    fflush(stdin);

                    // M�dia: Aprovado x Reprovado | Fis�ca:

                    media_fis  = (fis_nota1 + fis_nota2 + fis_nota3 + fis_nota4);

                    if (media_fis >= 20) {
                        printf("\nParab�ns, voc� foi aprovado !\n");
                    } else if (media_fis < 20) {
                        printf("\nVoc� foi reprovado com base na m�dia escolar (20)\n");
                    }

                    // Consulta de m�dia:

                    printf("\nDeseja consultar sua m�dia ?(s/n): ");
                    scanf("%c", &opcao8);
                    fflush(stdin);

                    if (opcao8 == 's') {
                        printf("\nSua m�dia em Fis�ca �: %.2f\n", media_fis);
                    } else {
                        printf("\nFechando Programa....\n");
                    }

                } // Fechamento | F�sica.

                if (opcao2 == 60) {
                    printf("\nSelecionado: Qu�mica");

                    printf("\nDigite sua nota do 1� bimestre: ");
                    scanf("%f", &qui_nota1);
                    fflush(stdin);

                    printf("Digite sua nota do 2� bimestre: ");
                    scanf("%f", &qui_nota2);
                    fflush(stdin);

                    printf("Digite sua nota do 3� bimestre: ");
                    scanf("%f", &qui_nota3);
                    fflush(stdin);

                    printf("Digite sua nota do 4� bimestre: ");
                    scanf("%f", &qui_nota4);
                    fflush(stdin);

                    // M�dia: Aprovado x Reprovado:

                    media_qui = (qui_nota1 + qui_nota2 + qui_nota3 + qui_nota4);

                    if (media_qui >= 20) {
                        printf("\nParab�ns, voc� foi aprovado !\n");
                    } else if (media_qui < 20) {
                        printf("\nLamento, voc� foi reprovado segundo � m�dia escolar (20)\n");
                    }

                    // Consulta de m�dia:

                    printf("\nDeseja consultar sua m�dia ? (s/n): ");
                    scanf("%c", &opcao9);

                    if (opcao9 == 's') {
                        printf("\nSua m�dia em Qu�mica �: %.2f\n", media_qui);
                    } else {
                        printf("\nFechando Programa....\n");
                    }
                } // Fechamento Estrutura | Qu�mica.

        } // Fechamento | Estrutura de processamento de dados


    // Fechamento | Estrutura de Repeti��o
    } while (opcao == 1);

}

// Sistema de login | Cr�ditos Coder:

void main() {
    // Introdu��o; Cr�ditos ao programador:
printf ("Este programa foi desenvolvido por: Enrique Ricci");
printf("\nMeu github: https://github.com/salvatore021\n");

setlocale(LC_ALL, "portuguese");

    // Dados dos usu�rios (simulado como um "banco de dados")
    struct Usuario usuarios[] = {
        {"Salvatore", "021"},
        {"SV", "0021"},
        {"root", "9090"}
    };
    int numUsuarios = sizeof(usuarios) / sizeof(usuarios[0]);

    char login[30];
    char senha[30];

    printf("\nDigite seu usu�rio: ");
    scanf("%s", &login);
    printf("Digite sua senha: ");
    scanf("%s", &senha);

    if (verificarUsuario(usuarios, numUsuarios, login, senha)) {
        printf("\nLOGIN EFETUADO COM SUCESSO\n");

        // Aqui j� podemos executar o programa de c�lculo de notas.
        MEV1();
    } else {
        printf("\nLogin ou senha incorretos!\n");
    }



    return 0;
}
