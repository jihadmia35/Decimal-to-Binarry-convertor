#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> binary;

    while(n != 0){
        binary.push_back(n % 2);
        n /= 2;
    }

    for(auto it = binary.rbegin(); it != binary.rend(); it++){
        cout << *it;
    }

    return 0;
}