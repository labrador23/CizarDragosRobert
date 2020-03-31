#define _CRT_SECURE_NO_WARNINGS
#define CAPACITY 8
#include <stdio.h>
int stiva[CAPACITY], binar[CAPACITY], invers[CAPACITY], top = -1;

void golire()
{
	int i;
	top = -1;
	for (i = 0; i < CAPACITY; i++)
	{
		stiva[i] = 0;
		binar[i] = 0;
		invers[i] = 0;
	}

}
void push(int x)
{
	if (isFull())
	{
		printf("Stiva plina\n");
	}
	else
	{
		top++;
		stiva[top] = x;
	}
}

int isFull()
{
	if (top == CAPACITY - 1)
		return 1;
	else
		return 0;
}

void afisare()
{
	int i;
	if (top == -1)
		printf("E goala\n");
	else
	{
		printf("Elementele stivei sunt: ");
		for (i = 0; i <= top; i++)
			printf("%d ", stiva[i]);
		printf("\n");
	}

}
int main()
{
	int op, n, aux, item, i, x, index, j;
	printf("Dati numarul de termeni: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		golire();
		printf("Dati un termen: ");
		scanf("%d", &x);
		aux = x;
		for (j = CAPACITY - 1; j >= 0; j--)
		{
			item = aux % 2;
			binar[j] = item;
			if (item == 1)
				invers[j] = 0;
			else
				invers[j] = 1;
			aux = aux / 2;
		}
		printf("Numarul transformat in baza 2 este: ");
		for (j = 0; j < CAPACITY; j++)
			printf("%d", binar[j]);


		printf("\n");
		printf("Numarul invers celui din baza 2 este: ");
		for (j = 0; j < CAPACITY; j++)
		{
			printf("%d", invers[j]);
			push(invers[j]);
		}
		printf("\n");
		afisare();
		printf("\n");
	}
	system("pause");
	return 0;
}