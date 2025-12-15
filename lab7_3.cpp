#include <iostream>
using namespace std;

char before(char x){
    if (x == 'A') {
        return 'Z';
    }
    else if (x >= 'B' && x <= 'Z') {
        return x - 1;
    }
    else {
        return '0';
    }
}

int main(){
    // Test Case
    cout << before('A') << endl;
    cout << before('B') << endl;
    cout << before('P') << endl;
    cout << before('T') << endl;
    cout << before('Z') << endl;
    cout << before('a') << endl;
    cout << before('0') << endl;
    cout << before('c') << endl;

    return 0;
}
