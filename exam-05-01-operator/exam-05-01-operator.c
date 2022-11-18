/*
 연산자

 1. 산술연산자
	+, -, *, /, %
 
 2. 대입 연산자
	=, +=, -=, *=, /=, %=
	: 연산자 오른쪽에 있는 값을 연산자 왼쪽에 있는 변수에 대입.
 
 3. 비교 연산자
	>	: 크다
	>=	: 크거나 같다
	<	: 작다
	<=	: 작거나 같다
	==	: 같다
	!=	: 다르다

 ** 연산자 우선수위
		1) ++, --
		2) +, - 부호연산자(양수,음수)
		3) *, /, %
		4) +, - 덧셈, 뺄셈
		5) <, >, <=, >=
		6) ==, !=
		7) =, +=, -=, *=, /=, %=

*/

#include <stdio.h>
int main(void)
{
	// 산술연산자
	printf("산술 연산자 \n");
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	printf("\n");

	// 대입연산자
	printf("대입 연산자 \n");
	int num3 = 3, num4 = 4;
	num3 += 3; // num3 = num3 + 3;
	num4 *= 4; // num4 = num4 * 4;
	printf("num3 += 3 의 결과 : %d\n", num3);
	printf("num4 *= 4 의 결과 : %d\n", num4);

	printf("\n");

	// 비교연산자
	printf("비교 연산자 \n");
	int a = 10, b = 11;
	printf("a == b : %d\n", a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a != b : %d\n", a != b);




}