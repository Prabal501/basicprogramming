#include<bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> a(256,-1);
    int l=0,r=0;
    int lenS=0;
    int n = s.size();
    while(r<n)
    {
        if(a[s[r]] != -1)
            l = max((a[s[r]]+1), l);
        a[s[r]] = r;
        lenS = max(lenS,r-l+1);
        r++;
    }
    return lenS;
}

int main()
{
    string s;

    cin >> s;

    cout << lengthOfLongestSubstring( s ) << endl;

    return 0;
}
