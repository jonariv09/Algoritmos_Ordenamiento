#include <stdio.h>
#include <stdlib.h>

int main() {
	int arreglo[10] = {56, 2, 345, 67976, 2323, 78, 7, 846, 91, 1},
		e = 0, i = 0, size = sizeof(arreglo) / sizeof(int), temp = 0;
	
	//printf_s("%d", size);
	
	for(e = 0; e < size; e++)
	{
		for(i = 0; i < size - 1; i++)
		{
			if(arreglo[i] > arreglo[i+1])
			{
				temp = arreglo[i];
				arreglo[i] = arreglo[i + 1];
				arreglo[i + 1] = temp;
			}
		}
	}
	
	for(i = 0; i < (sizeof(arreglo) / sizeof(int)); i++)
	{
		printf_s("%d ", arreglo[i]);
	}


	getchar();
	return EXIT_SUCCESS;
}


