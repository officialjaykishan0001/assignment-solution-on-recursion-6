#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[], int n) {
                for (int i = 0; i < n; i++)
                {
                        cout<<arr[i]<<" ";
                }
                cout<<endl;
}
void generate(int A[], int B[], int C[], int i, int j, int m, int n, int len, bool flag){
                if (flag) {
                        // Include valid element from A
                        // Print output if there is at least one 'B' in output array 'C'
                        if (len != 0) {
                                printArr(C, len + 1);
                        }
                        // Recur for all elements of A after current index
                        for (int k = i; k < m; k++) {
                                if (len == 0) {     //this block works for the very first call to include the first element in the output array
                                        C[len] = A[k];
                                        // don't increment len as B is included
                                        generate(A, B, C, k + 1, j, m, n, len, !flag);
                                }
                                else if (A[k] > C[len]) { // include valid element from A and recur
                                        C[len + 1] = A[k];
                                        generate(A, B, C, k + 1, j, m, n, len + 1, !flag);
                                }
                        }
                }
                else {  //Include valid element from B and recur
                        for (int l = j; l < n; l++) {
                                if (B[l] > C[len]) {
                                        C[len + 1] = B[l];
                                        generate(A, B, C, i, l + 1, m, n, len + 1, !flag);
                                }
                        }
                }
        }
int main()
{
    int m,n;
    cout<<"Enter the length of both arrays : ";
    cin>>m;
    cin>>n;
    int A[m];
    int B[n];
    cout<<"Enter the elements of first array : ";
    for(int i=0;i<m;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the elements of second array : ";
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
    int C[m+n];
    generate(A, B, C, 0, 0, m, n, 0, true);
    
}