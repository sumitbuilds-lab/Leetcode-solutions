int majorityElement(int* nums, int numsSize) {
    int el;
    int count = 0;
    for(int i = 0; i<numsSize;i++){
        if(count == 0){
            el = nums[i];
            count = 1;
        }
        else if(nums[i] == el){
            count++;
        }
        else{
            count--;
        }
    }
    int count1 = 0;
    for(int i = 0; i<numsSize;i++){
        if(el == nums[i]){count1++;}
    }
    if(count1>numsSize/2){
        return el;
    }
    return -1;
}