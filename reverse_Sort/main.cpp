#include <iostream>
#include <string>
using namespace std;
//a is the array, index is the position that you want ex: second smallest = 1 since arrays start at 0
int smallestByIndex(int a[], int index, int length) {
	int holePosition;
	int valueToInsert;

	//implementation of insertion sort to make it easy to retrieve the index 
	for (int i = 0; i <= length; i++)
	{
		//picks the value to be inserted
		valueToInsert = a[i];
		holePosition = i;
		
		//finds the hole position to insert the selected value
		while ((holePosition > 0) && (a[holePosition - 1] > valueToInsert)) {
			a[holePosition] = a[holePosition - 1];
			holePosition = holePosition - 1;
		}

		//insert the new value
		a[holePosition] = valueToInsert;

	}
	//returns the index selected
	return a[index];
}
	

int main() {
	/*
	//Initiale variables
	int counter = 0;
	string reverse="",
	input = "";
	
	getline(cin, input);
	
	//Strings must beset to be the same size
	reverse = input;
	
	//arrays start at 0 and length() gives you a number starting from 1
	//counter must be initialized to start from then end
	counter = input.length()-1;

	//loops through strings and reverses order
	for ( int i = 0; i < input.length(); i++)
	{
		reverse[i] = input[counter];
		counter--;
	}

	cout << reverse << endl;
	*/

	int a[] = { 42, 8,2, 13, 79, 88, 66, 18 };
	cout<<smallestByIndex(a, 1,7);

	system("pause");
	return 0;
}









