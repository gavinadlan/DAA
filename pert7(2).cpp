file main.cc
#include <iostream>
#include "kalkulator.cc"
using namespace std;

int main(){
    kalkulator l;
    int pilih;
    char pil;
    
    menu :
        cout<<"0. Exit"<<endl;
        cout<<"1. Tambah"<<endl;
        cout<<"Pilihan"<<endl;
        cin>>pilih;
        
        switch(pilih){
            case 0:
                goto keluar;
                break;
            case 1:
                k.input();
                cout<< "Hasil : " << k.tambah()<<endl;
                break;
            default:
                cout<<"pilihan salah"<<endl;
                break;
        }
        cout<<"kembali ke menu (y/n) : ";
        cin>>pil;
        if ((pil=='Y') || (pil=='y')){
            goto menu;
        }else if ((pil=='N') ||(pil=='n')){
            goto keluar;
        }
    keluar :
        cout<<"thanks"<<endl;
    return 0;
}
