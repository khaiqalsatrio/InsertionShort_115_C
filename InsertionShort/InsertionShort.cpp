#include <iostream>
using namespace std;

int arr[20];
int n;

void input ()
{    // Procedure input
	while (true)
	{
		cout << "Masukan jumlah data pada array : ";
		cin >> n;

		if (n <= 20)
		{
