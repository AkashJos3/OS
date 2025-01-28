#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
void main()
{

pid_t childid=fork();

if(childid==0){
printf("I am the child.... child creation is successfull\n");
printf("parent id is %d\n", getppid());
printf("child id is %d\n" , getpid());
}
if (childid>0){
printf ("I am the parent... child creation is successfull\n");
printf("parent id is %d\n", getppid());
printf ("child id is %d\n",getpid());
wait(NULL);
printf("Child process is terminated and parent process is running\n ");
}

if(childid<0){
printf("child creation is unsuccesfull");
exit(0);
}
}
