#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int status;
    int pid = fork();
    int grandchild = fork();

    // Write C code here   
    if (grandchild == 0){
        printf("I am the grandchild (%d)\n", getpid());
    }
    else if (pid == 0){
        printf("I am the child (%d)\n", getpid());
        printf("I am the parent (%d)\n", getppid());
    }

    return 0;
}
