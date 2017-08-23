/*implementation of selection sort */
#include <stdio.h>

int selection_sort( int arr[], int size);

int main(int argc, char *argv[] )
{
		int i;
		int arr[] = {1, 5 , 10, 21, 5 , 4 , 354, 91, 20};

		printf("array\n");
		for( i = 0; i < 9; i++ )
		printf("%d ",arr[i]);

		selection_sort(arr,9);

		printf("\nSorted\n");
		for( i = 0; i < 9; i++ )
		printf("%d ",arr[i]);

		printf("\n");
		return 0;
}

int selection_sort(int arr[], int size)
{
		int i, j, temp;

		for( i = 0; i < size; i++ )
		{
				for( j = i; j < size; j++ )
				{
						if( arr[i] > arr[j] )
						{
								temp = arr[i];
								arr[i] = arr[j];
								arr[j] = temp;
						}
				}
		}

		return 1;
}
