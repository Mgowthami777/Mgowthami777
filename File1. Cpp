#include<iostream.h11.>
void ArrayReverse(int l,int r,int a[])
{
    if(l>=r)
    {
        return;
    }
    swap(a[l],a[r]);
    return ArrayReverse(l+1,r-1,a);
}
nt main()
{
    int n=4;
    int i=1;
    int a[n]={2,3,1,4};
    ArrayReverse(0,n-1,a);
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}
