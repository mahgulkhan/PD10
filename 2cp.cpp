#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Give number of directions you eant to enter: ";
    cin >> n;
    string dir[n];
    cout << "Enter directions (left or right), one per line :"<< endl;
    for (int i = 0; i < n; i++)
    {
        cin >> dir[i];
    }
    int count=0,j;
    for (;j<n;j++)
    {
        if (dir[j]=="right")
        {
            count +=90;
        }
        else if (dir[j]=="left")
        {
            count -=90;
        } 
    }
    int deg;
    deg = abs(count);
    deg /=360;
    cout << "There will be " << deg << " rotations. ";
    return 0;
}