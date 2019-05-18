#include <iostream>

using namespace std;

int findMinimum (int, int);

int main()
{
	int quantity;
	
	cout << "Enter quantity: ";
	cin >> quantity;

	if (quantity >= 2) {
		int *array = new int[quantity];
		cout << "Enter values: ";
		
		for (int i = 0; i < quantity; i++) {
			cin >> array[i];
		}

		int mostWater = 0;
		for (int i = 0; i < quantity; i++) {
			for (int j = i + 1; j < quantity; j++) {
				int min = findMinimum(array[i], array[j]);
				
				if ((min * (j - i)) > mostWater) {
					mostWater = (min * (j - i));
				}
			}
		}
		
		cout << "Output: " << mostWater << "\n";
		delete[] array;
	}
	else {
		cout << "Error: quantity must be at least 2!" << "\n";
	}

	system("pause");
	return 0;
}

int findMinimum (int i, int j)
{
	if (i < j) {
		return i;
	}
	else {
		return j;
	}
}
