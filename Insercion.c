#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arreglo[10] = "Hola Jose!";
	
	int /*arreglo[10] = {56, 123123132, 345, 67976, 2323, 78, 7, 846, 91, 0},*/
		e = 1, i = 0, size = sizeof(arreglo) / sizeof(char), temp = 0;

	while(e < size)
	{
		temp = arreglo[e];
		i = e - 1;
		while(i >= 0 && temp < arreglo[i])
		{
			arreglo[i + 1] = arreglo[i];
			i--;
		}
		arreglo[i + 1] = temp;

		e++;
	}
	
	for(int i = 0; i < size; i++)
	{
		printf_s("%c", arreglo[i]);
	}

	printf_s("\n\n");


	getchar();
	return EXIT_SUCCESS;
}
