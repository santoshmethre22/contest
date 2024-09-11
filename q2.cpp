#include <bits/stdc++.h>
using namespace std;

int main() {
	

    int t;
    cin>>t;
    
    while(t--){
    
        int d,x,y;
        cin>>d>>x>>y;
        
        int cost=0;
        
        if(y>=x)return x;
        
        else {

            int cost=1;
            y--;
            while(y>0){

                int dis=x*(100-(cost*d))/100;
                
                if(y==x-dis) {
                    cout<<cost<<endl;
                    break;
                }
                
                y--;
            }
            if(y==0) cout<<-1<<endl;
        }
        
        
    }
    
    return 0;
}