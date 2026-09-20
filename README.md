Sistema de Controle de Notas

Projeto desenvolvido como trabalho acadêmico durante o curso de Tecnologia em Análise e Desenvolvimento de Sistemas (ADS) no UNISAL. 
O objetivo do projeto foi desenvolver, em linguagem C, um sistema simples para cadastro e controle das notas de alunos, colocando em prática conceitos de programação estudados durante a disciplina.

Sobre o projeto

O sistema permite cadastrar até 50 alunos, inserir três notas para cada aluno, calcular automaticamente a média e informar a situação do aluno.

O programa possui um menu principal com as seguintes opções:

1 - Cadastrar aluno: permite inserir o nome e as três notas do aluno. Após o cadastro, o sistema calcula a média e informa se o aluno foi aprovado ou reprovado.

2 - Listagem geral: exibe todos os alunos cadastrados, suas respectivas notas e médias.

0 - Sair: encerra o programa.

Conceitos utilizados

Durante o desenvolvimento foram utilizados conceitos fundamentais da linguagem C, como:
Variáveis e tipos de dados;
Vetores;
Strings;
Estruturas de decisão (if/else e switch/case);
Estruturas de repetição (for e do/while);
Funções;
Entrada e saída de dados com scanf e printf;
Operações matemáticas;
Cálculo de média;
Organização do código em diferentes funções.

Funcionamento

O programa utiliza vetores para armazenar os dados dos alunos. 
Os nomes são armazenados em um vetor de strings, enquanto as notas e médias são armazenadas em vetores do tipo float.
A média é calculada através da fórmula:

Média = (Nota 1 + Nota 2 + Nota 3) / 3
Caso a média seja maior ou igual a 6, o aluno é considerado aprovado. Caso contrário, é considerado reprovado.

O código também possui um limite de 50 alunos cadastrados, evitando que o programa ultrapasse o tamanho definido para os vetores.

Objetivo acadêmico

Este projeto foi desenvolvido com o objetivo de praticar os fundamentos de programação em C e desenvolver a capacidade de criar um programa funcional a partir dos conceitos estudados em sala de aula.
O projeto também serviu como exercício de organização de código, utilização de funções e manipulação de dados armazenados em vetores.

Autor

Gabriel Lucas Palotta

Estudante de Tecnologia em Análise e Desenvolvimento de Sistemas — UNISAL
