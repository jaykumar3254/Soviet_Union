//arrays and string functions 
#include<iostream>

using namespace std ;

int main()
{
    int i, arr[]={10,20,1,5,2,12,13,40,8,9,7,5,4,4,3};
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[2]<<endl;
    }
 return 0;
}

/*
#include<iostream>

using namespace std;

int main()
{
    int arr[5];
    arr [0]= 23; //dynamically adding element in array
    cout<<arr[0];
    return 0;
}*//*
//functions in array 
#include<iostream>

using namespace std ;

int main()
{
    int arr[5];

    cout<<" size fo array : "<<sizeof(arr)<<endl;
    int l =sizeof(arr)/ sizeof(arr[0]);
    cout<<l;

    return 0;
}*/