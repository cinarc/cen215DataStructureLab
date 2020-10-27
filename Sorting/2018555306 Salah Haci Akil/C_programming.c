#include <stdio.h>
#include <time.h>
#include<string.h>

void SelectionSort(int* A, int length);
void SelectionSort(char* A, int length);

void InsertionSort(int* A, int length);
void InsertionSort(char* A, int length);

void BubbleSort(int* A, int length);
void BubbleSort(char* A, int length);

void MergeSort(int A[], int l, int h);
void MergeSort(char A[], int l, int h);


void Merge(int A[], int l, int mid, int h)
{
	int i = l, j = mid + 1, k = l;
	int B[100];

	while (i <= mid && j <= h)
	{
		if (A[i] < A[j])
			B[k++] = A[i++];
		else
			B[k++] = A[j++];
	}
	for (; i <= mid; i++)
		B[k++] = A[i];
	for (; j <= h; j++)
		B[k++] = A[j];

	for (i = l; i <= h; i++)
		A[i] = B[i];
}
void Merge(char A[], int l, int mid, int h)
{
	int i = l, j = mid + 1, k = l;
	int B[100];

	while (i <= mid && j <= h)
	{
		if (A[i] < A[j])
			B[k++] = A[i++];
		else
			B[k++] = A[j++];
	}
	for (; i <= mid; i++)
		B[k++] = A[i];
	for (; j <= h; j++)
		B[k++] = A[j];

	for (i = l; i <= h; i++)
		A[i] = B[i];
}
void swap(int * a, int *b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;


}
void swap(char* a, char* b) {

	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int* A, int length) {

	for (int i = 0; i < length; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}
void printArray(char* A, int length) {

	for (int i = 0; i < length; i++)
	{
		printf("%c ", A[i]);
	}
	printf("\n");
}

int main() {
	printf("NAME AND SURNAME = salah haciakil = 2018555306\n\n");
	clock_t time1;

	//Selection Sort
	int id[] = { 2,0,1,8,5,5,5,3,0,6};
	char name[] = "salah haciakil";
	int n = sizeof(id) / sizeof(id[0]);
	int char_size = strlen(name);

	printf("========================InsertionSort=====================\n");

	time1 = clock();
	InsertionSort(id, n);
	time1 = clock() - time1;

	printArray(id, n);
	printf("insertion sort time: %f\n", ((double)time1) / CLOCKS_PER_SEC);

	InsertionSort(name, char_size);
	time1 = clock() - time1;


	printf("%s\n", name);
	printf("insertion char sort time: %f\n", ((double)time1) / CLOCKS_PER_SEC);

	//Selection Sort
	int id1[] = { 2,0,1,8,5,5,5,3,0,6 };
	char name1[] = "salah haciakil";

	printf("========================SelectionSort=====================\n");

	time1 = clock();
	SelectionSort(id1, n);
	time1 = clock() - time1;

	printArray(id1, n);
	printf("selection sort time: %f\n", ((double)time1) / CLOCKS_PER_SEC);

	SelectionSort(name1, char_size);
	time1 = clock() - time1;

	printf("%s\n", name1);
	printf("selection char sort time: %f\n", ((double)time1) / CLOCKS_PER_SEC);


	//Bubble Sort

	printf("========================BubbleSort=====================\n");
	int id2[] = { 2,0,1,8,5,5,5,3,0,6 };
	char name2[] = "salah haciakil";

	time1 = clock();
	BubbleSort(id2, n);
	time1 = clock() - time1;

	printArray(id2, n);
	printf("bubble sort time: %f\n", ((double)time1) / CLOCKS_PER_SEC);

	BubbleSort(name2, char_size);
	time1 = clock() - time1;

	printf("%s\n", name2);
	printf("bubble char sort time: %f\n", ((double)time1) / CLOCKS_PER_SEC);


	//Merge Sort

	printf("========================MergeSort=====================\n");
	int id3[] = { 2,0,1,8,5,5,5,3,0,6 };
	char name3[] = "salah haciakil";

	time1 = clock();
	MergeSort(id3, 0, n - 1);
	time1 = clock() - time1;

	printArray(id3, n);
	printf("merge sort time: %f\n", ((double)time1) / CLOCKS_PER_SEC);

	MergeSort(name3, 0, char_size - 1);
	time1 = clock() - time1;

	printf("%s\n", name3);
	printf("merge char sort time: %f\n", ((double)time1) / CLOCKS_PER_SEC);

	return 0;
}


void SelectionSort(int* A, int length ) {

	int i = 0;
	int min = 0;
	int j = 0;

	for (i ;  i < length - 1; i++)
	{
		min = i;
		for (int  j =  i + 1; j < length; j++)
		{
			if (A[j] < A[min])
				min = j;
		}
		swap(&A[i], &A[min]);



	}



}
void SelectionSort(char* A, int length) {

	int i = 0;
	int min = 0;
	int j = 0;

	for (i; i < length - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < length; j++)
		{
			if (A[j] < A[min])
				min = j;
		}
		swap(&A[i], &A[min]);



	}



}

void InsertionSort(int* A, int length) {

	int i, j, temp;
	for (i = 1; i < length; i++)
	{
		j = i - 1;
		temp = A[i];
		while (j >= 0 && temp < A[j])
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = temp;
	}


}
void InsertionSort(char* A, int length) {

	int i, j;
	char temp;
	for (i = 1; i < length; i++)
	{
		j = i - 1;
		temp = A[i];
		while (j >= 0 && temp < A[j])
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = temp;
	}



}


void BubbleSort(int* A, int length) {

	int i, j, flag = 0;

	for (i = 0; i < length - 1; i++)
	{
		flag = 0;
		for (j = 0; j < length - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				swap(&A[j], &A[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}


}
void BubbleSort(char* A, int length) {


	int i, j, flag = 0;

	for (i = 0; i < length - 1; i++)
	{
		flag = 0;
		for (j = 0; j < length - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				swap(&A[j], &A[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}


}

void MergeSort(int A[], int l, int h)
{
	int mid;
	if (l < h)
	{
		mid = (l + h) / 2;
		MergeSort(A, l, mid);
		MergeSort(A, mid + 1, h);
		Merge(A, l, mid, h);

	}
}
void MergeSort(char A[], int l, int h) {

	int mid;
	if (l < h)
	{
		mid = (l + h) / 2;
		MergeSort(A, l, mid);
		MergeSort(A, mid + 1, h);
		Merge(A, l, mid, h);

	}



}
