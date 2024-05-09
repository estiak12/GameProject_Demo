#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
string s;
cin>>s;
ll f=0;
for(ll i=0; i<s.size(); i++){
if(s[i]==s[i+1]){
    f++;
    s[i]=f;
}

}
ll n;
cin>>n;
while(n--){
ll a,b;
cin>>a>>b;
cout<<s[b-1]-s[a-2]<<endl;

}


}