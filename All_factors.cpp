#include<bits/stdc++.h>
using namespace std;
void All_factors(int n)
{
    for(int i = 1; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cout << i  << " " << n / i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter No. " ;
    cin >> n;
    All_factors(n);
}
