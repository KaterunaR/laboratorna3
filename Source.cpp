#include <iostream>
#include "library.h"
using namespace std;

int main() {
    const int array = 3;
    Library mylibrary[array] =
    {
        Library("Harry Potter", "J.K. Rowling", 2000, "Publisher1", 10),
        Library("The Murder on the Links", "Agatha Christie", 2002, "Publisher1", 8),
        Library("The Secret of Chimneys ", "Agatha Christie", 2004, "Publisher1", 5)
    };

    // Output information about each book in the library
    for (int i = 0; i < array; i++) {
        cout << "Book " << (i + 1) << ":\n";
        cout << mylibrary[i] << endl;
    }

    // Demonstrate changing the count 
    mylibrary[0] = mylibrary[0] + 5;
    mylibrary[2] = mylibrary[2] - 3;

    // Output updated information
    cout << "Updated Information:\n";
    for (int i = 0; i < array; i++) {
        cout << "Book " << (i + 1) << ":\n";
        cout << mylibrary[i] << endl;
    }
   

    return 0;
}