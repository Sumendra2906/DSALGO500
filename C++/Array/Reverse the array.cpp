#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t,start,end;
    char s[1001],temp;
    cin>>t;
    while(t>0){
        t--;
        cin>>s;
        start=0;
        end=strlen(s)-1;
        while (start<end)
        {
            temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            end--;
            start++;
        }
        cout<<s<<endl;
        
        
        
    }
    
	//code
	return 0;
}