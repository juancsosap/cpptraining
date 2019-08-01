#include <cstdlib>
#include <iostream>

using namespace std;

class App1002 {
public:    
    static void run() {
        cout << "     Divider     " << endl;
        cout << "-----------------" << endl;
        
        int num1, num2, num3;
        
        try {

            cout << "Number 1 : ";
            cin >> num1;
            // If not integer value is provided an "Arithmetic Exception" is generated

            cout << "Number 2 : ";
            cin >> num2;
            // If not integer value is provided an "Arithmetic Exception" is generated

            if(num2 == 0) throw "Error";
            
            num3 = num1 / num2;
            // If num2 value of zero (0) is provided an "Arithmetic Exception" is generated

            cout << "-----------------" << endl;
            cout << "Result   : " << num3 << endl;

        } catch(...) { // Catch All the Exceptions
            cout << "-----------------" << endl;
            cout << "Error Generated. The Program was Interrupted" << endl;
        }
        
        
    }
};

/*
int main(int argc, char** argv) {
    App1002::run();
    return 0;
}
*/