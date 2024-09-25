#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int x, y, a;
	printf("введите стоимость молока в марте \n");
	scanf_s("%d", &x);
	printf("Введите насколько молоко повысило стомость в апреле \n");
	scanf_s("%d", &a);
	y = 4 * (x + a) * 30;
	printf("Покупатель отдал за март %d",y );
	return 0;
}