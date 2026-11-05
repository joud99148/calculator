#include <iostream>
using namespace std;

int main() {
    cout << "enter the first number:" << endl;
    float fn;
    cin >> fn;
    cout << "enter the second number:" << endl;
    float sn;
    cin >> sn;
    cout<< "enter the symbol:" << endl;
    string symbol;
    cin >> symbol;
    if (symbol == "+") {
        cout << "the result is: " << fn + sn << endl;
    } else if (symbol == "-"){
            cout << "the result is: " << fn - sn << endl;
    } else if (symbol == "*"){
        cout << "the result is: " << fn * sn << endl;
    } else if (symbol == "/") {
       if(sn == 0) {cout << "worng input" << endl; }
       else {cout << "the result is: " << fn / sn << endl;}
    }
    else {cout << "wrong inputs" << endl;
        }
        int modulo;
        int a , b ;
        cout << "enter two numbers :" << endl;
        cin >> a ;
        cin >> b ;
        modulo = a % b;
        cout << modulo ;
    return 0;
}
// testing my pull and push