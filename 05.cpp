#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"enter the size of array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter the elements of this array"<<endl;
  for(int i=0;i<n;i++){
  cin>>arr[i];
  }
  for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
      }
  }

  cout<<"gratest number : "<<arr[n-1]<<endl;
  cout<<"second greatest number : "<<arr[n-2]<<"\t";
  cout<<endl;

  return 0;
}