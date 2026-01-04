
bool isPalindrome(char s[])
{
    

    int i, len = strlen(s);
    for(i = 0; i < len / 2; i++)
    {
        if(tolower(s[i]) != tolower(s[len - 1 - i]))
        {
            return 0; 
        }
    }
    return 1; 

}