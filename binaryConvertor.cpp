#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int array[100];
    int count = 0;

    while(n > 0){
        array[count++] = n % 2;
        n /= 2;
    }

    for(int i = count - 1; i >= 0; i--){
        cout << array[i];
    }

    return 0;
}