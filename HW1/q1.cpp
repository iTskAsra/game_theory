#include <iostream>

using namespace std;

int main (){
    int size = 0;
    cin >> size;
    long long total = 0;
    long int temp;
    for (int i=0; i<size; i++){
        cin >> temp;
        total += temp-1;
        if (total%2 == 0){
            cout << '2' << endl;
            total = 2;
        }else {
            cout << '1' << endl;
            total = 1;
        }
    }
    return 0;
}
