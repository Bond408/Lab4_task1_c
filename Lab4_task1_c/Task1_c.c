#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int i;
	printf("������� ���������� �����\n");
	scanf_s("%d", &i);
	printf("���������� ����� ��������������� ���� 1/i = 1/%d\n", i);



}