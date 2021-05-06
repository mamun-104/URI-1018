#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    int N,temp;
    cin>>N;
    temp = N;

    int n100,n50,n20,n10,n5,n2,n1;

    n100 = N/100;
    N = N-(n100*100);

    n50 = N/50;
    N = N-(n50*50);

    n20 = N/20;
    N = N-(n20*20);

    n10 = N/10;
    N = N-(n10*10);

    n5 = N/5;
    N = N-(n5*5);

    n2 = N/2;
    N = N-(n2*2);

    n1 = N/1;
    N = N-(n1*1);

    cout<<temp<<endl;
    cout << n100 << " nota(s) de R$ 100,00"<<endl;
    cout << n50 << " nota(s) de R$ 50,00"<<endl;
    cout << n20 << " nota(s) de R$ 20,00"<<endl;
    cout << n10 << " nota(s) de R$ 10,00"<<endl;
    cout << n5 << " nota(s) de R$ 5,00"<<endl;
    cout << n2 << " nota(s) de R$ 2,00"<<endl;
    cout << n1 << " nota(s) de R$ 1,00"<<endl;






    return 0;
}



