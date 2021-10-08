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
	array.push(87); //<-- Duplicated value
	array.push(15);
	array.push(15);
	array.push(55);
	array.push(11);
	array.push(18);
	array.push(1);
	array.push(19);
	array.push(56);
	array.push(77);

	
	cout << "Ordered array contents: ";

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}

	cout << endl << endl;
	cout << array.GetSize() << endl;
	cout << array.GetMaxSize() << endl;
	

	return 0;
}