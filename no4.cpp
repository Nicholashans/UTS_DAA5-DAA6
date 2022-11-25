#include<iostream>
using namespace std;

struct identitas{
    string nama;
    int nim;
    char kom;
};

void ganti(identitas get[],int hasil){
int i,j;
    for (i = 0; i < hasil-1; i++){
        for (j = 0; j < hasil-1; j++){
            if (get[j].nim > get[j+1].nim) {
            swap(get[j].nama,get[j+1].nama);
            swap(get[j].nim,get[j+1].nim);
            swap(get[j].kom,get[j+1].kom);
            }  
        }
    }
    
}


int main(){
    int n;
    cout<<"PROGRAM MENGURUTKAN DATA MAHASISWA \n";
    cout<<"==================================== \n";
    cout<<"Banyak data yang ingin di masukkan = ";
    cin>>n;

    identitas siswa[n];
    for ( int i = 1; i <= n; i++){
        cout<<"Mahasiswa ke-"<<i;
        cout<<endl;
        cout<<"Masukkan Nama Siswa";
        cin.ignore();
        getline(cin,siswa[i-1].nama);
        cout<<endl;
        cout<<"Masukkan NIM siswa : ";
        cin>>siswa[i-1].nim;
        cout<<endl;
        cout<<"Masukkan Kom : ";
        cin>> siswa[i-1].kom;
    }
    
    ganti(siswa,n);

    cout<<endl;
    cout<<"Hasil Sorting";
    cout<<endl;
    cout<<"======================";
    for  (int i = 1; i <= n; i++){
        cout<<"Mahasiswa Ke-"<<i;
        cout<<endl;
        cout<<"Nama : "<<siswa[i-1].nama;
        cout<<endl;
        cout<<"NIM : "<<siswa[i-1].nim;
        cout<<endl;
        cout<<"Kom : "<<siswa[i-1].kom;
        cout<<endl;
    }
    
}