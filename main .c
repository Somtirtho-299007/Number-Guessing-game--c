#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int num = rand() % 101;
    int high=100,low=0;
    int mid=(high+low)/2;
    int x,count=10;
    
    while(count!=0){
        printf("You have %d chances left \n", count);
        printf("Enter Your number");
        scanf("%d",&x);
        if(x==num) {
            printf("You guessed it right!! congratulations\n ");
            break;
        }
       if(x<mid&&num<mid){
            printf("You are in right domain very close\n");
            
            high=mid-1;
            mid=(low+high)/2;
            if(num<mid&&x>mid){
                printf ("Try between %d to %d\n",low,mid);
            }
             if(num>mid&&x<mid){
                printf("Try between %d to %d\n",mid,high);
            }
                
                
            }
            
            
            
else if(x>mid&&num>mid){
            printf("You are in right domain very close\n");
            low=mid+1;
            
            mid=(low+high)/2;
            if(num<mid&&x>mid){
                printf ("Try between %d to %d\n",low,mid);
            }
           if(num>mid&&x<mid){
                printf("Try between %d to %d\n",mid,high);
                
            }

            }
            else if(num<mid&&x>mid){
                printf("You are in Wong track,try something between %d to %d\n",low,mid);
            }
else if(num>mid&&x<mid){
                printf("You are in Wong track,try something between %d to %d\n",mid,high);
                
            }
            
        
        count--;
    
        }
    if(count==0){
        printf ("Sorry chances are over,the number was %d",num);
    }
    
    

    
    return 0;
}
