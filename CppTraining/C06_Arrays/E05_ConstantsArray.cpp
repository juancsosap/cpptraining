#include <cstdlib>
#include <iostream>

using namespace std;

void app0605() {
    cout << "       Primes       " << endl;
    cout << "--------------------" << endl;
    
    const int primes[] = {1, 2, 3, 5, 7, 13, 17};
    
    int size = sizeof(primes) / sizeof(*primes);
    
    for(int i = 0; i < size; i++) {
        cout << "Number [" << i << "] : " << primes[i] << endl;
        // primes[i]++; // It generate a compilation error
    }
}

/*
int main(int argc, char** argv) {
    app0605();
    return 0;
}
*/