#include <stdio.h>
int main(){
    char ar[100];
    int n=0;
    int l=0;
    printf("Enter your sentence\n");
    scanf("%[^\n]",&ar);
    for(int i=0;ar[i]!=NULL ; i++){
        ar[i]!=' '? n++ :l++;
    }
    printf("length %d words with %d  speach\n",n,l);
    return 0;
}

