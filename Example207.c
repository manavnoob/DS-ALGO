#include<stdio.h>
#include<conio.h>

int maxnum(int a[],int m);
void radixsort(int ar[],int n);

int maxnum(int a[],int m) {
    int i,maxn=a[0],j;

    for(i=0;i<m;i++) {
        if(maxn < a[i]) {
            maxn = a[i];
        }
    }
    return maxn;
}

void radixsort(int ar[],int n) {

    int max = maxnum(ar,n);
    int pos=0,i,lsd,index;
    for(pos=1;(max/pos)>0;pos*10) {
        int count[50] = {0};
        int br[50] = {0};
        for(i=0;i<n;i++) {
            lsd = (ar[i]/pos)%10;
            count[lsd] = count[lsd]++;            
        }
        for(i=1;i<n;i++) {
            count[i] = count[i] + count[i-1];
        }
        for(i=n-1;i>=0;i--) {
            lsd = (ar[i]/pos)%10;
            count[lsd]--;
            br[count[lsd]] = ar[i];            
        }
         for(i=0;i<n;i++) {
             ar[i] = br[i];
         }
     //     for(int j=0;j<n;j++) {
     //     printf("%d \t",br[j]);
     // }
    }
    printf("Your Answer is below: \n");
    for(int j=0;j<n;j++) {
        printf("%d \t",ar[j]);
    }
}

int main() {

    int r,arr[50],i;
    printf("How many numbers are there: ");
    scanf("%d",&r);

    printf("You can Enter values below: \n");
    for(i=0;i<r;i++) {
        scanf("%d",&arr[i]);
    }

    radixsort(arr,r);
    printf("Your Answer is below: \n");
    for(int j=0;j<r;j++) {
        printf("%d \t",arr[j]);
    }
}


