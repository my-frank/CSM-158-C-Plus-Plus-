#include <iostream>
using namespace std;
int main()
{
    int even =0, sum =0,avg, i;
    int n;
    cout << "input the number of even numbers you want to print: ";
    cin>>n;
 for (i=0; i<=n; i++){
        even =even + 2;
        cout<<even<<endl;
        sum = sum + even;
        avg = sum/2;
}
      cout<<"the sum is: "<<sum<<endl;
      cout<<"the average is: "<<avg<<endl;
    return 0;
}
