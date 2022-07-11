#include<stdio.h>
#include<conio.h>

int main() {
    int n,i,j,arr[100],a,flag;

    printf("Enter how many numbers are there : ");
    scanf("%d",&n);

    printf("\nyou can enter the number below: \n");

    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<n;i++) {
        flag = 0;
        for(j=0;j<=(n-i-1);j++) {
            if(arr[j] > arr[j+1]) {
                a = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = a;
                flag = 1;
            }
        }
        if(flag == 0)
        break;
    }

    for(i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
}