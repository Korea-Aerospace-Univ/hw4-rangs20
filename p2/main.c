#include <stdio.h>	
int main(void) {
	int N;
	scanf("%d", &N);
	char chr;
	int alpha = 0, digit = 0;
	int MAXalpha = 0, MAXdigit = 0;
	for (int i = 1; i <= N; i++)
	{
		scanf(" %c", &chr);
		if ('a' <= chr && chr <= 'z') {
			alpha++;
			digit = 0;
		}
		else if ('0' <= chr && chr <= '9') {
			digit++;
			alpha = 0;
		}
		else {digit = 0; alpha = 0;}

		if (digit > MAXdigit) {
			MAXdigit = digit;
		}
		if (alpha > MAXalpha) {
			MAXalpha = alpha;
		}

	}
	printf("%d\n", MAXalpha);
	printf("%d\n",MAXdigit);
	return 0;
}
