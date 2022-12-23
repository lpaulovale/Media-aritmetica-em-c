#include <stdio.h>
#define alunos 48

typedef struct nota
{
	float nota1, nota2, nota3;
	float media;
} notas[48];

int main()
{
	notas aluno;
	int loop = 0;
	while(loop < alunos)
	{
		printf("Digite tres notas : \n");
		scanf("%f", &aluno[loop].nota1);
		scanf("%f", &aluno[loop].nota2);
		scanf("%f", &aluno[loop].nota3);

		aluno[loop].media = (aluno[loop].nota1 + aluno[loop].nota2 + aluno[loop].nota3) / 3;

		if(aluno[loop].media >= 7)
		{
			printf("Aluno foi Aprovado\n");
		}
		if(aluno[loop].media < 7)
		{
			printf("Aluno foi reprovado\n");
		}
		loop++;
	}
	return 0;
}
