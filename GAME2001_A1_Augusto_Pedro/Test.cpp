#include <iostream>
// #include "UnorderedArray.h"
#include "OrderedArray.h"
#include "UnorderedArray.h"

using namespace std;

int main()
{
	UnorderedArray<int> array(3);

	array.push(3);
	array.push(53);
	array.push(83);
	array.push(23); // <-- Should expand here			// 3 23 82 
	array.push(82); // <-- Should expand here

	array[2] = 112;

	//array.pop();
	//array.remove(2);

	cout << "Ordered array contents: ";

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}

	cout << endl << endl;

	return 0;
}