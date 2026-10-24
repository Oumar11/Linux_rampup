#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

#define COUNT 100

#define STD_IN  0
#define STD_OUT 1
#define STD_ERR 2

int cp_main(int argc, char *argv[]) {
    // Write your code here
    // Do not write a main() function. Instead, deal with cp_main() as the main function of your program.
      


        char buf[COUNT];
        // Source File
        printf("Src: %s , Dst: %s", argv[1],argv[2]);
        int fd_source = open(argv[1], O_RDONLY);
        int fd_dest;
        
        if (fd_source < 0 )
        {

                printf("Could not open the file\n");
                exit(-1);
        }
        if ((fd_dest = open(argv[2],  O_RDWR | O_CREAT| O_TRUNC, 0644)) < 0)
        {
                printf("Could not Open or Create the Destination file...\n");
                exit(-2);
        }

        int num_read;
        while((num_read = read(fd_source,buf,COUNT)) > 0) // Read returns 0 at the end of the file
        {
                if (write(fd_dest,buf, num_read) < 0)
                {
                        printf("buf %s",buf );
                        printf("Write Failed\n");
                        exit(-3);
                }

        }
        close(fd_source);
        close(fd_dest);

    
}