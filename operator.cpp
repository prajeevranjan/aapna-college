#include <iostream>
using namespace std;

int main(){
    int a = 100, b = 5;
    cout <<a + b << endl;
    cout <<a - b << endl;
    cout <<a * b << endl;
    cout <<a / b << endl;
    cout <<a % b << endl;

    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    cout << (10 < (a && b)) << endl;
    cout << (10 < a || 10 < b) << endl;
    cout << !(10 < a ) << endl;

    return 0;
}