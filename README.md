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

### serialwise largest two integer

```c
#include<stdio.h>
int main()
{
    int number[]= {10,30},first,second,sizeofarray;

    sizeofarray=sizeof(number)/sizeof(number[0]);

    if(number[0]>number[1])
    {
        first=number[0];
        second=number[1];
    }

    else
    {
        first=number[1];
        second=number[0];
    }

    printf("first number is : %d\n",first);
    printf("second number is : %d\n",second);

    return 0;
}

```
<image src="./images/firstse.png" width="500" title="largest"/>

### first and second largest number

```c
#include<stdio.h>
int main()
{
    int numbers[]={32,45,67,55,66,69,76,9,76},sizeofarray=sizeof(numbers)/sizeof(numbers[0]),first,second;

    if(numbers[0]>numbers[1])
    {
        first=numbers[0];
        second=numbers[1];
    }
    else
    {
        first=numbers[1];
        second=numbers[0];
    }

    for(int index=2; index<sizeofarray; index++)
    {
        if(numbers[index]>first)
        {
            second=first;
            first=numbers[index];
        }
        else
        if(numbers[index]>second && numbers[index]!=first)
        {
            second=numbers[index];
        }
    }

    printf("First number is : %d\n",first);
    printf("Second numebr is : %d\n",second);

    return 0;
}
```  

<image src="./images/three.png" width="500" title="three"/>

</br>

### create a matrix

```c
#include<stdio.h>
int main()
{
    int matrix[3][2]={
        {10,20},
        {30,40},
        {50,60}
    };

    printf("%d ",matrix[0][0]);
    printf("%d ",matrix[0][1]);
    printf("%d ",matrix[1][0]);
    printf("%d ",matrix[1][1]);
    printf("%d ",matrix[2][0]);
    printf("%d ",matrix[2][1]);

    return 0;
}
```

<image src="./images/matrix.png" width="500" title="matrix"/>  

### matrix in short

```c
#include<stdio.h>
int main()
{
    int matrix[3][2]={
        {10,20},
        {30,40},
        {50,60}
    };

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

![shortmatrix](./images/shortmatrix.png)

### using scanf

```c
#include<stdio.h>
int main()
{
    int matrix[3][2];

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<2; col++)
        {
            printf("number[%d][%d] = ",row,col);
            scanf("%d",&matrix[row][col]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

![scanf](./images/usingscanf.png)

</br>

### sum of matrix

```c
#include<stdio.h>
int main()
{
    int A[3][2], B[3][2],C[3][2];

    printf(" A \n");

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<2; col++)
        {
            printf("number[%d][%d] = ",row,col);
            scanf("%d",&A[row][col]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // B matrix

    printf(" B \n");
        for(int row=0; row<3; row++)
    {
        for(int col=0; col<2; col++)
        {
            printf("number[%d][%d] = ",row,col);
            scanf("%d",&B[row][col]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf(" Sum \n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
           C[i][j]=A[i][j]+B[i][j];
           printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```
</br>

![sum](./images/summatrixx.png)

### sum avarage multiply & divition

```c
#include<stdio.h>
int main()
{
    int numbers[]= {15,2,3,4,5},size=sizeof(numbers)/sizeof(numbers[0]),sum=0,multiply=1,subtraction= numbers[0] ;
    float average,division=numbers[0];

    for(int i=0; i<size; i++)
    {
        sum=sum+numbers[i];
        multiply=multiply*numbers[i];

    }

    for(int i=1; i<size; i++)
    {
        division=division/(float)numbers[i];
        subtraction=subtraction-numbers[i];
    }

    for(int space=1; space<=50; space++)
    {
        printf(" ");
    }
    printf("sum = %d\n",sum);
    for(int space=1; space<=50; space++)
    {
        printf(" ");
    }
    printf("average = %.2f\n",(float)sum/size);
    for(int space=1; space<=50; space++)
    {
        printf(" ");
    }
    printf("division = %f\n",division);
    for(int space=1; space<=50; space++)
    {
        printf(" ");
    }
    printf("subtraction = %d",subtraction);
    getch();
}
```

<image src="./images/all.png" width="500" title="picall"/>


_Take_ __limited__ ~~number~~ of `input`

```c
#include<stdio.h>
int main()
{
    int numbers[100],n,sum;
    float average;

    printf("Enter the range of numbers : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&numbers[i]);
    }

    for(int j=0; j<n; j++)
    {
        sum=sum+numbers[j];
    }

    printf("sum = %d \n",sum);
    printf("average = %.2f",(float)sum/n);
    getch();
}
```
![input](./images/input.png)  
</br>

### normal fibonacci
```c
#include<stdio.h>
int main()
{
    int number,first=0,second=1,i,fibo;

    printf("Enter the series range : ");
    scanf("%d",&number);

    while(i<=number)
    {
        if(i<=1)
        {
            fibo=i;
            printf("%d = %d\n",i,fibo);
        }
        else
        {
            fibo=first+second;
            printf("%d + %d = %d\n",first,second,fibo);
            first=second;
            second=fibo;
        }
        i++;
    }
    return 0;
}
```
![fibo](./images/fibo.png)
</br>

_fibonacci_ __num__~~ber~~ using `array`

```c
#include<stdio.h>
int main()
{
    int number,a[30],n;

    printf("Enter the term of series : ");
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;

    for(int i=0; i<n; i++)
    {
        if(i<=1)
        {
            printf("%d = %d\n",i,a[i]);
        }
        else
        {
            a[i]=a[i-1]+a[i-2];
            printf("%d + %d = %d \n",a[i-2],a[i-1],a[i]);
        }
    }
    return 0;
}
```

<image src="./images/fibonacciarray.png" width="500" title="fibonacci"/>

_created_ ~~by~~ `me`

```c
#include<stdio.h>
int main()
{
    int number[]= {4,5,6,2,1},total,maximum,j,latest,a[30],minimum,update;

    total=sizeof(number)/sizeof(number[0]);
    maximum=number[0];
    minimum=number[0];
    for(int i=1; i<total; i++)
    {
        if(number[i]>maximum)
        {
            maximum=number[i];
        }
        if(number[i]<minimum)
        {
            minimum=number[i];
        }
    }
    latest=maximum;
    printf("minimum = %d \n",minimum);
    printf("latest = %d\n",latest);



    for(int i=1; i<total; i++)
    {
        update=minimum;

        for(j=0; j<total; j++)
        {
            if(number[j]<latest && number[j]>=minimum)
            {
                if(number[j]>=update)
                    maximum=number[j];
                    update=maximum;
                    printf("update = %d\n",update);
            }
        }
        latest=maximum;
        printf("latest %d = %d\n\n",number[i],latest);
    }

    return 0;
}
```
![image](./images/origin.png)

continue ...