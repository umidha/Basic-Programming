//https://discuss.leetcode.com/topic/56167/simple-to-understand-c-solution

char findTheDifference(char* s, char* t) {
    unsigned int buckets[255]={0};
    unsigned int buckett[255]={0};
    unsigned int i;
    for(i=0;i<strlen(s);i++)
    {
        buckets[s[i]]++;
    }

    for(i=0;i<strlen(t);i++)
    {
        buckett[t[i]]++;
    }
    
    for(i=0;i<255;i++)
    {
        if(buckets[i]!=buckett[i]){
            return ((char)i);
        }
    }
    
    return -1;
}
