#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[31];
    int i, count1=0, count2=0;
    printf("Introduceti temperaturile:\n");
    for (i=0; i<31; i++)
        scanf("%lf",&a[i]);
    for (i=0; i<31; i++)
    {
        if (a[i]>0)
            count1++;
        if (a[i+1])
        {
            if (a[i+1]>0 && a[i]<0)
                count2++;
            else if (a[i+1]<0 && a[i]>0)
                count2++;
        }
    }
    printf("Nr de zile cu temp pozitive: %d\n",count1);
    printf("Nr de schimbari de semn: %d",count2);
    return 0;
}
