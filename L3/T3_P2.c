#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, c, i, x, aux, poz, bit;
	printf("n=");
	scanf("%d", &n);
	printf("c=");
	scanf("%d", &c);
	for (i = 0; i < n; i++)
	{
		printf("x=");
		scanf("%d", &x);
		aux = x;
		poz = 0;
		while (aux)
		{
			bit = aux % 2;
			if (poz == c)
				if (bit == 1)
					printf("%d ", x);
			aux = aux / 2;
			poz++;
		}
	}
	system("pause");
	return 0;
}