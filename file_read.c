/*
phele kch write KARO WIRTE FUNCTION SE PHR BAAD MEIN READ KROO !!!!!1*/




#include<stdio.h>
#include<string.h>

int main (){
    FILE*hk =fopen("hk.txt" , "r");

    if (hk == NULL)
    {
        printf("this file cannot be open \n");
        return 1;
    }
    char line[100];

    while (fgets(line , sizeof(line) ,hk) != NULL)
    {
        printf("%s" , line);
    }
    
    fclose(hk);

    // printf("\nthe data drawn sucessfully\n");
    return 0;
}