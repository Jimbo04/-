void ntocc(int a,char s[])  
{
	char cc1[11][3] = { "零","一","二","三","四","五","六","七","八","九" };
	char cc2[5][3] = { "十","百","千","万"};
    char sa[7];
    int i,j,w;

    itoa(a,sa);
    ia = 0;
    i = w = strlen(sa);
    s[0] = '\0';
    
    if(a >= 10 && a < 20)
    {
        strcat(s,cc2[0]);
        if(a > 10)
        {
            strcat(s,cc1[sa[1] - '0']);
        }
    }
    else if(a == 100000)
    {
        strcat(s,cc2[0]);
        strcat(s,cc2[3]);
    }
    else
    {
        for(j = 0;j < w;j++,i--)
        {
            if(sa[j] == '0')
            {
                if(j == (w - 1))
                break;
                else 
                {
                    int sum = 0;
                    for(int k = j+1;k < w;k++)
                    {
                        sum += sa[k] - '0';
                    }
                    if(sa[j - 1] != '0' && sum != 0)
                    strcat(s,cc1[0]);
                }  
            }
            else
            {
                strcat(s,cc1[sa[j] - '0']);
                if(i >= 2)
                strcat(s,cc2[i - 2]);  
            }
        }
    }
}
