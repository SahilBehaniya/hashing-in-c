#include<stdio.h>
#include<conio.h>

void mid_square(int A[],int key)
{
    int k,m=0,n;
    k=key*key;
    k=k/10;
    n=k%10;
    if(n==0)
    {
        n=m;
    }
    if(A[n]==key)
    {
        printf("\nElement %d found at %d position",key,n);
    }
    else if(A[n]==-1)
    {
        A[n]=key;
        printf("\nElement %d placed at %d position",key,n);
    }
    else
    {
        printf("\nCollission ocurred between %d and %d at position %d",key,A[n],n);
    }
}

void mod(int A[],int key,int L)
{
    int n;
    n=key%L;
    if(A[n]==key)
    {
        printf("\nElement %d found at %d position",key,n);
    }
    else if(A[n]==-1)
    {
        A[n]=key;
        printf("\nElement %d placed at %d position",key,n);
    }
    else
    {
        printf("\nCollission ocurred between %d and %d at position %d",key,A[n],n);
    }
}

void fold(int A[],int key)
{
    int S=0,j;
    j=key;
    while(key>0)
    {
        S=S+(key%10);
        key=key/10;
    }
    if(A[S]==j)
    {
        printf("\nElement %d found at %d position",j,S);
    }
    else if(A[S]==-1)
    {
        A[S]=key;
        printf("\nElement %d placed at %d position",key,S);
    }
    else
    {
        printf("\nCollission ocurred between %d and %d at position %d",j,A[S],S);
    }
}


int main()
{
    int choice,key;
    int A[]={20,-1,15,19,12,-1,13,18,17,-1};
    int B[]={320,-1,322,540,524,-1,726,777,-1,987};
    int C[]={00,10,-1,21,31,23,-1,25,53,72};
    char Z='y';
    while(Z=='y')
    {
        printf("\nSelect a hashing method from below:");
        printf("\n1]Mid-square Method\n2]Division Method\n3]Folding Method\n4]Enter 4 to exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice){
            case 1:printf("\nEnter the key to be searched:");
                    scanf("%d",&key);
                    mid_square(A,key);
                    break;
            case 2:printf("\nEnter the key to be searched:");
                    scanf("%d",&key);
                    mod(B,key,10);
                    break;
            case 3:printf("\nEnter the key to be searched:");
                    scanf("%d",&key);
                    fold(C,key);
                    break;
            case 4:printf("\n\t\tThank you Have a nice day");
                    return 0;
                    break;
            default:printf("\nIncorrect choice");
        }
        printf("\nEnter y to continue the program:");
        scanf(" %c",&Z);
    }
    return 0;
}
