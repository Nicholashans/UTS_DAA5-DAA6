#include<iostream>
using namespace std;


int maksimal = 10;
string arrayhp[10];
int top = 0;

bool isfull(){
    if (top==maksimal){
        return true;
    } else {
        return false;
    }
}

bool iskosong(){
    if (top==0){
        return true;
    } else {
        return false;
    }
}

void push(string data){
    if(top>=maksimal){
        cout<<"Data penuh"<<endl;
    } else{
        arrayhp[top]=data;
        top++;
    }
}

void hapus(){
    if(iskosong()==true){
        cout<<"Data Kosong"<<endl;
    } else {
        arrayhp[top-1] = "";
    }
}

void tampil(){
    cout<<"Daftar Hape ="<<endl;
    for(int i = maksimal -1 ; i>=0; i--){
        if(arrayhp[i] != ""){
            cout<<"Data :"<<arrayhp[i]<<endl;
        }
    }
    cout<<endl;
    cout<<endl;
}



int main(){
    push("Samsung Galaxy A51");
    push("iPhone 14 Pro");
    push("iPhone 14 Pro Max");
    push("Samsung Galaxy A71");
    push("Samsung Galaxy A31");
    push("iPhone 12 Pro");
    push("iPhone 13 Pro Max");
    push("Samsung Galaxy S22");
    hapus();
    tampil();

}