#include <iostream>
using namespace std;

int main(){
    double a, b;
    int slc;

    do{
        

    cout<<"Selamat Datang di Kalkulator Sederhana"<<endl;
    cout<<"--------------------------------------"<<endl;

    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Keluar"<<endl;
    cout<<"Silahkan pilih menu"<<endl;
    cin>>slc;

    switch (slc)
    {
    case 1:
        cout<<"Masukkan angka pertama: "<<endl;
        cin>>a;
        cout<<"Masukkan angka kedua: "<<endl;
        cin>>b;
        cout<<"Hasil penjumlahan adalah: "<< a + b <<endl;
        break;

    case 2:
        cout<<"Masukkan angka pertama: "<<endl;
        cin>>a;
        cout<<"Masukkan angka kedua: "<<endl;
        cin>>b;
        cout<<"Hasil pengurangan adalah: "<< a - b <<endl;
        break;

    case 3: 
        cout<<"Masukkan angka pertama: "<<endl;
        cin>>a;
        cout<<"Masukkan angka kedua: "<<endl;
        cin>>b;
        cout<<"Hasil perkalian adalah: "<< a * b <<endl;
        break;

    case 4:
        cout<<"Masukkan angka pertama: "<<endl;
        cin>>a;
        cout<<"Masukkan angka kedua: "<<endl;
        cin>>b;
        if (b != 0) {
                    cout << "Hasil pembagian adalah: " << a / b << endl;
                } else {
                    cout << "Pembagian oleh nol tidak diperbolehkan!" << endl;
                }
        break;
    
    case 5: 
        cout<<"Terima Kasih sudah menggunakan program kami!"<<endl;
        return 0;
        break;

    default:
        cout<<"Pilihan tidak valid!"<<endl;
        break;
    }
    cout<<endl;
    

    }while(true);

    return 0;
}