#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    char employee_name[] = "Alperen Atay";
    time_t clock_in_time, clock_out_time;
    double total_work_seconds;

    printf("Starting work for %s...\n", employee_name);

    clock_in_time = time(NULL);
    printf("Started working at: %s", ctime(&clock_in_time));

    printf("Simulating work time...\n");
    sleep(2);

    clock_out_time = time(NULL);
    printf("Stopped working at: %s", ctime(&clock_out_time));

    total_work_seconds = difftime(clock_out_time, clock_in_time);
    int hours = total_work_seconds / 3600;
    int minutes = ((int)total_work_seconds % 3600) / 60;
    int seconds = (int)total_work_seconds % 60;

    printf("%s worked for a total of: %d hours, %d minutes, and %d seconds.\n",
           employee_name, hours, minutes, seconds);

    return 0;
}
