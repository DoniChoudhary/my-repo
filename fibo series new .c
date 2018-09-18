#include <stdio.h>
int main()
{

	int i,a=1,b=1;

	int c = a-b; /*Now the first term is 0 and second will be like a=1 and b=0 giving c = 1*/

	for (i = 0; i < 10; ++i)

	{
		a = b;
		b = c;
		c = a+b;

		printf("%d\n", c);
	}

	return 0;
}

