#define _CRT_SECURE_NO_WARNINGS
#define CAPACITY 8
#include <stdio.h>
int stiva[CAPACITY], binar[CAPACITY], top = -1;

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

int pop()
{
	if (isEmpty())
	{
		return 0;
	}
	else
	{
		return stiva[top--];
	}
}

int peek()
{
	if (isEmpty())
	{
		return 0;
	}
	else
	{
		return stiva[top];
	}
}

int isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

void afisare()
{
	int i;
	if (isEmpty())
		printf("E goala\n");
	else
	{
		printf("Elementele stivei sunt: ");
		for (i = 0; i < CAPACITY; i++)
			printf("%d ", stiva[i]);
		printf("\n");
	}

}

int main()
{
	int op, nr, aux, k, item, i, index;
	
	do {
		printf("0-Iesire\n");
		printf("1-Adaugare\n");
		printf("2-Stergere\n");
		printf("3-Afisare stiva\n");
		printf("4-Valoarea maxima\n");
		printf("Alegeti optiunea: ");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			printf("Dati numarul in baza 2 pana la 255: ");
			scanf("%d", &nr);
			if (nr > 255 || nr < 0)
				printf("Valoare gresita\n");
			else
			{
				for (i = 0; i < CAPACITY; i++)
				{
					stiva[i] = 0;
					binar[i] = 0;
				}
				top = -1;
				k = 0;
				aux = nr;

				for (i = CAPACITY - 1; i >= 0; i--)
				{
					item = aux % 2;
					if (item == 1)
						k++;
					binar[i] = item;
					aux = aux / 2;
				}
				printf("Numarul transformat in baza 2 este: ");
				for (i = 0; i < CAPACITY; i++)
				{
					printf("%d", binar[i]);
					push(binar[i]);
				}

				printf("\n");
			}
			break;

		case 2:
			item = pop();
			if (item == 0)
				printf("Stiva goala\n");
			else
				printf("%d", item);
			break;

		case 3:
			afisare();
			break;

		case 4:
			k = 0;
			for (i = 0; i < CAPACITY; i++)
			{
				if (peek() == 1)
					k++;
				pop();
			}
			for (i = 0; i < CAPACITY; i++)
			{
				if (i < k)
					push(1);
				else
					push(0);
			}
			afisare();
			break;
		}
	} while (op != 0);

	system("pause");
	return 0;
}