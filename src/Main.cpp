#include <iostream>

int findMax(int* arr, int size) {

	int max = *arr;
	for (int* ptr = arr; ptr < arr + size; ptr++) {
		if (*ptr > max) {
			max = *ptr;
		}
	}
	return max;
}


int main() {
	
	int size;
	

	std::cout << "Enter the size of the array:" << '\n';
	std::cin >> size;

	int* arr = new int[size];

	std::cout << "Enter the elements of the array:" << '\n';
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}

	int maxElement = findMax(arr, size);

	std::cout << "The maximum element in the array is: " << maxElement << std::endl;

	delete[] arr;

	return 0;

}