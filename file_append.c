#include<stdio.h>
#include<string.h>

int main (){
    FILE*hk =fopen("hk.txt" , "a");

    if (hk == NULL)
    {
        printf("this file cannot be open \n");
        return 1;
    }

   
    fputs("APPENDING THE NEW DATA \n" , hk);
    fclose(hk);

    printf("\nthe data APEND sucessfully\n");
    return 0;
}