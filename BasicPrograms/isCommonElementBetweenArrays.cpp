#include<iostream>
using namespace std;

int isCommon(int a[], int b[], int m, int n){
    int flag = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i] == b[j]){
                flag = 1;
                return flag;
            }
        }
    }
    return flag;
}

int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    int array1Size = 5;

    int array2[] = {6, 7, 8, 9, 5};
    int array2Size = 5;

    int flag =  isCommon(array1, array2, array1Size, array2Size);

    if(flag == 1){
        cout<<"There is common element between arrays..."<<endl;
    }else{
        cout<<"There isn't any common element between arrays..."<<endl;
    }
    return 0;
}
