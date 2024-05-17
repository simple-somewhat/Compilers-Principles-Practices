#include "stdio.h"
#include "stdlib.h"
#define a (x+1)
int x = 2;

void b() {x = a;printf("%d\n",x);}

void c() {int x = 1; printf("%d\n",a);}

void print_value()
{

    int w,x,y,z;
    int i = 4; int j=5;
    {
        int j= 7;
        i = 6;
        w = i + j;
    }
    x = i + j;
    {
        int i = 8;
        y = i + j;
    }
    z = i+j;
    printf("%d-%d-%d-%d\n",w,x,y,z);

}

int main(int argc,char** argv)
{

    print_value();
    b();
    c();
}