#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int array[] = {60,80,90,10,50,30,20,70,100,40};
    cout<<" Before sort: ";
    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<" ";
    }
    sort(array+5,array+10);
     cout<<"\n\n Last five elements sort: ";
    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<" ";
    }
    getch();
}


