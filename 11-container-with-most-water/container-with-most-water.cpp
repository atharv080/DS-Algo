class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        int n=height.size(),ans=0,front=0,back=n-1;
        while(front<back){
            int width=back-front;
            ans=(height[front]>height[back])?max(ans,height[back--]*width):max(ans,height[front++]*width);
        }
        return ans;
    }
};