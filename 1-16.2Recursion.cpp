#include <iostream>
using namespace std;

// Sum of numbers till n using recursion
// -----------------------------------------------------------------------------------------------------------------------------------------------
int sumOfN(int n)
{
    if(n==1)
    {
        return n;
    }
    int ans = n + sumOfN(n-1);
    return ans;
}
//------------------------------------------------------------------------------------------------------------------------------------------------

// Calculate n raise to the power p
int nPowerP(int n, int p)
{
    if(p==1)
    {
        return n;
    }
    int ans = n * nPowerP(n,p-1);
    return ans;
}
//------------------------------------------------------------------------------------------------------------------------------------------------
// Calculate n th Fibonacci number
int nFibo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int ans = nFibo(n-1)+nFibo(n-2);
    return ans;
}
//------------------------------------------------------------------------------------------------------------------------------------------------
// Check if array is sorted or not (ascending)
bool checkSort(int arr[],int size)
{
    if(size==1)
    {
        return true;
    }
    // bool compare;
    // if(arr[1]>arr[0])
    // {
    //     compare = true;
    // }
    // else
    // {
    //     compare=false;
    // }
    bool ans = (arr[1]>arr[0]) && checkSort(arr+1,size-1);
    return ans;
}
//------------------------------------------------------------------------------------------------------------------------------------------------
// Print numbers till N
void printN(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }
    printN(n-1);
    cout<<n<<endl;
    
}
//------------------------------------------------------------------------------------------------------------------------------------------------
// Print numbers till N in descending
void printNdesc(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    printNdesc(n-1);   
}
//------------------------------------------------------------------------------------------------------------------------------------------------
// Find first occurence of a nmuber
int firstOcc(int arr[], int size, int index, int key)
{
    if(index==size)
    {
        return -1;
    }

    if(arr[index]==key)
    {
        return index;
    }
    return firstOcc(arr,size,index+1,key);
}
//------------------------------------------------------------------------------------------------------------------------------------------------
// Find last first occurence of a nmuber
int lastOcc(int arr[], int size, int index, int key)
{
    if(index==size)
    {
        return -1;
    }
    int x=lastOcc(arr,size,index+1,key);
    if(x!=-1)
    {
        return x;
    }
    if(arr[index]==key)
    {
        return index;
    }
    return -1;
}


int main() 
{
    //cout<<sumOfN(5);
    //cout<<nPowerP(9,2);
    //cout<<nFibo(6);
    int arr[]={8,60,4,7,4};
    //cout<<checkSort(arr,4);
    //printN(5);
    //printNdesc(5);
    cout<<lastOcc(arr,5,0,4);
}