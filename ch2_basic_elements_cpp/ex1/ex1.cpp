#include <iostream>
#include <string>

using namespace std;

void starPrinter (){
    for(int i=0; i<42; i++){
        cout << "*";
    }
    cout << endl;
}

int main() {

    starPrinter();
    
    cout << "*\t Programming Assignment 1\t *" << endl;
    cout << "*\t  Computer Programming I\t *" << endl;
    cout << "*\t  Author: Claudia Alonso\t *" << endl;
    cout << "*\t Due Date: Sunday, 2nd May\t *" << endl;

    starPrinter();

    return 0;
}
