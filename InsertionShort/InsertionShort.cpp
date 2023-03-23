#include <iostream>
using namespace std;

int arr[20];      // Membuat array dengan panjang data 20
                  // Membuat variable inputan n              
int n;

void input ()
{    // Procedure input
	while (true)
	{
		cout << "Masukan jumlah data pada array : "; // membuat inputan element array
		cin >> n;									 // Memanggil variable inputan n


		if (n <= 20)
		{   // Mebuat kondisi n tidak lebih dari 20
			break;

		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen. \n";     // Menampilkan pesan jika data
		}
    }
	cout << endl;											// Membuat jarak per baris program
	cout << "Masukan Element Array " << endl;					// Membuat tampilan data element Array 
	cout << "======================" << endl;

    
	
