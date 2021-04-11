#include<bits/stdc++.h>

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

int n,i;
cin>>n;

 vector<pair<int,int>>s;
int a,b;

for(i=0;i<n;i++)
{
 cin>>a>>b;
 s.push_back(make_pair(b,a));
}
sort(s.begin(),s.end());

int ele=0,total=0;
for(pair<int,int>time:s)
{
 if(time.second>=ele)
 {
   ele=time.first;
   total++;
 }
}
cout<<total<<endl;
return 0;
}
