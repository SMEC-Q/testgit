#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sort.h"


int main()
{
	SqList	L;
	srand(time(NULL));
	L.length = 0;
	for (int i = 0; i < MAXSIZE; i++)
	{
		L.r[i + 1].key = rand()%100;    
		L.length++;
	}

	//SHELL(L);
	QuickSort(L);


	for (int i = 0; i < L.length; i++)
	{
		printf("%d  ", L.r[i + 1].key);
	}
	printf("\n");
}