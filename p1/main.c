#include <stdio.h>
int main(void)
{
	int correct;
	scanf("%d", &correct);
	int number;
	scanf("%d", &number);
	int i = 1;
	do
	{
		if (number > correct)
		{
			printf("%d>?", number);
		}
		else if (number < correct)
		{
			printf("%d<?", number);
		} else  printf("%d==?\n", number);
		printf("\n");
		(void)scanf("%d", &number);
		i++;
	} while (number != correct);

	printf("%d",i);
}
