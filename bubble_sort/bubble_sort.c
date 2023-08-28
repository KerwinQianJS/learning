#include <stdio.h>


	int a[10] = {9, 8, 20, 2, 74, 11, 4, 29, 92, 12};
static void printf_a()
{
	for(int i=0; i<10; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}


int main( void )
{


	for(int i = 0; i < 10-1; i++ )
	{
		for(int j = 0; j < 10-1-i; j++)
		{
			printf("a[%d] comp a[%d]\n", j,j+1);
			if(a[j] > a[j+1])
			{
				int tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
			}
			printf_a();
		}
	}

    return 0;
}
