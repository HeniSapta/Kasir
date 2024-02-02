#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int jumlah_A,jumlah_B, jumlah_C, jumlah_D, jumlah_E, barang, i, n;
    char kode;
    int a=16000, b=20000, c=15000, d=13000,e=8000 ;

    cout << "Masukkan jumlah pesanan = ";
    cin >> n ;



    for(i=1; i<=n; i++){
        cout << "Masukkan kode menu = " << endl;
        cin>>kode;

    if (kode=='A'){
        cout<<"Salted Caramel Coffee "<<endl;
        cout<<"Harga = Rp16.000"<<endl;

        cout << "Masukkan jumlah barang = ";
        cin>> jumlah_A;

    } else if (kode=='B'){
         cout<<"Butterscotch Coffee "<<endl;
         cout<<"Harga = Rp20.000"<<endl;

         cout << "Masukkan jumlah barang = ";
         cin>> jumlah_B;

    } else if (kode=='C'){
         cout<<"Palm Sugar Coffee "<<endl;
         cout<<"Harga = Rp15.000"<<endl;

         cout << "Masukkan jumlah barang = ";
         cin>> jumlah_C;

    } else if (kode=='D'){
         cout<<"Latte Coffee "<<endl;
         cout<<"Harga = Rp13.000"<<endl;

         cout << "Masukkan jumlah barang = ";
         cin>> jumlah_D;

    } else if (kode=='E'){
         cout<<"Americano "<<endl;
         cout<<"Harga = Rp8.000"<<endl;

         cout << "Masukkan jumlah barang = ";
         cin>> jumlah_E;
    }

    }
    cout<<endl;
    cout<<"Total Harga = Rp"<< (jumlah_A * a) + (jumlah_B * b) + (jumlah_C * c) + (jumlah_D * d) + (jumlah_E * e)<<endl;

}

