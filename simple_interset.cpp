#include<iostream>
using namespace std;
int main()
{
    // data structure definitioin 
    int principle;
    int time;
    int rate;
    int simpInt;
    int total;
    // read all the data required to  compute simple interest
    cout << "Enter principle amount";
    cin >> principle;
    cout <<"enter time " ;
    cin >> time;
    cout << "enter rate";
    cin >> rate;
    // caclute 
    simpInt = ( principle*time*rate)/100;
    // total;
    total = simpInt+ principle;

    cout << " The total amount is  "<< total<< endl;  
}
