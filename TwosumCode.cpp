#include<bits/stdc++.h>

using namespace std;

//// two sum Problem on Leetcode

vector<int> twoSum(vector<int>& nums, int target) {
vector<int>vect;
int n=nums.size();
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(nums[i]+nums[j]==target)
{
    vect.push_back(i);
    vect.push_back(j);
    break;
}
}
}
return vect;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        arr.push_back(x);
    }

    int target;

    cin >> target;

    vector<int> ans = twoSum(arr , target);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[ i ]<<" ";
    }

    return 0;
}

