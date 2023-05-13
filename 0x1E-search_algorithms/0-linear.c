#include <iostream>
using namespace std;

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int array[], int size, int searchvalue)
{
	for (i = 0; i < size; i++)
	{
		if (searchvalue == array[i])
		{
			return i;
		}
	}
}
