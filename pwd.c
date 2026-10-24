#include <unistd.h>



#define BUFF_MAX 1000
int pwd_main() {
    // Write your code here
    // Do not write a main() function. Instead, deal with pwd_main() as the main function of your program.
char cwd[BUFF_MAX];

if (getcwd(cwd, sizeof(cwd)) != NULL)
{
    printf("%s\n", cwd);
}
else
{
    exit(-1);
}
    return 0;
}