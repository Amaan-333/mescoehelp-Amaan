#include<iostream>
using namespace std;
int A[10][10];


void Matrix()
{   
    int row,column,i,j;
    cout<<"Enter the number of rows and columns of your matrix as row x column";
    cin>>row>>column;
    cout<<"Enter elements of the matrix";
    for(i = 0; i < row; i++)
        for (j = 0;j < column; j++)
        {
            cout<<"Element  "<<i<<" "<<j<<"\n";
            cin>>A[i][j];
        }     
}

int Display(int Ar[10][10])
{
    int row,column,i,j;
    cout<<"Matrix A"<<"\n";
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
            cout<<Ar[i][j]<<" ";
        cout<<"\n";    
        
    }
    return 0; 
}

int main()
{
    Matrix();
    Display(A);
    return 0;
}
