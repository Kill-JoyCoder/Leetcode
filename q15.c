bool isPalindrome(int x){
    int t=x,c=0;
    if(t<0)
        t = -t;
    printf("%d\n",t);
    while (t){
        c += t%10;
        t /= 10;
        c *= 10;
    }
    c /= 10;
    printf("%d\n%d\n%d",c,x,t);
    if(c != x)
        return 0;
    else
        return 1;
    
}