#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define Lsize 30
#define Rsize 30


void printArray(int array_sort[], int size);
void printArray_char(char array_sort[], int size);

void InsertionSort(int array_sort[], int size);
void InsertionSort_char(char array_sort[], int size);

void SelectionSort(int array_sort[], int size);
void SelectionSort_char(char array_sort[], int size);

void BubbleSort(int array_sort[], int size);
void BubbleSort_char(char array_sort[], int size);

void MergeSort(int array_sort[], int left, int right);
void MergeSort_char(char array_sort[], int left, int right);


int main() {

	long int start_t, end_t;


	int IDNumber[] = { 2,0,1,8,5,5,5,0,3,7 };
	char studentName[] = "SELINKARSLI";
	int length = sizeof(IDNumber) / sizeof(IDNumber[0]);
	int length2 = strlen(studentName);

	printArray(IDNumber, length);
	printf("\n\n");
	printf("INSERTION SORT\n");
	start_t = clock();
	InsertionSort(IDNumber, length);
	end_t = clock();
	printArray(IDNumber, length);
	printf("\nThe total time for INSERTION SORT : %f\n", ((double)(end_t - start_t)) / CLOCKS_PER_SEC);

	printf("SELECTION SORT\n");
	start_t = clock();
	SelectionSort(IDNumber, length);
	end_t = clock();
	printArray(IDNumber, length);
	printf("\nThe total time for SELECTION SORT : %f\n", ((double)(end_t - start_t)) / CLOCKS_PER_SEC);

	printf("BUBBLE SORT\n");
	start_t = clock();
	BubbleSort(IDNumber, length);
	end_t = clock();
	printArray(IDNumber, length);

	printf("\nThe total time for BUBBLE SORT : %f\n", ((double)(end_t - start_t)) / CLOCKS_PER_SEC);

	printf("MERGE SORT \n");
	start_t = clock();
	MergeSort(IDNumber, 0, length - 1);
	printArray(IDNumber, length);
	printf("\n");
	end_t = clock();
	printf("The total time for MERGE SORT : %f\n\n", ((double)(end_t - start_t)) / CLOCKS_PER_SEC);


	printArray_char(studentName, length2);


	printf("\n\n");
	start_t = clock();
	InsertionSort_char(studentName, length2);
	end_t = clock();
	printArray_char(studentName, length2);
	printf("\n");
	printf("The total time for INSERTION SORT : %f\n", ((double)(end_t - start_t)) / CLOCKS_PER_SEC);


	start_t = clock();
	SelectionSort_char(studentName, length2);
	end_t = clock();
	printArray_char(studentName, length2);
	printf("\n");
	printf("The total time for SELECTION SORT : %f\n", ((double)(end_t - start_t)) / CLOCKS_PER_SEC);

	start_t = clock();
	BubbleSort_char(studentName, length2);
	printArray_char(studentName, length2);
	end_t = clock();
	printf("\n");
	printf("The total time for BUBBLE SORT : %f\n", ((double)(end_t - start_t)) / CLOCKS_PER_SEC);


	
	start_t = clock();
	MergeSort_char(studentName, 0, length2- 1);
	printArray_char(studentName, length2);
	end_t = clock();
  printf("\n");
	printf("The total time for MERGE SORT : %f\n", ((double)(end_t - start_t))/CLOCKS_PER_SEC);
	

	return 0;
}

void printArray(int array_sort[], int size)
{

	for (int i = 0; i < size; i++)
	{
		printf("%d ", array_sort[i]);
	}
}

void printArray_char(char array_sort[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%c ", array_sort[i]);
	}
}
void InsertionSort(int array_sort[], int size)
{

	int element, previous_num;
	for (int i = 0; i < size; i++)
	{
		element = array_sort[i];
		previous_num = i - 1;

		while (previous_num >= 0 && array_sort[previous_num] > element)
		{
			array_sort[previous_num + 1] = array_sort[previous_num];
			previous_num--;
		}

		array_sort[previous_num + 1] = element;

	}
}

