/*
파일명 : exam-17-01-double-pointer

 포인터 변수
	메모리에 주소값을 저장하는 변수

 더블포인터 변수
	포인터 변수의 주소값을 저장하는 변수
	포인터의 포인터

*/
#include <stdio.h>

int main(void)
{
	int num = 3;
	int* ptr1 = &num;
	int** dptr = &ptr1;
	int* ptr2;

	printf("num:%p ptr1:%p dptr:%p  ptr2:%p\n", &num, &ptr1, &dptr, &ptr2);

	printf("%p %p\n", ptr1, dptr);
	printf("%d %d\n", num, **dptr);
	ptr2 = *dptr;
	*ptr2 = 9;
	printf("%d %d\n", num, **dptr);

	return 0;

}