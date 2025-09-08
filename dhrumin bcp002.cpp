#nclude <stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("enter the value of 1st 2*2 array" )
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);

    printf("enter the value of 1st 2nd array" )
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
            c[i][j]=a[2][2]+b[2][2];
        }
            printf("1st matrix\n");
            for(i=0;i<2;i++)

        {
            for(j=0;j<2;j++)
                printf("%d",a[i][j]);
             printf("\n");
        }
             printf("2st matrix\n");
            for(i=0;i<2;i++)
        {
          for(j=0;j<2;j++)
                printf("%d",b[i][j]);
             printf("\n");
        }
              printf("3st matrix\n");
            for(i=0;i<2;i++)
            {
              for(j=0;j<2;j++)
                printf("%d",c[i][j]);
             printf("\n");
            }result 0;

}
