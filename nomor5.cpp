#include <iostream>

using namespace std;

int main(){
	float weight, underweight, normal, overweight;
    int height;
    
    cout << "Silahkan Masukkan Tinggi Badan Anda dalam cm : " << endl;
    cin >> height;

	cout << "Silahkan Masukkan Berat badan Anda dalam kg : " << endl;
    cin >> weight;
    
    if (weight<height/2.5)
    cout << "Result : Underweight" << endl;
    
    else if (height/2.5 <= weight <= height/2.3)
    cout << "Result : Normal" << endl;
    
}
