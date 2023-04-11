#include <stdio.h>

typedef struct
{
    char *base;
    char *top;
    int stacksize;
}SqStack;

void InitStack(SqStack &S)
{
    S.base = new char[10000];
    S.top = S.base;
    S.stacksize = 10000;
}

void Push(SqStack &S, char e)
{
    *S.top++ = e;
}

int Pop(SqStack &S, char &e)
{
    if(S.top == S. base)
    {
        return 0;
    }
    e = *--S.top;
    return 1;
}

char GetTop(SqStack S)
{
    if(S.top == S.base)
    {
        return 'a';
    }
    return *(S.top - 1);
}

int main()
{
    SqStack S;
    InitStack(S);
    int len;
    char e;
    scanf("%d", &len);
    char in[10000];
    int ans[10000] = {0};
    scanf("%s", &in);
    int cishu, j, k;
    scanf("%d", &cishu);
    for (int i = 0; i < cishu; i++)
    {
        j = 0;
        k = 0;
        char out[10000];
        scanf("%s", &out);

        while(j <= len)
        {
            if (GetTop(S) == out[k])
            {
                Pop(S, e);
                k++;
            }
            else
            {
                Push(S, in[j++]);
            }
        }

        if (k == len)
        {
            ans[i] = 1;
        }
        else
        {
            ans[i] = 0;
        }
    }
    for (int i = 0; i < cishu; i++)
    {
        if(ans[i] == 1)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}
