class Solution {
public:
    int bin(int n)
    {
        string s,v;
        int x,z=0,k=0,i;
        while(n!=0)
        {
            x=n%2;
            n=n/2;
            v=to_string(x);
            s=s+v;
        }
        cout<<s;
        
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1'){
            k++;
            }
        }
        return k;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int> > bits;
        vector<int> z;
        int k=0,x=0,j,i;
        for(i=0;i<arr.size();i++)
        {
            x = bin(arr[i]);
            bits.push_back(make_pair(x,arr[i]));
        }
            sort(bits.begin(),bits.end());
            for(j=0;j<bits.size();j++)
            {
                z.push_back(bits[j].second);
            }
        return z;
    }
};