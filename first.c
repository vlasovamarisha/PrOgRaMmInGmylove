#include <stdio.h>

#include <stdlib.h>


void init(int* arr, int n)

{


	int i;
	for (i = 0; i < n; ++i)

	{

		arr[i] = i;

	}

}


int main()

{

	int* arr = NULL;
	int n = 10;
	arr = malloc(n * sizeof(int));
	init(arr, n);


	int i;
	for (i = 0; i < n; ++i)

	{

		printf("%d\n", arr[i]);

	}
	return 0;
}

