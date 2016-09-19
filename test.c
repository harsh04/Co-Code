#include<stdio.h>
#include "logRecorder.c"
void getOnlyFileName(char *name){
    int i;
    for(i=0;name[i]!='/0';i++)
        printf("%s\n",name[i]);
}

void main(){
    struct dataToStore e;
    char openFile[50] = "file open: ";
    char test[20] = "test";
    strcat(openFile,test);
    getOnlyFileName(openFile);

    getch();
}
