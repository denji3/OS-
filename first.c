#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, bt[20], wt[20], at[20],p[20], temp;
    float avwt = 0, avtat = 0;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d", &n);
    printf("Enter process number:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&p[i]);
    printf("Enter arrival time: ");
    for(int i=0;i<n;i++)
        scanf("%d",&at[i]);
    printf("\nEnter Process Burst Time\n");
    for(int i=0;i<n;i++)
        scanf("%d",&bt[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(at[j]<at[i])
            {
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;

                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("P[%d]",p[i]);
    return 0;
}
