#include <iostream>
using namespace std;

void tambah(int a, int b){
    cout << "Hasil tambah: " << a + b << endl;
    
}

void kurang(int a, int b){
    cout << "Hasil kurang: " << a - b << endl;
}

void kali(int a, int b){
    cout << "Hasil kali: " << a * b << endl;
}

void bagi(int a, int b){
    cout << "Hasil bagi: " << a / b << endl;
}
    


int main(){
    int x, y;
    cout << "Masukkan angka: " << endl;  
    cin >> x >> y;

    bagi(x, y);
    kali(x, y);
    kurang(x, y);
    tambah(x, y);
    
    return 0;
}
