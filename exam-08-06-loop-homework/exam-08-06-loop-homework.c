/*
 숙제!!!

1번 주말숙제 2중for문 코드 분석하기

2번
	  *
	 **
	***
   ****
3번
   *
  ***
 *****
*******

4번
   *
  ***
 *****
*******
 *****
  ***
   *
 
5번
	★
	*
   ***
  *****
 *******
   | |
   | |  Merry Christmas ~*
   

*/

#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}