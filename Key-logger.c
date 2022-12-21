#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void main()
{
char key;
FILE *fptr;
int i;
fptr=fopen("THANKS.txt","w");
for (i=0;key!=27;i++)
{
    key=getch();
    printf("[%c]\n",key);
    fprintf(fptr,"[%c]\n",key);
    switch (key)
    {
case ' ':{
    fprintf(fptr,"[SPACE KEY]\n");
    break;
}
case 0x09:{
    fprintf(fptr,"[Tab KEY]\n");
    break;
}
case 0x0D:
{
 fprintf(fptr,"[ENTER KEY]\n");\
 break;
}
case 0x1B:
{
     fprintf(fptr,"[ESC KEY]\n");
     break;
}
case 0x08:
{
     fprintf(fptr,"[backspace KEY]\n");
     break;
}
}
}
fclose(fptr);
}
