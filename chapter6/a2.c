#include <stdio.h>

int main(void);

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++) {
		printf("%d ", i);

		for (j = 0; j < i*i; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
