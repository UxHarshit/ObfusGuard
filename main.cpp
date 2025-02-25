#include "Globals.hpp"

int main() {
    int val = 10;
    if(val > 5) { cout << "OK" << endl; }
    else { cout << "WRONG" << endl; }
    if(val < 5) { cout << "WRONG" << endl; }
    else { cout << "OK" << endl;}

    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
}
