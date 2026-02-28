#include <stdio.h>

int main(void)
{
    SupExe(&run);
    Pterm(0);
}

static void run(void) {
    printf("\r\nHello World!\r\n");
}