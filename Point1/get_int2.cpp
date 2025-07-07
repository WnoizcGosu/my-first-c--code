#include<iostream>
using namespace std;

int main() {
    int num1,num2 ;
    cout << "Please input num position 1 : " ;
    cin >> num1 ;
    cout << "Please input num position 2 : " ;
    cin >> num2 ;
    
    cout << "Sum of Two Num :  " << num1 + num2 << endl ;
    cout << "Difference of Two Num : " << num1 - num2 << endl ;
    cout << "Multiply of Two Num : " << num1 * num2 << endl ;
    cout << "Divide of Two Num : " << (float) num1 / num2 << endl ;

    return 0;
}