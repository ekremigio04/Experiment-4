#include <iostream>

using namespace std;

int main()
{
    
    int i,j,n,temp,arr[5];
    
    cout << " Enter the number of elements to be sorted: " << flush;
    cin >> n;
    
    for (i=0;i<n;i++)
    {
        cin >> arr[i];
        cout << arr[i] << " , ";
    }
    
    cout << endl << endl;
    
    for (i=0;i<n;i++)
    {
        for (j=0;j < n - i - 1;j++)
        {
            if (arr[j] > arr[j+1])
            {
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout << " The array elements after sorting is: ";
    for (i=0;i<n;i++)
    {
        cout << arr[i] << ";";
    }

    return 0;
}
