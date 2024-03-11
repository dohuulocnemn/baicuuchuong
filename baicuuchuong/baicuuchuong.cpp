#include <cstdlib> 
#include <iostream> 
#include<iomanip> 
#include<cmath> 

using namespace std;

void bangnhan() {
    int i, j;
    for (i = 2; i < 10; i++) {
        for (j = 1; j < 10; j++)
            cout << j << "*" << i << "=" << j * i << "\t";
        cout << "\n";
    }
}
int main(int argc, char* argv[])
{
    bangnhan();

    return 0;
}
