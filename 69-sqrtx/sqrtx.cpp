class Solution {
public:
    int mySqrt(int x) {
        int lowestNum = 0;
        int highestNum = x;
        int answer = 0;

        while(lowestNum <= highestNum){
            long middle = lowestNum + (highestNum - lowestNum)/2;

            if(middle * middle <= x){
                answer = middle;
                lowestNum = middle + 1;
            } else{
                highestNum = middle -1;
            }
        }
        return(int)answer;
    }
};