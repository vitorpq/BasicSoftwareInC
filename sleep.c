#include <stdio.h>
#include <time.h>
#include <unistd.h>

// void delay(int seconds) {
//     int mili_secs = 1000 * seconds;
//     clock_t start_time = clock();

//     while (clock() < start_time + mili_secs);
// }

int main(){
    printf("Contador:\n");
    for (int i = 5; i >= 0; i--){
        printf("%d\n", i);
        sleep(5);
    }
    printf("Tempo esgotado\n");
    return 0;
}