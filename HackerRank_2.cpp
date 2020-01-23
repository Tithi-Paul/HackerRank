#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a[100], b[100], o[100], k[100];
 int n=3, i, m=0, p=0;

 for (i=0; i<n; i++){
    cin >> a[i] ;
 }
    for (i=0; i<n; i++){
    cin >> b[i];
 }
    for (i=0; i<n; i++){
    if(a[i]>b[i]){
        m++ ;
    }
    else if (a[i]< b[i]){
            p++ ;
    }
    else if (a[i]==b[i]){

    }
 }
   cout<< m << " " << p << endl;
}
