#include<stdio.h>
#include<conio.h>

int main() {

    int n,i,j;
    printf("How many numbers are there: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter your elements below: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<n;i++) {
        int current = arr[i];
        j=i-1;
        while(arr[j] > current && j>= 0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;

    }

    printf("Your answer is below\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
}