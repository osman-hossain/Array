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

### minimum & maximum

```c
#include<stdio.h>
int main()
{
    int numbers[]={10,20,30,999,-4,-20};

    int maximum=numbers[0];
    int minimum=numbers[0];

    for(int i=1; i<6; i++)
    {
        if(maximum<numbers[i])
        {
            maximum=numbers[i];
        }

        if(minimum>numbers[i])
        {
            minimum=numbers[i];
        }
    }

    printf("minimum number is : %d",minimum);
    printf("maximum number is : %d",maximum);

    return 0;
}
```
</br>

<image src="./images/minmax.png" widh="500" title="minmax"/>  

### scanf maxx minn

```c
#include<stdio.h>
int main()
{
    int numbers[5],maximum,minimum;

    for(int i=0; i<5; i++)
    {
        printf("number[%d] = ",i+1);
        scanf("%d",&numbers[i]);
    }
    minimum=numbers[0];
    maximum=numbers[0];

    for(int index=1; index<5; index++)
    {

        if(maximum<numbers[index])
        {
            maximum=numbers[index];
        }

        if(minimum>numbers[index])
        {
            minimum=numbers[index];
        }

    }

    printf("minimum number is : %d\n",minimum);
    printf("maximum number is : %d",maximum);

    return 0;
}
```

![scanfmaxmin](./images/scanf.png)
</br>

### liner search

```c
#include<stdio.h>
int main()
{
    while(1)
    {
    int numbers[]={10,20,999,-3,-22,144},target,found;

    printf("Enter the finding number : ");
    scanf("%d",&target);

    found = -1;

    for(int i=0; i<6; i++)
    {
        if(target==numbers[i])
        {
            found=i;
            break;
        }
    }

    if(found == -1)
    printf("%d number not found in the list.\n",target);
    else
    printf("%d number is found from the serial of number[%d]\n",target,found);
    }
    return 0;
}  
```  
<image src ="./images/liner.png" widh="500" title="liner search"/>

continue . . .


