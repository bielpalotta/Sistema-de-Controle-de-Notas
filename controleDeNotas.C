#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int opcoes, totalAlunos = 0;
char aluno[50][50];
float nota1[50], nota2[50], nota3[50], media[50];

void imprimirCase1();
void imprimirCase2();
void imprimirCase0();

int main()
{

    system("clear || cls");
    SetConsoleOutputCP(65001);

    do
    {

        printf("=============================================================\n");
        printf("Bem-vindo ao Sistema de Controle de Notas\n");
        printf("1 - Cadastrar aluno, inserir notas(3), ver média e situação\n");
        printf("2 - Listagem geral\n");
        printf("0 - Sair\n");
        printf("Escolha uma das opções: ");
        scanf("%d", &opcoes);

        switch (opcoes)
        {
        case 1:
            imprimirCase1();
            break;

        case 2:
            imprimirCase2();
            break;

        case 0:
            imprimirCase0();
            break;

        default:
            printf("Opção Inválida\n");
        }

    } while (opcoes != 0);

    return 0;
}

void imprimirCase1()
{
    if (totalAlunos < 50)
    {
        printf("=============================================================\n");
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[totalAlunos]);

        printf("Digite as três notas: ");
        scanf("%f %f %f", &nota1[totalAlunos], &nota2[totalAlunos], &nota3[totalAlunos]);

        media[totalAlunos] = (nota1[totalAlunos] + nota2[totalAlunos] + nota3[totalAlunos]) / 3;

        if (media[totalAlunos] >= 6)
        {
            printf("A média do aluno %s é: %.2f\n", aluno[totalAlunos], media[totalAlunos]);
            printf("O aluno %s foi aprovado !\n", aluno[totalAlunos]);
        }
        else
        {
            printf("A média do aluno %s é: %.2f\n", aluno[totalAlunos], media[totalAlunos]);
            printf("O aluno %s foi reprovado !\n", aluno[totalAlunos]);
        }

        totalAlunos++;
    }
    else
    {
        printf("Limite de 50 alunos atingido !\n");
    }
}

void imprimirCase2()
{
    printf("=============================================================\n");
    printf("Listagem geral: \n");
    if (totalAlunos == 0)
    {
        printf("Nenhum aluno cadastrado\n");
    }
    else
    {
        for (int i = 0; i < totalAlunos; i++)
        {
            printf("Aluno: %s | Notas %.2f %.2f %.2f | Média %.2f\n", aluno[i], nota1[i], nota2[i], nota3[i], media[i]);
        }
    }
}

void imprimirCase0()
{
    printf("=============================================================\n");
    printf("Você Saiu\n");
    printf ("Integrantes e RA:\n");
    printf("Gabriel Lucas Palotta - 260030128\n");
}
