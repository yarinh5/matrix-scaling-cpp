#include <iostream>
using namespace std;



int main() {
    // Write C++ code here
    int a[2][2] = {{1,2},{3,4}};
    int b[4][4] ={{0,0,0,0},{0,0,0,0}};

    for (int i = 0; i < 2; i++) {
       for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
       }
       cout <<"\n";
    }
    cout <<"\n";
    
    for (int i = 0; i < 4; i++) {
       for (int j = 0; j < 4; j++) {
            b[i][j] = a[i/2][j/2];
       }
    }
    
    for (int i = 0; i < 4; i++) {
       for (int j = 0; j < 4; j++) {
            cout << b[i][j] << " ";
       }
       cout <<"\n";
    }
    

    return 0;
}
