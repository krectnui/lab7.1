#include <stdio.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL,"RUS");

	char c;

	printf("������� ����� ��� ����� ");

	scanf_s("%c", &c);

	switch (c)

	{

	case '0':

		printf("������� ����� .\n");

		break;

	case '1':

		printf("������� �����.\n");

		break;
	case '2':

		printf("������� �����.\n");

		break;
	case '3':

		printf("������� �����.\n");

		break;
	case '4':

		printf("������� �����.\n");

		break;
	case '5':

		printf("������� �����.\n");

		break;
	case '6':

		printf("������� �����.\n");

		break;
	case '7':

		printf("������� �����.\n");

		break;

	default:

		printf("������� �����\n");

	}

	return 0;

}