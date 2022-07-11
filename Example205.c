#include<stdio.h>
#include<conio.h>

int main() {

    int n,i,j,temp;
    printf("How many numbers are there: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements below: \n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Your answer is below: \n");
    for(i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }


}