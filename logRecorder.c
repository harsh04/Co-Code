#include<stdio.h>
#include <string.h>
#include <time.h>
//TODO: autoincrement of id num
typedef struct dataToStore record;
struct dataToStore
{
   long unsigned int idNo;
   char clientName[50];
   char time[100];
   char eventTriggered[100];
   char contentModified[1000];
};
void recordLog(long unsigned int id, char name[50], char event[100], char content[1000]){
    struct dataToStore e;
    FILE *fp, *fc;
    fc = fopen("log.txt", "r"); // TODO: reading last log to get id and time
    fp = fopen("log.txt", "a+"); // appending log
    e.idNo = id;  // TODO: auto increment

    strcpy(e.clientName,name);
    strcpy(e.eventTriggered,event);
    strcpy(e.contentModified,content);

    time_t t;    //to get system time
    time(&t);
    strcpy(e.time,ctime(&t));

    printf("\nLog progress: %d %s %s%s\n%s\n", e.idNo, e.clientName, e.time, e.eventTriggered, e.contentModified);

    fprintf(fp,"%d\n%s\n%s%s\n%s\n", e.idNo, e.clientName, e.time, e.eventTriggered, e.contentModified);
    fclose(fp);
}
