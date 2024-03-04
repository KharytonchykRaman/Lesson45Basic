#include <iostream>
#include <string>

using namespace std;

void rand_init(int* array, int size, int min, int max) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}
}

string convert_array_string(int* array, int size) {
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(array[i]) + " ";
	}
	return msg;
}

int negative_element_sum(int* array, int size) {

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0) {
			sum += array[i];
		}
	}
	return sum;
}

int max_element_index(int* array, int size) {

	int indexMax = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[indexMax] < array[i])
		{
			indexMax = i;
		}
	}
	return indexMax;
}

int min_element_index(int* array, int size) {

	int indexMin = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[indexMin] > array[i])
		{
			indexMin = i;
		}
	}
	return indexMin;
}

int product_betweeen_min_max(int* array, int size) {

	int indexMin = min_element_index(array, size);
	int indexMax = max_element_index(array, size);

	if (abs(indexMin - indexMax) < 2)
	{
		return 0;
	}

	if (indexMin > indexMax)
	{
		int t = indexMin;
		indexMin = indexMax;
		indexMax = t;
	}

	int product = 1;

	for (int i = indexMin + 1; i < indexMax; i++)
	{
		product *= array[i];
	}

	return product;
}