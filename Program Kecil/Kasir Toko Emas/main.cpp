#include <bits/stdc++.h>
#include <math.h>

using namespace std;

class barang {
private :
    int jns, brg; 

public : 
    void emas(int hrg){
        cout<<"bagaimana"<<endl;
    }
};


double cn(int jns, int& hrg){
    hrg = jns * 5;
    return  hrg;
}

int hrg_emas_pg(){

}



int main(){
    int menu, brg, jne, mdl, hrg_emas_pg, em, et, jmlh_beli;
    int cn_e, kl_e, gl_e, at_e, gl_ne;

    cout<<endl;
    cout<<"======================="<<endl;
    cout<<"PROGRAM KASIR TOKO EMAS"<<endl;
    cout<<"======================="<<endl;
    cout<<endl<<endl;

    cout<<"Pilih jenis emas : \n1. Emas Muda \n2. Emas Tua"<<endl;
    cin>>jne;
    cout<<"Pilih menu: \n1. cincin \n2. kalung \n3. gelang \n4. anting \n"<<endl;
    cin>>menu;
    

    if (menu == 1){
        int jns, hrg;
        cout<<"1. EM / 2. ET"<<endl;
        cin>>jns;
        cn(jns, hrg);
        cout<<hrg;
    }


}