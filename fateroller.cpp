#include <iostream>
using namespace std;

int x = 4;

void addup(){
    srand(time(0));
    for(int i = 0; i < x; ++i){
        int randnum = rand() % 6 + 1;
        if (randnum == 1 || randnum == 2){
            cout << "-";
        } else if (randnum == 3 || randnum == 4){
            cout << "0";
        } else if (randnum == 5 || randnum == 6){
            cout << "+";
        } else {
            cout << "panic!! rolling error!!";
        }
    }
}

int main(){
    addup();
    return 0; 
}