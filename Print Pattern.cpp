void leftSolve(int N, vector<int> &ans)
    {
        if(N <= 0){
            ans.push_back(N);
            return;
        }
        
        ans.push_back(N);
        leftSolve(N-5, ans);
    }
    
    void rightSolve(int v, int N, vector<int> &ans)
    {
        if(v >= N){
            ans.push_back(v);
            return;
        }
        
        ans.push_back(v);
        rightSolve(v+5, N, ans);
    }

    vector<int> pattern(int N){
        // code here
        
        if(N <= 0){
            vector<int> ans = {N};
            return ans;
        }
        
        vector<int> ans;
        leftSolve(N, ans);
        int v = ans[ans.size()-1] + 5;
        rightSolve(v, N, ans);
        
        return ans;
    }
