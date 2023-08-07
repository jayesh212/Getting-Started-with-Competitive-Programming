#include<iostream>
#include<vector>
using namespace std;
void getInput(vector<int> &arr){
    int len;
    cin>>len;
    int x;
    for(int i =0;i<len;i++){
        cin>>x;
        arr.push_back(x);
    }
}
void printArray(vector<int> &arr){
    int len = arr.size();
    for(int i =0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int>&arr,int start,int end){
    int temp;
    for(int i =start,j = end;i<=j;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int findMinIndex(vector<int> &arr,int start){
    int len = arr.size();
    int min = start;
    for(int i =start+1;i<len;i++){
        if(arr[min]>arr[i]){
            min = i;
        }
    }
    return min;
}
int reversort(vector<int> &arr){
    int ub = arr.size() - 1;
    int cost = 0;
    if(ub<=0)return 0;
    int j;
    for(int i=0;i<ub;i++){
        //find minimum index
        j = findMinIndex(arr,i);
        cost = cost + j - i + 1;
        reverse(arr,i,j);
    }
    return cost;
}
int main(){
    vector<int> arr;
    //get input array
    getInput(arr);
    int sortingCost = reversort(arr);
    cout<<"Sorting Cost : "<<sortingCost<<endl;
    cout<<"Sorted Array"<<endl;
    //print Array
    printArray(arr);
    return 0;
}