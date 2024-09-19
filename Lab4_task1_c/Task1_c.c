#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int i;
	printf("Введите десятичное число\n");
	scanf_s("%d", &i);
	printf("Десятичное число соответствующее виду 1/i = 1/%d\n", i);



}