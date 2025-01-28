#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
 void main()
 {
 
 char*args[]={"./EXEC",NULL};
 execvp(args[0],args);
 printf("END");
 }
 
