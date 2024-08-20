#include <stdlib.h>
#include <stdio.h>

int ft_len(char *str)
{
int i;

i = 0;
while (str[i])
i++;
return (i);
}

char *ft_strcpy(char *dest, char *src)
{
int i;

i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

char *ft_strcat(char *dest, char *src)
{
int n;
int i;

n = ft_len(dest);
i = 0;
while (src[i] != '\0')
{
dest[n] = src[i];
i++;
n++;
}
dest[n] = '\0';
return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
int i;
int len;
char *arr;

len = 1;
i = 0;
len = ft_len(sep) * (size - 1);
while (i < size)
len += ft_len(strs[i++]);
if (size == 0)
{
arr = NULL;
return (0);
}
arr = malloc(len * sizeof(char));
if (! arr)
return (0);
ft_strcat(arr, strs[0]);
i = 0;
while (++i < size)
{
ft_strcat(arr, sep);
ft_strcat(arr, strs[i]);
}
return (arr);
}

int main()
{
    char *sep;
    int size;
    char *len;
char *str[3];

str[0] = "oussama";
str[1] = "imad";
str[2] = "aymane";

    size = 3;
    sep = " # ";
    len = ft_strjoin(size, str, sep);
        printf("%s", len);
    return 0;
}
