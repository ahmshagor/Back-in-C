#include <stdio.h>
int main(){
    int i;
    float b;
    char ar[100],arr[100],temp;
    printf("input int & float\n");
    scanf(" %d %f",&i,&b);
    scanf("%c",&temp);
    printf("input string\n");
    //for with speach string use  %[^\n] or %[^\n]s instead of %s
    scanf("%[^\n]",&ar);
    printf("input second string\n");
    // second use gets
    scanf("%c",&temp);
    gets(arr);
    printf(" %d %.2f\n",i,b);
    printf("%s \n %s \n",ar,arr);
    return 0;
}
