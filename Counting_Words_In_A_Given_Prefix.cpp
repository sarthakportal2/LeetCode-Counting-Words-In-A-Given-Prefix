class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        //optimal_sol ((min.runtime(4ms)) with (S(C(n))=O(1)) and T(C(n))=O(n)
        int out=0;//initializing output 
        for(auto s:words){//iterating to the word
            auto select=s.find(pref);//finding and selecting the prefered string's indx val 
            if (select!=string  ::npos && select==0)out++;//incrementing output val to selected string's [ith] and also at its 's 0th index positon 
        }return out;}};//printing output
