#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    int b;
    int nsum;
    int sum;
    int gsum;
    cout<<"Skriv in ett tal\n "<<endl;
    cin>>a;
    cout<<"\n+\n"<<endl;
    cin>>b;
    sum=a+b;
    nsum=a-b;
    gsum=a*b;
    cout<<"\nSumman = "<<sum<<endl;
    cout<<"\nSumman = "<<nsum<<endl;
    cout<<"\nSumman = "<<gsum<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
