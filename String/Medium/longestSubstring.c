int lengthOfLongestSubstring(char* s) {
    int lastIndex[256];
    memset(lastIndex, -1, sizeof(lastIndex));

    int maxLength = 0;
    int start = 0;

    for(int end = 0; s[end] != '\0'; end++){
        unsigned char ch = s[end];
        // if the character has already been seen in the string considered
        if(lastIndex[ch] >= start){ 
            start = lastIndex[ch] + 1; // 0
        }

        lastIndex[ch] = end; //0,1,2...
        maxLength = (end - start + 1 > maxLength) ? end - start + 1 : maxLength;
    }
    return maxLength;
}