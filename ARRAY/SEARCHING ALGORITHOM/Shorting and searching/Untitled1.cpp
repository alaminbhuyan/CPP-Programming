#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int size,i,j;
    cout<<"Enter the range of array: ";
    cin>>size;

    int arr[size];

    cout<<"\nEnter the elements of array: ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // array shorting......................
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"\nAfter shorting array elements are: ";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
   //Binary searching.......................
    int first,mid,last,key;

    cout<<"\n\nEnter the searching value : ";
    cin>>key;

    first = 0;
    last = size-1;
    while(first<=last)
    {
        mid = (first + last)/2;
        if(key==arr[mid])
        {
            cout<<"\n\nThe position of searching value : "<<mid+1;
            break;
        }
        else if(key>arr[mid])
            first = mid+1;
        else
            last = mid -1;
    }
    if(first>last)
    {
        cout<<"\nThe searching value is not found"<<endl;
    }

    getch();
}
