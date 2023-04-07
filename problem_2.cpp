#include<iostream>
#include<vector>
using namespace std;
//dry run.
//n = 3;
//
void print_ans(vector<int> &a,int n)
{
    if(n==0)
    {
        return ;

    }

    
     for(int j = 0;j<n;j++)
     {
        cout<<a[j]<<" ";
     }
    

    
        cout<<endl;

        int i = 0;
        for(int j=1;j<n;j++)
        {

            a[i] = a[j-1]+a[j];
            i++;
            
        }

    

    print_ans(a,n-1);

    
}
int main()
{
    int n;
    cout<<"size : ";
    cin>>n;

    vector<int> a(n);
    
    cout<<endl;

    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    print_ans(a,n);

    return 0;

    cout<<endl;
    
    
    }