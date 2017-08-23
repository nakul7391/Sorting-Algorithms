/*implementation of bubble sort using recursion
largest element will bubble to last */
#include <stdio.h>

int bubble_sort(int arr[], int size);

int main(int argc, char *argv[] )
{
		int i;
		int arr[] = {1, 5 , 10, 21, 5 , 4 , 354, 91, 20};

		printf("array\n");
		for( i = 0; i < 9; i++ )
		printf("%d ",arr[i]);

		bubble_sort(arr,9);

		printf("\nSorted\n");
		for( i = 0; i < 9; i++ )
		printf("%d ",arr[i]);

		printf("\n");

		return 0;
}

int bubble_sort(int arr[], int size)
{
			int i, temp;
			if( size == 1)
			return 1;

			for( i = 0; i < size - 1; i++ )
			{
					if( arr[i] > arr[i+1])
					{
							temp = arr[i];
							arr[i] = arr[i+1];
							arr[i+1] = temp;
					}
			}

			bubble_sort(arr,size-1);
}
