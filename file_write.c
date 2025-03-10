#include<stdio.h>
#include<string.h>

int main (){
    FILE*hk =fopen("hk.txt" , "w");

    if (hk == NULL)
    {
        printf("this file cannot be open \n");
        return 1;
    }

    fprintf(hk ,"hello , i am a beginner to new file.\n") ;
    fputs("in this c programming\n" , hk);
    fclose(hk);

    printf("\nthe data drawn sucessfully\n");
    return 0;
}