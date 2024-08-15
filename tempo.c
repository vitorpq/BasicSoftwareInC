#include <stdio.h>
#include <time.h>

int main(){
    time_t tempo_atual;
    tempo_atual = time(NULL);

    // char *ctime(const time_t *t)
    //ctime(tempo_atual)
    printf("O tempo atual é %s", ctime(&tempo_atual));
}