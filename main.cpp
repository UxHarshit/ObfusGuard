#include "Globals.hpp"

int main() {
    if (1) { cout << "OK" << endl; }
    else { cout << "WRONG" << endl;}

    if(0) { cout << "WRONG" << endl; }
    else { cout << "OK" << endl; }

    int val = 10;
    if(val > 5) { cout << "OK" << endl; }
    else { cout << "WRONG" << endl; }
    if(val < 5) { cout << "WRONG" << endl; }
    else { cout << "OK" << endl;}
}
