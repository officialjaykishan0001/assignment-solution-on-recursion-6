#include<iostream>
#include<vector>
using namespace std;
void print_target_indeces(vector<int> &a,int target,int i)
{
    if(i==a.size())
    {
        return ;
    }

    if(a[i]==target)
    {
        cout<<i<<" ";
    }

     print_target_indeces(a,target,i+1);

}
int main()
{
    int n;
    cin>>n;

    vector<int> a(n);

    cout<<endl;
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    int target ;
    cout<<"enter the target value : ";
    cin>>target;
    print_target_indeces(a,target,0);

    return 0;
}