#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("How many characters you enter: \n");
    scanf("%d",&n);
    char arr[100][100];
    int r=0;
    char new[100];
    printf("Enter Characters:\n");
    for(int i=0;i<n;i++){
        scanf(" %s",arr[i]);
    }
    for(int i=0;i<n;i++){
        int min=arr[i][0];
        for(int j=0;j<strlen(arr[i]);j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
            else{
                min=min;
            }
        }
        new[r++]=min;
    }
    for(int i=0;i<r-1;i++){
        for(int j=0;j<r-1;j++){
            if(new[i]>new[j]){
                char mee=new[i];
                new[i]=new[j];
                new[j]=mee;
            }
        }
    }
    printf("%s",new);
    return 0;
}
