#include <stdio.h>

int main(){
    FILE *fh;

    fh = fopen("standard.txt", "r");

    if (fh != NULL){
        char c;
        while ((c = fgetc(fh)) != EOF)
        {
            putchar(c);
        }
        fclose(fh);
        
    }else printf("Error openning file.\n");

    return 0;
}