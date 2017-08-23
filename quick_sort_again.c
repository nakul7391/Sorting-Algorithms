/*This program is to */
#include <stdio.h>

int partition(int arr[],int low, int high);
void swap(int *a, int *b);
int quick_sort(int arr[], int low, int high);

int main(int argc, char *argv[] )
{
		int i;
		int arr[] = {1, 5 , 10, 21, 5 , 6 , 354, 91, 20};

		printf("array\n");
		for( i = 0; i < 9; i++ )
		printf("%d ",arr[i]);

		quick_sort(arr,0,9);

		printf("\nSorted\n");
		for( i = 0; i < 9; i++ )
		printf("%d ",arr[i]);

		printf("\n");

		return 0;
}

void swap( int *a, int *b)
{
		int t = *a;
		*a = *b;
		*b = t;
}

int partition(int arr[], int low, int high)
{
		int pivot = arr[high];
		int i = low - 1;
		int j;

		for( j = low; j < high; j++ )
		{
				if( arr[j] <= pivot)
				{
						i++;
						swap(&arr[i],&arr[j]);
				}
		}
		swap(&arr[i+1],&arr[high]);
		return i+1;
}

int quick_sort(int arr[], int low, int high)
{
		int pi;
		if( low < high)
		{
				pi = partition(arr,low,high);

				quick_sort(arr,low,pi-1);
				quick_sort(arr,pi+1,high);
		}
}
