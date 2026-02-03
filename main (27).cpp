#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        // left numbers
        int num = 1;
        while(num <= n - i + 1){
            cout <<num;
            num++;
        }
        //stars
        int star = 1;
        while(star<= 2*(i-1)){
            cout << "*";
            star++;
        }
        // right numbers (reverse)
        int start = n - i+1;
        while(start>= 1 ){
            cout<<start;
            start--;
        }
        cout << endl;
        i++;
    }
}