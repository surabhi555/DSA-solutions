//problem link https://www.geeksforgeeks.org/problems/rotation4723/1
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int low = 0;
        int high = arr.size()-1;
        int ans =INT_MAX;
        int index = -1;
         while(low <= high){
             int mid =low+(high-low)/2;
             if(arr[low] <=arr[mid]){
                 if(arr[low] < ans){
                     ans = arr[low];
                     index = low;
                 }
                     low = mid+1;
             }
             else{
                 //arr[mid] <= arr[high]
                 if(arr[mid] < ans){
                     ans = arr[mid];
                     index = mid;
                 }
                     high =mid-1;
             }
         }
         return index;
        
    }
    
};