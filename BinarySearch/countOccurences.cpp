//problem link https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
class Solution {
  public:
    int firstOccurence(vector<int>&arr,int target){
        int low = 0,high = arr.size()-1;
        int first =-1;
        while(low <= high){
            int mid = (high+low)/2;
            if(arr[mid] == target){
                first = mid;
                high = mid-1;
            }
            else if(arr[mid] < target){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        return first;
    }
    int lastOccurence(vector<int>&arr,int target){
        int low = 0,high = arr.size()-1;
        int last = -1;
        while(low <= high){
            int mid =(low+high)/2;
            if(arr[mid] == target){
                last = mid;
                low = mid+1;
                }
            else if(arr[mid] < target){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        return last;
    }
    int countFreq(vector<int>& arr, int target) {
        int first = firstOccurence(arr,target);
        int last =lastOccurence(arr,target);
        if(first == -1)return 0;
        return last - first +1;
        
    }
};