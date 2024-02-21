<!--Array-->
_A_~~rr~~__a__`y`

```c
#include<stdio.h>
int main()
{
    int number[5];

    number[0] = 10;
    number[1] = 20;
    number[2] = 30;
    number[3] = 40;
    number[4] = 50;

    printf("%d\n",number[0]);
    printf("%d\n",number[1]);
    printf("%d\n",number[2]);
    printf("%d\n",number[3]);
    printf("%d\n",number[4]);

    return 0;
}
```

![starting](./images/arrayj.png)
</br>

### another stayle

```c
#include<stdio.h>
int main()
{
    int numbers[5] = {10,20,30,40,50};

    printf("%d\n",numbers[0]);
    printf("%d\n",numbers[1]);
    printf("%d\n",numbers[2]);
    printf("%d\n",numbers[3]);
    printf("%d\n",numbers[4]);

    return 0;
}
```

![pic](./images/ar.png)

### another short

```c
#include<stdio.h>
int main()
{
    int numbers[] = {10,20,30,40,50};

    printf("%d\n",numbers[0]);
    printf("%d\n",numbers[1]);
    printf("%d\n",numbers[2]);
    printf("%d\n",numbers[3]);
    printf("%d\n",numbers[4]);

    return 0;
}  
```
<image src="./images/ar2.png" width="500" title="pic"/>

### array decliaration and initialization shortcut

```c
#include<stdio.h>
int main()
{
    int numbers[] = {10,20,30,40,50};

    for(int index=0; index<5; index++)
    {
        printf("%d\n",numbers[index]);
    }

    return 0;
}  
```  

<image src="./images/ar3.png" width="500" title="Third"/>


### sum with array

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int numbers[5],sum=0;

        for(int  index=0; index<5; index++)
        {
            printf("number[%d] : ",index+1);
            scanf("%d",&numbers[index]);
            sum=sum+numbers[index];
            printf(" = %d\n",sum);
        }

        printf("Total number is : %d\n",sum);
    }
}
```

<image src="./images/sum.png" width="500" title="sum"/>

### sum & average

```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int numbers[5],sum=0;
        float average;

        for(int  index=0; index<5; index++)
        {
            printf("number[%d] : ",index+1);
            scanf("%d",&numbers[index]);
        }

        for(int index=0; index<5; index++)
        {
            sum=sum+numbers[index];
        }

        printf("Total number is : %d\n",sum);
        printf("average = %f",(float)sum/5);
    }
}
```
![average](./images/average.png)
</br>

### 
```c
#include<stdio.h>
int main()
{
    while(1)
    {
        int numbers[5],sum=0;
        float average;

        for(int  index=0; index<5; index++)
        {
            printf("number[%d] : ",index+1);
            scanf("%d",&numbers[index]);
        }

        for(int index=0; index<5; index++)
        {
            sum=sum+numbers[index];
        }

        printf("Total number is : %d\n",sum);
        printf("average = %.2f",(float)sum/5);
    }
}
```

![float](./images/float.png)  

### Maximum

```c
#include<stdio.h>
int main()
{
    int numbers[]={999,15,20,45,-15,-20};

    max=number[0];

    for(int i=1; i<6; i++)
    {
        if(max<number[i])
        {
            max=number[i];
        }
    }

    printf("maximum number is : %d",max);

    return 0;
}
```

<image src="./images/maximum.png" width="500" heigh="500" title="maximum" />  

### minimum

```c
#include<stdio.h>
int main()
{
    int number[]={999,15,20,45,-15,-20};

    min=number[0];

    for(int i=1; i<6; i++)
    {
        if(number[i]<min)
        {
            min=number[i];
        }
    }

    printf("minimum number is = %d",min);

    return 0;
}
```  
</br>

![minpic](./images/minimum.png)  

continue...