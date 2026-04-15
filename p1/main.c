#include <stdio.h>	

int main(void)
{
	int correct, number;
	scanf("%d", &correct);
	int i = 0;
	do
	{
		(void)scanf("%d", &number);
		i++;
		if (number > correct)
		{
			printf("%d>?", number);
		}
		else if (number < correct)
		{
			printf("%d<?", number);
		}
		else {printf("%d==?\n", number); }
		printf("\n");
	} while (number != correct);

	printf("%d",i);

	return 0;
}
