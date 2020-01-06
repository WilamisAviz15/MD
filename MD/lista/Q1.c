/*Escrever um programa que determina se um dado número inteiro é primo ou não.*/
#include <stdio.h>

int eh_primo(int numero)
{
	int i, aux = 1;
	for (i = 2; i < numero; i++)
	{
		if(numero % i == 0)
		{
			aux = 0;
			break;
		}
	}
	return aux;
}

int main()
{
	int numero;

	scanf("%d", &numero);
	if(eh_primo(numero))
	{
		printf("O numero %d é primo.\n", numero);
	}
	else
	{
		printf("O numero %d NÃO é primo.\n", numero);
	}
	return 0;
}