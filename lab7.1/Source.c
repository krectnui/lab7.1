#include <stdio.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL,"RUS");

	char c;

	printf("Введите цифру или букву ");

	scanf_s("%c", &c);

	switch (c)

	{

	case '0':

		printf("Введено цифра .\n");

		break;

	case '1':

		printf("Введено цифра.\n");

		break;
	case '2':

		printf("Введено цифра.\n");

		break;
	case '3':

		printf("Введено цифра.\n");

		break;
	case '4':

		printf("Введено цифра.\n");

		break;
	case '5':

		printf("Введено цифра.\n");

		break;
	case '6':

		printf("Введено цифра.\n");

		break;
	case '7':

		printf("Введено цифра.\n");

		break;

	default:

		printf("Введена буква\n");

	}

	return 0;

}