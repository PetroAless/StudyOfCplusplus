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
void test(int *a,int *b){
    cout << "a,b:" << *a << "," << *b << endl;
    *a = 10;*b = 20;
}

int main(int argc, char *argv[]){
    //pointer();
    int a=10;
    int *b=&a;
    int *x = new int(10);
    printf("address of x:%d, value *x:%d\n",x,*x);
    printf("address of b:%d, value *b=&a:%d\n",b,*b);
    //cout << "\nenter anything to end:\n";getch();
    return 0;
}