#include <iostream>

using namespace std;   // Using standard namespace library

int apple = 100;  // This is Global variable.
int price(){
    return (apple*20);
}
namespace Miki {     // New namespace is defined by name Miki.
    int apple = 10;  // This is also global variable but inside Miki namespace.
    int price() {
        return (apple*20);
    }
}

int main()
{
    int choice;
    cout << "Naruto wants to buy 20 Apples" << endl;
    cout << "1. Buy from Global market." << endl;
    cout << "2. Buy from Miki market." << endl;
    cout << "Enter your choice : ";cin  >> choice ;cout << "\n";
    switch(choice) {
        case 1: cout << "Price :" << price() << endl;         // Global function is used.
                break;
        case 2: cout << "Price :" << Miki::price() << endl;   // Namespace Miki is Used.
                break;
        default : cout << "Wrong Choice try again" << endl;
                break;
    }

    return 0;
}
