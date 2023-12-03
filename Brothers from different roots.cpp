    void traverse(Node *r, unordered_map<int, int> &mp)
    {
        if(r == NULL)
        return;
        
        //left call
        traverse(r->left, mp);
        
        //storing data
        mp[r->data] ++;
        
        //right call
        traverse(r->right, mp);
    }
    
    //store 2nd bst value in vector
    void traverse(Node *r, vector<int> &v)
    {
        if(r == NULL)
        return;
        
        //left call
        traverse(r->left, v);
        
        //storing data
        v.push_back(r->data);
        
        //right call
        traverse(r->right, v);
    }

    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_map<int, int> mp;
        vector<int> v;
        
        //storing bst value in map
        traverse(root1, mp);
        
        //storing bst value in vector
        traverse(root2, v);
        
        int pair = 0;
        
        for(int i=0; i<v.size(); i++)
        {
            int rem = x - v[i];
            
            if(mp.find(rem) != mp.end())
            pair++;
        }
        
        return pair;
    }
