#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int tambah(int x, int& hasil){
    int n;

    cout<<"\nMasukkan berapa nilai yang ingin ditambah:"<<endl;
    cin>>n;

    int a[n];

    cout<<"Masukkan nilai"<<endl;
    for (auto i=0; i<n; i++){
        cout<<"a["<<i+1<<"] : ";
        cin>>a[i];
        hasil += a[i];
    }
    return hasil;
}

int kurang(int x, int& hasil){
    int n, m;

    cout<<"\nMasukkan berapa nilai yang ingin dikurang: (Bilangan awal mempengaruhi hasil)"<<endl;
    cin>>n;

    int a[n];

    cout<<"\nMasukkan nilai pertama: "<<endl;
    cin>>hasil;
    cout<<"\n";
    
    cout<<"Masukkan nilai"<<endl;
    for (auto i=0; i<n; i++){
        cout<<"a["<<i+1<<"] : ";
        cin>>a[i];
        hasil = hasil - a[i];
    }
    return hasil;
}

int kali(int x, int& hasil){
    int n;

    cout<<"\nMasukkan berapa nilai yang ingin dikali:"<<endl;
    cin>>n;

    int a[n];
    hasil = 1;

    cout<<"Masukkan nilai"<<endl;
    for (auto i=0; i<n; i++){
        cout<<"a["<<i+1<<"] : ";
        cin>>a[i];
        hasil = hasil * a[i];
    }
    return hasil;
}

int bagi(int x, int& hasil){
    int n;

    cout<<"\nMasukkan berapa nilai yang ingin dibagi:"<<endl;
    cin>>n;

    int a[n];

    cout<<"\nMasukkan nilai pertama: "<<endl;
    cin>>hasil;
    cout<<"\n";

    cout<<"Masukkan nilai"<<endl;
    for (auto i=0; i<n; i++){
        cout<<"a["<<i+1<<"] : ";
        cin>>a[i];
        hasil = hasil / a[i];
    }
    return hasil;
}

int main(){
    int x, m, hasil=0;

    do{
        cout<<"\nMasukkan Mode: \n1. Pertambahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian\n"<<endl;
        cin>>m;

        if (m == 1){
            tambah(x, hasil);
        } else if (m == 2){
            kurang(x, hasil);
        } else if (m == 3){
            kali(x, hasil);
        } else if (m == 4){
            bagi(x, hasil);
        }

        cout<<"\nHasilnya adalah "<<hasil<<endl;
    } while (m =! 1||2||3||4);

    return 0;
}