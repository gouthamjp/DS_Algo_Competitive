//question  https://www.hackerrank.com/contests/ieeextreme-challenges/challenges/digit-fun
#include <bits/stdc++.h>
using namespace std;

int digit(string s) {
    if(s == "1") return 1;
    if(s == "0") return 2;
    string a = to_string(s.length());
    return 1 + digit(a);
}

int main() {

    while(true) {
        string s;
        cin >> s;
        if(s == "END") break;
        cout << digit(s);
        cout << endl;
    }

}