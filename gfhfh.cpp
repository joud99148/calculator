#include <iostream>
#include <vector>
using namespace std;

int sum(int a, int b, int c) {
    return a + b + c;
}
int average(int x, int y, int z) {
    return sum(x , y , z) * 100 / 300;
}
int main() {
    int v , m , n ;
    cout << "enter your degrees out of 100" << endl;
    cin >> v >> m >> n;
    int avg = average(v , m , n);
    if (avg >= 50 ){
        cout << "you passed the exam" << endl;
    }   else {
            cout << "you failed the exam" << endl; 
        }
        return 0;

}