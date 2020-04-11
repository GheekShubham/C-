/***********************************************************************************
****    WHEN N = 6                                                              ****
****    1                                                                       ****
****    11                                                                      ****
****    111                                                                     ****
****    1001                                                                    ****
****    11111                                                                   ****
****    100001                                                                  ****
****FOR EVERY ODD NUMBER ROW PRINT 1, ODD NUMBER OF TIMES AND FOR EVERY EVEN    ****
****NUMBER ROW, PRINT FIRST AND LAST CHARACTER AS 1 AND REST OF MIDDLE          ****
****CHARACTERS AS 0.                                                            ****
***********************************************************************************/

#include<iostream>
using namespace std;

int main(){

	int n = 0;
	cout<<"Enter number of rows: ";
	cin>>n;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			if(i % 2 == 0){
				if(j == 1 || j == i)
					cout<<"1";
				else
					cout<<"0";
			}else{
				cout<<"1";
			}
		}
		cout<<endl;
	}
	return 0;
}	
