#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    int t;
    cin>>t;
    int i,x;
    int sumA,sumB;
    string result;
    while(t--){
        sumA = 0;
        sumB = 0;
        cin>>n;
        cin>>m;
        for(i = 0;i<n;i++){
            cin>>x;
            sumA +=x;
        }
        for(i = 0;i<m;i++){
            cin>>x;
            sumB+=x;
        }
        if(sumA==sumB)result+="Draw\n";
        else if(sumA>sumB)result+="Yudhisthira\n";
        else result+="Duryodhana\n";
    }
    if(result.length()>1)result.erase(result.begin()+result.length()-1);
    cout<<result;
    return 0;
}