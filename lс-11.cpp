#include <iostream>

using namespace std;


int main()
{
	int quantity;

	cout << "Enter quantity: ";
	cin >> quantity;

	if (quantity >= 2) {
		int *array = new int[quantity];
		cout << "Enter values: ";

		for (size_t i = 0; i < quantity; i++) {
			cin >> array[i];
		}

		int mostWater = 0;
		for (size_t i = 0; i < quantity; i++) {
			for (size_t j = i + 1; j < quantity; j++) {
				int lowestPile = array[i] < array[j] ? array[i] : array[j];

				if ((lowestPile * (j - i)) > mostWater) {
					mostWater = (lowestPile * (j - i));
				}
			}
		}

		cout << "Output: " << mostWater << endl;
		delete[] array;
	}
	else {
		cout << "Error: quantity must be at least 2!" << endl;
	}

	return 0;
}
