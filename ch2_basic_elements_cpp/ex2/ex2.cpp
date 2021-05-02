// Write a program that produces the following output:
// CCCCCCCCC       ++             ++
// CC              ++             ++
// CC        ++++++++++++++ +++++++++++++++ 
// CC        ++++++++++++++ +++++++++++++++ 
// CC              ++             ++
// CCCCCCCCC       ++             ++

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    for(int i=0; i<6; i++){
        if (i == 0 || i == 5){
            cout << "CCCCCCCCC\t\b++\t\t\b\b++";
        }
        else if (i == 1 || i == 4){
            cout << "CC\t\t\b++\t\t\b\b++";
        }
        else if (i == 2 || i == 3){
            cout << "CC\t ++++++++++++++ +++++++++++++++";
        }
        cout << endl;
    }
    
    return 0;
}
