#include<iostream>
using namespace std;
int main(){
    int N;
    int Even=0;
    int Odd=0;
    
    do{
    cout << "Enter an integer: ";
    cin >> N ;
    if (N%2 == 0 && N != 0){
        Even++;
    }if (N%2 != 0 && N!=0){
        Odd++;
    }
    }
    while(N != 0);
    cout <<"#Even numbers = "<<Even <<endl;
    cout << "#Odd numbers = "<<Odd <<endl;
    return 0;
}
