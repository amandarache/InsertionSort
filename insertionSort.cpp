#include <iostream>
using namespace std;


/* THIS INSERTION SORT IS FOR ASCENDING ORDER SORTING FOR INTEGERS/NUMBERS */
void InsertionSort(int list[], int size) {

	for(int i = 1; i < size; i++) {												//iterate starting at last element which is "new"
		int temp = list[i];														//unless array is of size 1 or less
		int j;
		for(j = i-1; j >= 0 && temp < list[j]; j--) {							//iterate through every element before "new" one
			list[j+1] = list[j];												//compare values and switch if necessary
		}
		list[j+1] = temp;														//finalize switching elements
	}	
}

int main() {
	int size, element;
	int count = 0;
	cin >> size;																//get list size N
	int list[size];																//create array of size

	while(count != size) {														//get all N elements
		cin >> element;
		list[count] = element;
		count++;
	}

	cout << endl;
	InsertionSort(list, size);													//call insertion sort

	for(int i = 0; i < size; i++) {												//print the sorted list
		cout << list[i] << endl;
	}

	return 0;
}