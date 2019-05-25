#include <iostream>
#include <cstdlib>
#include<iomanip>

using namespace std;

void displaymenu()
{
    cout << " MENU: " << endl;
    cout << " ============================= ";
	cout << endl;
    cout << " 1.Add"<<"\n";
    cout << " 2.Subtract"<<"\n";
    cout << " 3.Multiply"<<"\n";
    cout << " 4.Divide"<<"\n";
    cout << " 5.Modulus"<<"\n";
}
int Add(int a,int b)
{
    return(a+b);
}

int Substract(int a, int b)
{
    return(a-b);
}

int Multiply(int a, int b)
{
    return(a*b);
}
float Divide(int a,int b)
{
    return(a/b);
}
int Modulus(int a, int b)
{
    return(a%b);
}

int main(int argc, char *argv[])
{
    displaymenu();
    int z;
    int a;
    int b;
    char confirm;
    do
    {
        cout<<"Enter your choice(1-5):";
        cin >> z;
        cout<<"Enter your two integer numbers:";
        cin >> a >> b;
        cout<<"\n";
        switch (z)
        {
            case 1:
                cout<<"The result is:"<<Add(a,b);
                break;
            case 2:
                cout<<"The result is:"<<Substract(a,b);
                break;
            case 3:
                cout<<"The result is:"<<Multiply(a,b);
                break;
            case 4:
                cout<<"The result is:"<<Divide(a,b);
                break;
            case 5:
                cout<<"The result is:"<<Modulus(a,b);
                break;
            default:cout<<"invalid";
        }
        
        cout << "\n";
        cout<<"Press y to continue:";
        cin>>confirm;
        
    }
    while(confirm=='y');
    system("PAUSE");
    
return 0;
}
