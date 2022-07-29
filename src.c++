#include <iostream>

using namespace std;

int main()
{
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string OG=   "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string s ;
    int n;
    cin>>n;
    cin>>s;
    for(long int i=0 ;i<s.size() ; i++){
             for(long int j=0 ;j<OG.size() ; j++){
                    if(n==1){
                    if(s[i]==OG[j]){
                    s[i]=Key[j];
                        break;}
                    }else{
                    if(s[i]==Key[j]){
                    s[i]=OG[j];
                        break;
                    }}

        }}
        cout<<s;

    return 0;
}
