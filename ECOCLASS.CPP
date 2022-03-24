#include <iostream>
#include <vector> 
using namespace std;

int main() {
    int t;
cin>>t;
vector<int> v;
vector<int> v1;
	while(t--)
	{   int count = 0;
	    int j;
	    cin>>j;
	    int temp = j;
	    int kk = j;
	    while(j--)
	    {
	        int k;
	        cin>>k;
	        v.push_back(k);
	  
	    }
	    while(temp--)
	    {
	        int l;
	        cin>>l;
	        v1.push_back(l);
	    }
	    for(int f = 0; f < kk; f++)
	    {
	        if(v[f] == v1[f])
	        {
	            count ++;
	        }
	    }
	    cout<<count<<endl;
	    v1.clear();
	    v.clear();
	    
	}
	return 0;
}
