#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout << "How many numbers do you want to enter: ";
    cin >> n;
    int arr[n];
    cout << "Enter numbers, one per line: "<< endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    j=n-1;
    for (;j>=0; j--)
    {
        
    }
    string valid="False";
    for (int i = 1; i < n; i++)
    {
        if (arr[i]-arr[i-1]==1)
        {
            valid = "True";
        }
        if (arr[i]==arr[i-1])
        {
            valid = "False";
            cout << arr[i] << " appears more than once" << endl;  
        }
        
    }
     cout << valid;
}

