#include<stdio.h>
void main()
{
    int top=-1;
    int a[100],n,c;
    printf("Enter the size of stack: \n");
    scanf("%d",&n);
    do{
    printf("\nStack operations\n1)PUSH\n2)POP\n3)Display\n4)Exit\nEnter Your choice:");
    scanf("%d",&c);
    if(c==1)
    {
        if(top<n-1){
            printf("Enter element:");
            top++;
            scanf("%d",&a[top]);
        }
        else 
        {
            printf("Stack Overflow");
        }
        
    }
    else if(c==2)
    {
        if(top==-1){
            printf("Stack Underflow");
        }
        else {
            top=top-1;
        }
    }
    else if(c==3){
        if(top==-1){
            printf("Stack UNderflow");
        }
        else {
            for(int i=top;i>=0;i--){
                printf("%d",a[i]);
            }
        }
    }
    else if(c==4){
        exit(0);
    }
    else{
        printf("invalid Input....");
    }
        
    }
    while(1);

}
