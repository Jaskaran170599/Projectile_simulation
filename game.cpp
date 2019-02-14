#include<iostream>
#include<algorithm>
using namespace std;

int solve(int *arr,int n,int k){

if(n==0){
    return 0;
}
int sum=-1;

if(arr[0]<=k){
    return solve(arr+1,n-1,k);
}

for(int i=1;i<n;i++){
    if(arr[i]<=k){
        continue;
    }
    arr[i]-=1;
    int m=solve(arr+1,n-1,k);
    if (m>sum){
        sum=m;
    }
    arr[i]+=1;
}



return sum+arr[0];
}
int main(){

int T;
cin>>T;

int arr[50];
int n,k;

while(T--){
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<solve(arr,n,k);
}


}
