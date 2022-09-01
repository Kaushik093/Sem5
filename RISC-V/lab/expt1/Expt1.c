/*#include<stdio.h>
int main()
{
    int a,b,c;
     scanf("%d %d",&a,&b);
    c = a + b;
     printf("%d", c); }

#include<stdio.h>
int main()
{
    int a ,b, c;
    scanf("%d %d",&b, &c);
    a=b + 3*c;
    printf("%d", a);
    }
*/

/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c = 17;
        printf("a>b,c is %d", c);
        }
        else
        {
            printf("a<b, c is %d", 0);
        }
    }
 */
/* #include<stdio.h>
int main()
{
    printf("%d", (1024-512)-(256-18));
    }*/
    #include<stdio.h>
int main()
{
    int x, y, m, l, d, c;
    printf("Enter Y, M, L, D and C respectively: ");
    scanf("%d %d %d %d %d", &y,&m,&l,&d,&c);
    x = ((y-m) - (l-d) + (2+c) - d);
    printf("X is %d",x);
    }