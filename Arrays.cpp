#include <iostream>
using namespace std;

int main(){
    string s;
    int count = 0;
    int i = 0;
    getline(cin, s);
    while(s[i] !='\0'){
        count++;
        i++;
    }
    cout << count;
    return 0;
}