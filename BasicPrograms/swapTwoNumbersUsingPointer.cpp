#include<iostream>
using namespace std;

void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int num1 = 0, num2 = 0;
    
    cout<<"Enter two numbers, you want to swap: "<<endl;
    cin>>num1>>num2;

    swap(&num1, &num2);

    cout<<"Number 1: "<<num1<<endl;
    cout<<"Number 2: "<<num2<<endl;
    return 0;
}
