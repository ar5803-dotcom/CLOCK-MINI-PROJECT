#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
    int h,m,s,d=1000;
    printf("Enter clock:");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60){
        printf("Invalid Timeline\n");
        exit(0);
    }
    while(1)
    {
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        printf("\n Clock with respect to the entered timeline: ");
        printf("\n %2d:%2d:%2d",h,m,s);
        Sleep(d);
        system("cls");
    }
}