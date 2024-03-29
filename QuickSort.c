#include <stdio.h>
#include <stdlib.h>

void qs(int lista[], int inf, int sup)
{
  int izq = 0, der = 0;
  int mitad = 0, x = 0;

  izq = inf; der = sup;
  mitad = lista[(izq+der)/2];
  do
  {
    while (lista[izq] < mitad && izq < sup) izq++;
    while (mitad < lista[der] && der > inf) der--;
    if (izq <= der)
    {
      x = lista[izq], lista[izq] = lista[der], lista[der] = x;
      izq++; der--;
    }
  }
  
  while (izq <= der);
  if (inf < der) qs(lista, inf, der);
  if (izq < sup) qs(lista, izq, sup);
}

// Función quicksort
void quicksort(int lista[], int n_elementos)
{
	qs(lista, 0, n_elementos - 1);
}


int main()
{
	int arreglo[10] = {56, 123123132, 345, 67976, 2323, 78, 7, 846, 91, 0};
	
	quicksort(arreglo, sizeof(arreglo)/sizeof(int));
	
	for(int i = 0; i < sizeof(arreglo)/sizeof(int); printf_s("%d ", arreglo[i]), i++);
	
	getchar();
	return EXIT_SUCCESS;
}




