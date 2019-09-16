//
//  bubble_sort.cpp
//This program was made by tangjerry,seach me on the gitub.
//The principle of bubble_sort is in this program too.find it easily.
#include <iostream>
using namespace std;
int data[500];
int n;//how much data do you want to sort
int main()
{
    int tmp;
    cin>>n;
    for(int i=0;i<n;i++) cin>>data[i];//input everydata
    //bubble_sort core
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i;j++)
        {
            if(data[j]>data[j+1])
                //This is sort from small to large.
                //if you want to sort from large to small.only change">"to"<"
            {
                //swap
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;
            }
        }
    for(int i=1;i<=n;i++) cout<<data[i]<<" ";//output everydata
    return 0;
    //end;

}
