//dfs-backtracking
void dfs(vector<vector<int>>& res, vector<int>& v, int index, int k, int& n)
{
    if(k == 0)
    {
        res.push_back(v);
        return;
    }
    for(int i = index; i <= n; i++ )
    {
        v.push_back(i);
        dfs(res, v, i+1,k-1, n);
        v.pop_back();
    }
}
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> v;
        dfs(result, v, 1, k, n);
        
        return result;
    }
};
