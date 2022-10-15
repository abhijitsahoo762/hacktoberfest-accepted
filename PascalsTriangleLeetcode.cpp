class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>v1;
        
        v1.push_back(1);
        ans.push_back(v1);
        
        for(int i=0; i<numRows-1; i++)
        {
            vector<int>temp, v2;
            temp=ans[i];
            
            for(int j=0; j<temp.size(); j++)
            {
                if(j==0)
                    v2.push_back(1);
                
                if(j!=temp.size()-1)
                    v2.push_back(temp[j]+temp[j+1]);
                
                if(j==temp.size()-1)
                    v2.push_back(1);
                    
            }
            
            ans.push_back(v2);
        }
        return ans;
    }
};
