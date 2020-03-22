#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void suma(int n, int v[], int *s)
{
	int i;
	*s = 0;
	for (i = 0; i < n; i++)
		*s = *s + v[i];
}

int main()
{
	int n, v[100], i, s;
	printf("Dati nr de elemente: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Dati elementul de pe pozitia %d: ", i);
		scanf("%d", &v[i]);
	}
	suma(n, v, &s);
	printf("%d", s);
	system("pause");
	return 0;
}