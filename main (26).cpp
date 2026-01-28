#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;

    while(row <= n){

        // spaces
        int space = n - row;
        while(space > 0){
            cout << " ";
            space--;
        }

        // first triangle
        int j = 1;
        while(j <= row){
            cout << j;
            j++;
        }

        // second triangle (reverse)
        int start = row - 1;
        while(start >= 1){
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }
}