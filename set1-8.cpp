#include <iostream>

int main()
{
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum=sum+i;
    }

    cout << "Sum = " << sum;
    
}
