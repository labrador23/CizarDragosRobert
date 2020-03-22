#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *n, *v, *i, *s;
	n = (int*)malloc(sizeof(int));
	i = (int*)malloc(sizeof(int));
	s = (int*)malloc(sizeof(int));
	printf("Dati nr de elemente: ");
	scanf("%d", n);
	v = (int*)malloc(sizeof(int)*(*n));
	*s = 0;
	for (*i = 0; *i < *n; (*i)++)
	{
		printf("Dati elementul de pe pozitia %d: ", *i);
		scanf("%d", (v + *i));
		*s = *s + *(v + *i);
	}
	printf("%d\n", *s);

	system("pause");
	return 0;
}