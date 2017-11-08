#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int    Input;
	double Width, 
		   Base, 
		   Height,
		   Area;
	cout << "Menghitung Luas\n";
    cout << "    1. P\n";
    cout << "    2. S\n";
    cout << "    3. Keluar\n\n";
    cin  >> Input;
    switch(Input)
    {
    	case 1 : cout << "Masukkan tinggi Persegi Panjang: ";
    			 cin  >> Height;
    	         cout << "Masukkan lebar Persegi Panjang: ";
    	         cin  >> Width;
    	         Area = Height * Width;
    	         cout << "Luas Persegi Panjang Adalah " << Area << endl;
    	         break;

	}
}
