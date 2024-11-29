#include<iostream>
using namespace std;

int main(){
    int x=1;
    int m = 0;
    int n= 0;
    
    while(x!=0)
    {
    cout << "Enter an integer: ";
    cin >> x;
    if(x%2==0){
        m+=1;
    }
    else{
        n+=1;
    }
    
    }
    
    cout << "#Even numbers = "<< m-1 << "\n";
    cout << "#Odd numbers = "<< n;
    
    return 0;
}