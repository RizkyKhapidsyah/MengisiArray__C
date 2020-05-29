#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int x[5], i;

	for (i = 0; i <= 4; i++)
	{
		printf("Masukkan nilai %i  : ", i + 1);
		scanf_s("%i", &x[i]);
	}

	puts("");
	for (i = 0; i <= 4; i++)
	{
		printf("Nilai ke %i\t= %i\n", i + 1, x[i]);
	}

	puts("");

	_getch();
	return 0;
}