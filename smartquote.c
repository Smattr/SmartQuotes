#include<stdio.h>
main(c,v){while((v=getchar())>0)putchar(v-39||++c%2?v:96);}