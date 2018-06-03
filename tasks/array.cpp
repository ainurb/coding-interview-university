#include <iostream>
// #include <conio>
#include <stddef.h>
#include <stdio.h>
using namespace std;

int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = rand()%10;
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(i+j==2) {
                cout<<arr[i][j]<<' ';
            }
        }
    }

    
     
}