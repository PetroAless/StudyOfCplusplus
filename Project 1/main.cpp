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
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int sum(int a,int b){
    return a+b;
}
int main(int argc, char *argv[]){
    //pointer();
    int *arr=new int[8];
    for(int i=0;i<8;i++){
        arr[i]=i+(rand()%8)+2;
        cout << "arr["<<i<<"]:" << arr[i] << endl;
    }
    
    
    for(int i=0;i<sizeof(arr);*arr++,i++){
        printf("*arr:%d\n",*arr);
    }
    
    //cout << "\nenter anything to end:\n";getch();
    return 0;
}