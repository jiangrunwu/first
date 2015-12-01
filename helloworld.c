#include "stdio.h"
#include "foo.h"
extern int foo2();
int main(void){

    printf("hello world! this is the first version in master\n");
    
    printf("hello world! this is the first version in second-branch\n");
    
    foo();
    foo2();

    return 0;

}
