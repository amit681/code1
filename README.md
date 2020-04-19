#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long int i,a[26]={0},sum=1,c;
        for(i=0;i<s.length();i++)
        {
        if(s[i]!='_')
          a[s[i]-'a']++;
          else
          {
              c=0;
              if(a[4]>0)
              c++;
              if(a[8]>0)
              c++;
              if(a[14]>0)
              c++;
              if(a[0]>0)
              c++;
              if(a[20]>0)
              c++;
              sum=sum*(c);
          }
        }
        if(sum==0)
        cout<<"1\n";
        else 
        cout<<sum<<endl;
    }
}
