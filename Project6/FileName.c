#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int x, y, a;
	printf("������� ��������� ������ � ����� \n");
	scanf_s("%d", &x);
	printf("������� ��������� ������ �������� �������� � ������ \n");
	scanf_s("%d", &a);
	y = 4 * (x + a) * 30;
	printf("���������� ����� �� ���� %d",y );
	return 0;
}