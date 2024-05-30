#include <stdio.h>

int main(int argc, char *argv[]){
    //print the number of arguments
    printf("argc: %d\n", argc);

    //print the argument
    for (int i = 0; i < argc; i++){
        printf("argv[%d]=%s\n", i, argv[i]);
    }
    return 0;
}