#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
using namespace std;

void pointer(){
    int x[] = {4,3,2,1,5,6,7,8};
    for(int *i=x,j=0;j<8;i++,j++){
        cout << j << " element of array:" << *i << endl;
    }
}

int main(int argc, char *argv[]){
    //pointer();
    



    
    //cout << "\nenter anything to end:\n";getch();
    return 0;
}