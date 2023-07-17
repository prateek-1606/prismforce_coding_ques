#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        int abhimanyu_power,skips_count,recharges_count;
        cin>>abhimanyu_power>>skips_count>>recharges_count;
        
        int circles_count = 11;
        int circles_power[11];
        
        for(int i=0;i<circles_count;i++){
            cin>>circles_power[i];
            // increasing power by half for k3 and k7 enemies
            if(i==2 || i==6) circles_power[i] += circles_power[i]/2;
        }
        
        // sorting array to skip circles with highest power
        sort(circles_power,circles_power+circles_count);
        
        int total_power = 0;
        
        for(int i=0;i<circles_count-skips_count;i++) total_power += circles_power[i];
        
        // calculating required power
        int required_power = abhimanyu_power * (recharges_count + 1);
        
        if(total_power<=required_power){
            cout<<"Abhimanyu can cross the Chakravyuh"<<endl;
        }
        else{
            cout<<"Abhimanyu cannot cross the Chakravyuh"<<endl;
        }
    }
}
