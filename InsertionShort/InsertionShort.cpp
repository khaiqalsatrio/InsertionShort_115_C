#include <iostream>
using namespace std;

int arr[20];      // Membuat array dengan panjang data 20
                  // Membuat variable inputan n              
int n;

void input()
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
	cout << endl;												// Membuat jarak per baris program
	cout << "========================" << endl;						// Membuat tampilan data element Array 
	cout << "Masukan Element Array " << endl;
	cout << "========================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "data ke-n" << (i + 1) << ": ";
		cin >> arr[i];
	}
}
// procedure insertionshort
void insertionshort()
}
int temp//membuat variable daya temporer atau penyimpanan sementara
int j; // membuat variable j sebagai panda

for (int i = 1; i < n; i++) // membuat looping dengan i di mulai dari 1 hingga n-1
{
	temp = arr[i];
	j = i - 1;

	while (j >= 0 && arr[j] > temp)
	{
		arr[j + 1] = arr[j];
		j--;
    }

	arr[j + 1] temp;

	cout << endl;
	cout << 

    
	
