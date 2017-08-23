/*This program is to */
#include <stdio.h>

int insertion_sort(int arr[], int size);

int main(int argc, char *argv[] )
{
		int i;
		int arr[] = {500,450,425,415, 351,375,250,575,257,125};

		printf("array\n");
		for( i = 0; i < 10; i++ )
		printf("%d ",arr[i]);

		insertion_sort(arr,10);

		printf("\nSorted\n");
		for( i = 0; i < 10; i++ )
		printf("%d ",arr[i]);

		printf("\n");

		return 0;

}

int insertion_sort(int arr[], int size)
{
		int i, key, j;
		for (i = 1; i < size; i++)
		{
		 	key = arr[i];
		 	j = i-1;

		 /* Move elements of arr[0..i-1], that are
				greater than key, to one position ahead
				of their current position */
		 	while (j >= 0 && arr[j] > key)
		 	{
				 arr[j+1] = arr[j];
				 j = j-1;
		 	}
		 	arr[j+1] = key;
	}
}
