#include <iostream>
#include "OrderedArray.h"
#include "UnorderedArray.h"

using namespace std;

int main()
{
	OrderedArray<int> array(3);

	array.push(3);
	array.push(53);
	array.push(83);
	array.push(23); // <-- Should expand here
	array.push(82); // <-- Should expand here
	array.push(87);
	array.push(87);
	array.push(15);
	int arraySize = sizeof(array) / sizeof(array[0]);

	int n = array.GetSize();
	
	cout << "Ordered array contents: ";

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}

	cout << endl << endl;
	cout << arraySize << endl;
	cout << array.GetSize();

	return 0;
}