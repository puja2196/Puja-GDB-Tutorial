#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int i = 10;
    int x = i++ + 1;
    cout << "x = " << x << "\ni = " << i <<"\n";
    return 0;
}
