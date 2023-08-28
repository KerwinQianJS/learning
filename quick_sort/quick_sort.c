#include <stdio.h>

        int a[10] = {5, 8, 4, 2, 1, 6, 9, 7, 3, 0};
static void printf_a()
{
        for(int i=0; i<10; i++)
        {
                printf("%d  ", a[i]);
        }
        printf("\n");
}



void quick_sort(int *arr, int begin, int end)
{
	if(begin > end)
	{
		return;
	}

	printf_a();
	int tmp = arr[begin];
	int i = begin;
	int j = end;
	while(i != j)
	{
		while(arr[j] >= tmp && j>i)
			j--;
		while(arr[i] <= tmp && j>i)
			i++;
		if(j>i){
			int t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
	}
	arr[begin] = arr[i];
	arr[i] = tmp;

	quick_sort(arr, begin, i-1);
	quick_sort(arr, i+1, end);
}

int main()
{
	quick_sort(a, 0,9);
	return 0;
}

