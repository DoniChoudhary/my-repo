#include <stdio.h>
int main(int argc, char const *argv[])
{
  int n,i,a=1,b=1;
  int c = a+b;
  printf("Fibonacci Series\n");
  for (int i = 0; i < 1000; ++i)
  {
  	printf("%d\n",a,b,c);
  	a=b;
  	b=c;
  	c=a+b;
  }
	return 0;
}