void InsertionSort_char(char array_sort[], int size)
{

	int element, previous_num;
	for (int i = 0; i < size; i++)
	{
		element = array_sort[i];
		previous_num = i - 1;


		while (previous_num >= 0 && array_sort[previous_num] > element)
		{
			array_sort[previous_num + 1] = array_sort[previous_num];
			previous_num--;
		}

		array_sort[previous_num + 1] = element;

	}
}
void SelectionSort(int array_sort[], int size)
{

	int minIndex, temp;
	for (int i = 0; i < size; i++)
	{
		minIndex = i;
		for (int j = i; j < size; j++)
		{
			if (array_sort[j] < array_sort[minIndex])
			{
				minIndex = j;
			}
		}
		temp = array_sort[i];
		array_sort[i] = array_sort[minIndex];
		array_sort[minIndex] = temp;
	}
}

void SelectionSort_char(char array_sort[], int size)
{

	int minIndex, temp;
	for (int i = 0; i < size; i++)
	{
		minIndex = i;
		for (int j = i; j < size; j++)
		{

			if (array_sort[j] < array_sort[minIndex])
			{
				minIndex = j;
			}
		}
		temp = array_sort[i];
		array_sort[i] = array_sort[minIndex];
		array_sort[minIndex] = temp;
	}
}

void BubbleSort(int array_sort[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j < size - i; j++)
		{
			if (array_sort[j - 1] > array_sort[j]) {
				int temp = array_sort[j];
				array_sort[j] = array_sort[j - 1];
				array_sort[j - 1] = temp;
			}
		}
	}
}

void BubbleSort_char(char array_sort[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j < size - i; j++)
		{

			if (array_sort[j] < array_sort[j - 1])
			{
				int temp = array_sort[j];
				array_sort[j] = array_sort[j - 1];
				array_sort[j - 1] = temp;
			}
		}
	}
}

void merge(int array_sort[], int left, int middle, int right)
{
	int i, j, k;
	int lsize = middle - left + 1;
	int rsize = right - middle;

	int L[Lsize], R[Rsize];

	for (i = 0; i < lsize; i++)
		L[i] = array_sort[left + i];
	for (j = 0; j < rsize; j++)
		R[j] = array_sort[middle + 1 + j];
	i = 0;
	j = 0;
	k = left;
	while (i < lsize && j < rsize)
	{
		if (L[i] <= R[j])
		{
			array_sort[k] = L[i];
			i++;
		}
		else
		{
			array_sort[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < lsize)
	{
		array_sort[k] = L[i];
		i++;
		k++;
	}
	while (j < rsize)
	{
		array_sort[k] = R[j];
		j++;
		k++;
	}
}
void merge_char(char array_sort[], int left, int middle, int right)
{
	int i, j, l = 0;
	char New[Rsize];

	for (i = left, j = middle + 1; (i <= middle) && (j <= right);)
	{
		if (array_sort[i] < array_sort[j]) {
			New[l] = array_sort[i];
			i++;
			l++;
		}
		else {
			New[l] = array_sort[j];
			j++;
			l++;
		}
	}

	while (i <= middle) {
		New[l] = array_sort[i];
		i++;
		l++;
	}
	while (j <= right) {
		New[l] = array_sort[j];
		j++;
		l++;
	}
	for (i = left, l = 0; i <= right; i++, l++) {
		array_sort[i] = New[l];
	}

}

void MergeSort(int array_sort[], int left, int right)
{
	if (left < right)
	{
		int middle = left + (right - left) / 2;

		MergeSort(array_sort, left, middle);
		MergeSort(array_sort, middle + 1, right);
		merge(array_sort, left, middle, right);
	}
}

void MergeSort_char(char array_sort[], int left, int right) {
	
  int middle;
	if (left < right)
	{
		middle = (left + right) / 2;

		MergeSort_char(array_sort, left, middle);
		MergeSort_char(array_sort, middle + 1, right);
		merge_char(array_sort, left, middle, right);

	}
}