#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("inter the first");
    scanf("%d",&a);
    printf("inter the sec");
    scanf("%d",&b);
    printf("inter the th");
    scanf("%d",&c);
    if(a>b)
        if(a>c)
            if(b>c)
                printf("%d is the grate %d is the small",a,c);
            else
                printf("%d is the grate %d is the small",a,b);
         else
                if(a>b)
                        printf("%d is the grate %d is the small",c,b);
                else
                        printf("%d is the grate %d is the samll",c,a);
     else
              if(b>c)
                if(c>a)
                    printf("%d is thew grate %d is the small",b,a);
                else
                    printf("%d thwe grate %d the small",b,c);
              else
                    printf("the are the same");

    return 0;
}
