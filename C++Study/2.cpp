#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    int b;
    cin>>a;
    cin>>b;
    cout<<"1)"<<"setprisition:"<<setprecision(3)<<a<<endl
    <<"2)"<<setw(1)<<right<<b<<endl
    <<"3)"<<setw(3)<<left<<b<<b<<endl;
    return 0;
}
