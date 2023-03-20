#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <array>
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
int getAbsSum(int arr[],int n) {
    
    int sum=0;
    
    for(int i=0;i<n;i++,*arr++){
        sum+=abs(*arr);
    }

	return sum;
}
int main(int argc, char *argv[]){
    //pointer();
    int arr[] = {1,2,1,-12,0,90,12};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    
    
    cout << getAbsSum(arr,arrSize);

    
    
    //cout << "\nenter anything to end:\n";getch();
    return 0;
}