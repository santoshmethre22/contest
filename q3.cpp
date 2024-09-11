
#include<iostream>
using namespace std;



int main(){
 int T;
    cin >> T;
    
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        
        int zero=0;
        int one=0;
        if(n==0) cout<<0<<endl;
       for(auto i:s){
            if(i=='0')zero++;
            else one++;
       }
        int count=0;
        for(int k=1;k<n;k++){
            if(k>=one &&(k-one%2==0)){
                count++;
            }
            else if(k>zero &&(k-zero)%2==0){
                count++;
            }


        }

        cout<<count<<endl;
    }
    return 0;
}