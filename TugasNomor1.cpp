//Buat program hitung gaji harian
//a. Gaji 7500/jam
//b. Lebih dari 8 jam/hari maka lebihnya dihitung lembur 1.5 dari gaji pokok
//c. Kerja 9 jam/hari atau lebih dapat uang makan Rp. 10000
//d. Kerja 10 jam/hari atau lebih dapat uang transport lembur Rp. 13000
//Pakai 5 fungsi: main(), pokok(), lembur(), makan(), dan transport()
//Input: NIP, Nama, Jumlah jam kerja
//Output: NIP, Nama, Gaji Pokok, Lembur, Uang Makan, Transport
#include <iostream>
using namespace std;
int pokok(int);
int lembur(int);
int makan(int);
int transport(int);


int main(){
    char nip[18];
    string nama;
    int jam;
    
    cout<<"===== Program Gaji Harian PT. XYZ ====="<<endl;
    cout<<"Masukkan Nama: ";
    getline (cin, nama);
    
    cout<<"Masukkan NIP: ";
    cin>>nip;
    
    cout<<"Masukkan Jumlah jam kerja: ";
    cin>>jam;

    cout<<"NIP = "<<nip<<endl;
    cout<<"Nama = "<<nama<<endl;

    cout<<"Gaji Pokok: "<<pokok(jam)<<endl;
    cout<<"Lembur: "<<lembur(jam)<<endl;
    cout<<"Uang Makan: "<<makan(jam)<<endl;
    cout<<"Transport: "<<transport(jam)<<endl;
}

int pokok(int jam){
    if (jam<=8){
        return (jam*7500);
    }
    else{
        return (60000);
    }
}

int lembur(int jam){
    int lembur, gaji;
    if (jam>8){
        lembur = (((jam-8)*7500)*1.5);
        return lembur;
    }
    else{
        return (0);
    }
}

int makan(int jam){
    if (jam>=9){
        return (10000);
    }
    else{
        return (0);
    }
}


int transport(int jam){
    if (jam>=10){
        return (13000);
    }
    else{
        return (0);
    }
}