class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector<int> freq1(26,0);
	    vector<int> freq2(26,0);
	    for(auto it: pat)
	    {
	        freq1[it-'a']++;
	    }
	    int ans=0;
	    int k=pat.size();
	    int n=txt.size();
	    int i=0,j=0;
	    while(j<n)
	    {
	        freq2[txt[j]-'a']++;
	        if(j-i+1 < k)
	        {
	            j++;
	        }
	        else if(j-i+1==k)
	        {
	           if(freq1==freq2) 
	           {
	               ans++;
	           }
	           freq2[txt[i]-'a']--;
	           i++;
	           j++;
	        }
	    }
	    return ans;
	}

};