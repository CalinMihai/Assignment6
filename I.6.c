#include <stdio.h>
#include <stdlib.h>
int totalSec, hour, minute, second;

void split_time(long int total_sec, int *hr, int *min, int *sec);

int main()
{
    scanf("%d", &totalSec);

    split_time(totalSec,&hour,&minute,&second);

    printf("%d-->%d hours %d minutes %d seconds", totalSec, hour, minute, second);
    return 0;
}

void split_time(long int total_sec, int *hr, int *min, int *sec)
{
    int t;
    *hr = total_sec/3600;
    t = total_sec%3600;
    *min = t/60;
    *sec = t%60;
}
