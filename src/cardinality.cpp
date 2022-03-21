
// this part we will determine the size of sets
// for instance, let S is a set
// set of S has element of {2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9}
// with the code below, we will display just the cadinality of the set.
// cardinality sets = {2,3,4,5,6,7,8,9}


#include <iostream>
using namespace std;

// function for display the array
void printArray(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	} cout << endl;
}

// function of cardinality
void cardinality(int arr[], int n){
	int new_arr[n]; // declare a new array for filtered elements
	int n_new = 1; // the size of elements of new array after filtered

	// loop through the array
	for (int i = 0; i < n; i++){
		int step = arr[i]; // the step for initialing does the element have a same elements
		int j = i - 1; // the variable for comparing the step
		
		// start insert the cardinality elements to the new array
		new_arr[0] = arr[0]; // insert first number of array

		while (j >= 0 && arr[j] != step){ // checking the element of step
			// when j has arrived at the last loop and do not denote the same element
			if (j == 0 && arr[j] != step){
				new_arr[n_new] = step; // insert the element of array into the new array
				n_new++; // increment n_new
			}
			j--; // decrement j
		}
	}

	// display the filtered array
	printArray(new_arr, n_new);
}

// DRIVER CODE
int main (){
	int arr[] = {2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "before filter" << endl;
	printArray(arr, n);

	cout << "after filter" << endl;
	cardinality(arr, n);

	return 0;
}