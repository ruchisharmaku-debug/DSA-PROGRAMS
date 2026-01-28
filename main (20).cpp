#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n;   // number of rows
    
    char ch = 'A';
    int row =1;
    
    while(row<= n){
        int col = 1;
        
        while(col<=4){
            cout<<ch;
            ch++;
            col++;
        }
        cout<< endl;
        row++;
    }
}