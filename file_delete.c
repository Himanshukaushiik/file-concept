#include<stdio.h>

int main(){

    if (remove("hk.txt") == 0 )
    {
        printf("the file is deleted");
    }else{
        printf("not yet");
    }
    
}