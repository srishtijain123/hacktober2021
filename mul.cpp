#include<iostream>
using namespace std;

int mul(int m, int n){
if(m==0 || n==0){
return 0;
}
else{
return(m+mul(m,n-1));
}
}

int main(){
int num1,num2;
cout<<"Enter the numbers to be multiplied : ";
cin>>num1>>num2;
cout<<"Result is : "<<mul(num1,num2);
return 0;
}
