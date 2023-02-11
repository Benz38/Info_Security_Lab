/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//zigzag algo

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cout<<"Enter the msg that you want to encrypt:"<<endl;
    cin>>s;
    
    int n;
    cout<<"type the key:"<<endl;
    cin>>n;
    
    int i,j;
    vector<vector<char>> mat(n,vector<char>(s.size(),' '));
    j=0;
    
    int flag=0;
    
    for(i=0;i<s.size();i++){
        mat[j][i] = s[i];
         if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;

        if(flag==0){
            j++;
        }
        else j--;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<s.size();j++){
            if(mat[i][j]!=' ')
                cout<<mat[i][j];
        }
    }
}
