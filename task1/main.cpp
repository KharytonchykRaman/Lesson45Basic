#include <iostream>

using namespace std;

void rand_init(int* array, int size, int min, int max);
string convert_array_string(int* array, int size);
int negative_element_sum(int* array, int size);
int max_element_index(int* array, int size);
int min_element_index(int* array, int size);
int product_betweeen_min_max(int* array, int size);

int main() {
	int size = 0;

	do
	{
		cout << "Input array size : ";
		cin >> size;
	} while (size < 1);

	int* array = new int[size];

	rand_init(array, size, -10, 10);
	cout << convert_array_string(array, size);
	cout << "\nSum of negative elements is " << negative_element_sum(array, size);
	cout << "\nProduct of elements between min and max is "
		<< product_betweeen_min_max(array, size);

	delete[] array;

	return 0;
}