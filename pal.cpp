#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int rev =0;
    int dup = n;
    while(n>0){
        int ld = n%10;
        rev = (rev * 10) + ld;
        n = n/10;
    }
    if(dup == rev){
        cout<<"Number is palindrome"<<endl;
    }
    else{
        cout<<"Number is not palindrome"<<endl;
    }
    return 0;
}