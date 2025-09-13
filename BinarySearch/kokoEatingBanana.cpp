//problem link https://leetcode.com/problems/koko-eating-bananas/
class Solution {
public:
    long long calculateTotalHours(vector<int>&piles,int hourly){
        long long totalH =0;
        int  n=piles.size();
        for(int i=0;i<n;i++){
            totalH += (piles[i] + hourly - 1) / hourly;
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high =*max_element(piles.begin(),piles.end());
        int result = high;
        while(low <= high){
            int mid = (low+high)/2;
            long long totalH =calculateTotalHours(piles,mid);
            
            if(totalH > h){
              low =mid+1;  
                
            }
            else{
                result = mid;
                high = mid-1;
            }
        }
        return result;
    }
    
};