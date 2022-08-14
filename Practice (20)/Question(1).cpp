#include<bits/stdc++.h>
using namespace std;
void sortArray(int size,int *arr)
{
    for(int pos = 1; pos<size; pos++)
    {
        int flag = 0;
        for(int check = 0; check<size-pos; check++)
        {
            if(arr[check]<arr[check+1])
            {
                swap(arr[check],arr[check+1]);
                flag = 1;
            }
        }
        if(flag == 0)break;
    }
}
int main()
{
    int size,k;
    cin>>size>>k;
    int *arr = new int[size] {0};
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    int *temp = new int[size] {0};
    for(int i = 0; i<size; i++)
    {
        temp[i] = arr[i];
    }
    // bubble sort array by 5 -> 4 -> 3 -> 2 -> 1
    int maximum;
    sortArray(size,temp);
    maximum = temp[k-1];

    // sort array by 1 -> 2 -> 3 -> 4 -> 5
    int minimum;
    sort(arr,arr+size);
    minimum = arr[k-1];

    cout<<minimum<<" "<<maximum<<endl;

    return 0;
}
