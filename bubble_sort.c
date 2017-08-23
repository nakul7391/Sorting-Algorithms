/*This program is to */
#include <stdio.h>

int bubble_sort(int arr[], int size);

int main(int argc, char *argv[] )
{
		int i;
		int arr[] = {9,8,7,6,5,4,3,2,1};

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
			int i, j, lock = 0;
			int temp;
			while (lock != size )
			{
					lock = 0;
					for( i = 0; i < size; i++ )
					{
							if (arr[i] > arr[i+1])
							{
									temp = arr[i];
									arr[i] = arr[i+1];
									arr[i+1] = temp;
							}
							else
							lock++;
					}
			}
}
