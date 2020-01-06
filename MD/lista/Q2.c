/*Escrever um programa para listar números primos sequencialmente. Você deve otimizar o
programa para que ele liste o maior número possível de primos em 60 segundos.*/
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
	int numero = 2;
	while(numero)
	{
		if(eh_primo(numero))
		{
			printf("O numero %d é primo.\n", numero);
		}
		numero++;	
	}
	
	return 0;
}