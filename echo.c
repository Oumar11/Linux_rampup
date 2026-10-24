
int echo_main(int argc, char *argv[]) {
    // Write your code here
    // Do not write a main() function. Instead, deal with echo_main() as the main function of your program.
    int count  = 1;
    if(argc > 0 )
    {
        while(argv[count] != NULL)
        {
            
            if(count == argc - 1)
            printf("%s",argv[count]);
            
            else
            printf("%s ",argv[count]);
            
            count++;
            
        }
         printf("\n");
    }
    else
    {
        exit(-1);
    }
    
    return 0 ;
}