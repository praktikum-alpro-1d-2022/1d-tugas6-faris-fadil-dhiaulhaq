//Buatlah program untuk menghitung konversi derajat Fahrenheit ke Celcius
//a. function overloading
//b. 3 buah function overloading dengan parameter berbeda, 1. function pertama tipe data double, 2. function kedua tipe data float, 3. function ketiga tipe data integer
//c. Rumus konversi (C= (f-32.0)*5/9)
#include <iostream>
using namespace std;
int parameter(int);
float parameter(float);
double parameter(double);

int main(){
    int suhu1;
    float suhu2;
    double suhu3;
    cout << "===== Program Konversi suhu Fahrenheit ke Celcius ====="<<endl;
    cout << "Masukkan nilai: ";
    cin >> suhu1;

    suhu2 = suhu1;
    suhu3 = suhu1;
    cout << "Hasil konversi: " << parameter(suhu1) << endl;
    cout << "Hasil konversi: " << parameter(suhu2) << endl;
    cout << "Hasil konversi: " << parameter(suhu3) << endl;
    return 0;
}

int parameter(int nilai){
 return ((nilai-32)*5/9);
}

float parameter(float nilai){
 return ((nilai-32)*5/9);
}

double parameter(double nilai){
 return ((nilai-32)*5/9);
}