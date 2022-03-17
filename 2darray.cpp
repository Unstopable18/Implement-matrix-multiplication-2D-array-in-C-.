#include<iostream>  
using namespace std;  
int main()  
{  
    int r,c,i,j,arr1[100][100],arr2[100][100],arr3[100][100];
    cout<<"********************************"<<endl;
    cout<<"This is a 2 Dimensional Array ";
    cout<<endl<<"********************************"<<endl;
    cout<<"\n Enter Rows for Array (Max 100) : ";
    cin>>r;
    cout<<"\n Enter Columns for Array (Max 100) : ";
    cin>>c;
    cout<<"\n Enter "<<r*c<<" Array Elements for Matrix 1 : \n";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<" ";
            cin>>arr1[i][j];
        }
    }
    cout<<endl<<"********************************"<<endl;

    cout<<"\n Enter "<<r*c<<" Array Elements for Matrix 2 : \n";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<" ";
            cin>>arr2[i][j];
        }
    }
    cout<<endl<<"********************************"<<endl;
    cout<<"***Multiplication of Matrix 1 and Matrix 2***"<<endl;
    for (int i = 0; i < r; i++) 
    { 
        for (int j = 0; j < c; j++) 
        {  
            cout <<arr1[i][j]<<" "; 
        }
        cout<<"\n";
    } 
    cout<<endl<<" * "<<endl;
    for (int i = 0; i < r; i++) 
    { 
        for (int j = 0; j < c; j++) 
        {  
            cout <<arr2[i][j]<<" "; 
        }
        cout<<"\n";
    } 
    cout<<endl<<" = "<<endl;
    for (int i = 0; i < r; i++) 
    { 
        for (int j = 0; j < c; j++) 
        {  
            arr3[i][j]=arr1[i][j]*arr2[i][j];   
            cout <<arr3[i][j]<<" "; 
        }
        cout<<"\n";
    } 
    cout<<endl<<"********************************"<<endl;   
    return 0;  
}  
