#include <stdio.h>
int main(){
    char ar[100];
    int n=0;
    printf("Enter your sentence\n");
    scanf("%[^\n]",&ar);
    for(int i=0;ar[i]!=NULL ; i++){
        n++;
    }
    printf("length %d words with speach\n",n);
    return 0;
}
