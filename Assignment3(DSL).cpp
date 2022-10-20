#include <iostream>
using namespace std;
int A[10][10], B[10][10], C[10][10], D[10][10], E[10][10];
int row, column, i, j, k;

int Display(int Ar[10][10])
{

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << Ar[i][j] << " ";
        cout << "\n";
    }
    return 0;
}

void Matrix(int Ar[10][10])
{

    cout << "Enter the number of rows and columns of your matrix as row x column";
    cin >> row >> column;
    cout << "Enter elements of the matrix";
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "Element  " << i << " " << j << "\n";
            cin >> Ar[i][j];
        }
    Display(Ar);    
}


void AddMatrix(int Ar1[10][10], int Ar2[10][10])
{
    cout << "Addition of two matrices" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            C[i][j] = Ar1[i][j] + Ar2[i][j];
    }
    Display(C);
}

void SubMatrix(int Ar1[10][10], int Ar2[10][10])
{
    cout << "Subtraction of two matrices" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            D[i][j] = A[i][j] - B[i][j];
    }
    Display(D);
}

void MultiplyMatrix(int Ar1[10][10], int Ar2[10][10])
{
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            E[i][j] = 0;
        }

    cout << "Marix Multiplication" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            for (k = 0; k < row; k++)
            {
                E[i][j] += A[i][k] * B[k][j];
            }
    Display(E);
}

void Transpose(int Ar1[10][10])
{
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            B[j][i]=A[i][j];
        }
    Display(B);            
}

int main()
{
    int ch, flag;
    Matrix(A);
    cout << "Select your choice\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose";
    flag = 1;
    while (flag == 1)
    {
        cin>>ch;
        if (ch == 1)
        {   Matrix(B);
            AddMatrix(A, B);
        }

        else if (ch == 2)
        {
            Matrix(B);
            SubMatrix(A, B);
        }
        else if (ch == 3)
        {
            Matrix(B);
            MultiplyMatrix(A, B);
        }
        else if (ch==4)
        {
            Transpose(A);
        }
        else
        {
            cout <<"WRONG INPUT";
        }
        break;
    }

    return 0;
}
