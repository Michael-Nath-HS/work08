int mystrlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

char *mystrcpy(char *dest, char *source)
{
    char *p = source;
    int i = 0;
    while (*p != '\0')
    {
        dest[i] = *p;
        p++;
        i++;
    }
    return dest;
}

char *mystrncpy(char *dest, char *source, int n)
{
    int i = 0;
    char *p = source;
    while (i < n)
    {
        dest[i] = *p;
        p++;
        i++;
    }
    return dest;
}

char *mystrcat(char *dest, char *source)
{
    // assuming that dest has enough bytes
    char *d = dest;
    while (*d != '\0')
    {
        d++;
    }
    char *s = source;

    while (*s != '\0')
    {
        *(d) = *s;
        d++;
        s++;
    }
    return dest;
}

char *mystrncat(char *dest, char *source, int n)
{
    char *d = dest;
    while (*d != '\0')
    {
        d++;
    }
    int i = 0;
    while (i < n)
    {
        *d = source[i];
        i++;
    }
    return dest;
}

int mystrcmp(char *s1, char *s2)
{
    int i1 = 0;
    int i2 = 0;
    while (s1[i1] != '\0')
    {
        i1++;
    }
    while (s2[i2] != '\0')
    {
        i2++;
    }

    int max;
    if (i1 > i2)
    {
        max = i1;
    }
    else
    {
        max = i2;
    }
    int i = 0;
    while (i < max)
    {
        if (s1[i] < s2[i])
        {
            return -1;
        }
        else if (s1[i] > s2[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

char *mystrchr(char *s, char c)
{
    char *p = s;
    while (*p != '\0')
    {
        if (*p == c)
        {
            return p;
        }
        p++;
    }
    if (*p == c)
    {
        return p;
    }
    return 0;
}

char *mystrstr(char *s1, char *s2)
{

    char *s = s1;
    char *p = s2;

    while (*s)
    {
        if (*s == *p)
        {
            char *z = p;
            char *y = s;
            char found = 1;
            while (*z)
            {
                if (*y != *z)
                {
                    found = 0;
                    break;
                }
                y++;
                z++;
            }
            if (found)
            {
                return s;
            }
        }
        s++;
    }
    return 0;
}
