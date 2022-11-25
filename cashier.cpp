#include<iostream>
using namespace std;

// Declare a structure named "car"
    struct phone {
    string brand;
    string model;
    int stock;
    };

int main()
{
    int pil,harga,qty;
    float diskon;
    int total;

    phone myphone1;
    myphone1.brand = "Samsung";
    myphone1.model = "Galaxy A13";
    myphone1.stock = 20;

    phone myphone2;
    myphone2.brand = "Samsung";
    myphone2.model = "Galaxy A33";
    myphone2.stock = 50;

    phone myphone3;
    myphone3.brand = "Samsung";
    myphone3.model = "Galaxy A53";
    myphone3.stock = 60;

    phone myphone4;
    myphone4.brand = "Samsung";
    myphone4.model = "Galaxy A73";
    myphone4.stock = 30;

    phone myphone5;
    myphone5.brand = "iPhone";
    myphone5.model = "11";
    myphone5.stock = 80;

    phone myphone6;
    myphone6.brand = "iPhone";
    myphone6.model = "11 Pro";
    myphone6.stock = 69;

    phone myphone7;
    myphone7.brand = "iPhone";
    myphone7.model = "12";
    myphone7.stock = 75;

    phone myphone8;
    myphone8.brand = "iPhone";
    myphone8.model = "12 Pro Max";
    myphone8.stock = 53;

    phone myphone9;
    myphone9.brand = "iPhone";
    myphone9.model = "13 Pro Max";
    myphone9.stock = 47;

    phone myphone10;
    myphone10.brand = "iPhone";
    myphone10.model = "14 pro Max";
    myphone10.stock = 100;


    
    // Print the structure members
    cout<<"SELAMAT DATANG DI PROGRAM KASIR \n";
    cout<<"================================ \n";

    cout<<"List Menu dari Kami \n";
    cout << "1. ";
    cout << myphone1.brand << " " << myphone1.model << "  \nStock = " << myphone1.stock << "\n";
    cout << "2. ";
    cout << myphone2.brand << " " << myphone2.model << "  \nStock = " << myphone2.stock << "\n";
    cout << "3. ";
    cout << myphone3.brand << " " << myphone3.model << "  \nStock = " << myphone3.stock << "\n";
    cout << "4. ";
    cout << myphone4.brand << " " << myphone4.model << "  \nStock = " << myphone4.stock << "\n";
    cout << "5. ";
    cout << myphone5.brand << " " << myphone5.model << "  \nStock = " << myphone5.stock << "\n";
    cout << "6. ";
    cout << myphone6.brand << " " << myphone6.model << "  \nStock = " << myphone6.stock << "\n";
    cout << "7. ";
    cout << myphone7.brand << " " << myphone7.model << "  \nStock = " << myphone7.stock << "\n";
    cout << "8. ";
    cout << myphone8.brand << " " << myphone8.model << "  \nStock = " << myphone8.stock << "\n";
    cout << "9. ";
    cout << myphone9.brand << " " << myphone9.model << "  \nStock = " << myphone9.stock << "\n";
    cout << "10. ";
    cout << myphone10.brand << " " << myphone10.model << "  \nStock = " << myphone10.stock << "\n";
    cout<<"Mana yang mau Anda Beli? [1-10]";
    cin>>pil;

    if (pil==1){
        harga=2000000;
    } else if (pil==2){
        harga=3500000;
    } else if (pil==3){
        harga=5500000;
    } else if (pil==4){
        harga=6900000;
    } else if (pil==5){
        harga=13000000;
    } else if (pil==6){
        harga=14000000;
    } else if (pil==7){
        harga=13200000;
    } else if (pil==8){
        harga=17500000;
    } else if (pil==9){
        harga=18500000;
    } else if (pil==10){
        harga=22500000;
    } 
    
    cout<<"Mau beli berapa banyak? ";
    cin>>qty;

    total = harga*qty;
    cout<<"TOTAL = "<<total;

    // cout<<"SELAMAT DATANG DI PROGRAM KASIR \n";
    // cout<<"================================ \n";

    // cout<<"List Menu dari Kami \n";
    // cout<<"1. Samsung A02 core \n";
    // cout<<"2. Samsung A12 \n";
    // cout<<"3. Samsung A32 \n";
    // cout<<"4. Samsung A52 \n";
    // cout<<"5. Samsung A72 \n";
    // cout<<"6. Samsung A72 \n";
    // cout<<"7. Iphone 14 \n";
    // cout<<"Mana yang mau Anda Beli? [1-7]";

    
    return 0;
}