#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a)
{
    for(int i=0;i<a.size();i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reverse(vector<int>& b)
{
    int i=0;
    int j=b.size()-1;
    while(i<=j)
    {
        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;
        i++;
        j--;
    }
    display(b);
}

void reversepart(int i,int j,vector<int> &q)
{
   while(i<=j)
   {
    int temp=q[i];
    q[i]=q[j];
    q[j]=temp;
    i++;
    j--;
   }
   display(q);
}

int main()
{
    vector <int> v1;

    v1.push_back(0);         
    v1.push_back(4);   
    v1.push_back(7);   
    v1.push_back(3);   
    v1.push_back(8);              
    v1.push_back(2);   
    v1.push_back(1);   
    v1.push_back(9);   
    v1.push_back(5);

    cout<<"Entered vector : ";
    display(v1);
    cout<<"Reverse vector : ";
    reverse(v1);
    cout<<"Reverse paet of vector : ";
    reversepart(0,4,v1);
}