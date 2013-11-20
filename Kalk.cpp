#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, svar;
    char raknesatt;
    cout<<"Skriv in en heltal: ";
    cin>>a;
    cout<<"\n Välj ditt räkne sätt (+, -,/,*)"<<endl;
    cin>>raknesatt;
    cout<<"\n Matta ditt andra tal: ";
    cin>>b;
    
    switch (raknesatt)
    {
        case '+':
            svar = a + b;
            cout<<"Summan blir: "<<svar<<endl;
            break;
            
        case '-':
            svar = a - b;
            cout<<"Differecen blir: "<<svar<<endl;
            break;
            
        case '*':
            svar = a * b;
            cout<<"Produkten blir: "<<svar<<endl;
            break;
            
        case '/':
            svar = a / b;
            cout<<"Kvoten blir: "<<svar<<endl;
            break;
            
        default: 
             cout<< "felinmatning"<<endl;
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
