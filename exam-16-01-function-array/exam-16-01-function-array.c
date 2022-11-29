/*
���ϸ� : exam-16-01-function-array.c

 �Լ�ȣ��� �迭�� ����
	�迭�� �Լ��� ���ڷ� ������ ���� �迭�� �̸��� �����ͺ����̰�,
	�迭�� �̸��� �����ϰ� �ִ� �����ʹ� ������(�ּҰ�)�̴�.
*/

#include <stdio.h>
int readArray(int* arr, int length)
{
	int i;
	printf("�迭�� ��� �о�� : [ ");
	for (i = 0; i < length; i++)
	{
		printf("%d", arr[i]);
		if (i + 1 < length)
		{
			printf(", ");
		}
		else
		{
			printf(" ");
		}
	}
	printf("]\n");
}

int main(void)
{
	int arr[3] = { 3, 6, 9 };
	int length = sizeof(arr) / sizeof(int);
	readArray(arr, length); // �迭�� �̸� arr�� ������ ������ ����

	return 0;
}