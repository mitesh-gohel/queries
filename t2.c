#include <stdio.h>
void main()
{
        int a = -1;
        int b = -1 >> 1;
        int c = 1 >> 1;
        printf("%d %d %d \n", a, b, c);
}
/*
====== Output ======
mitesh@mitesh-IdeaPad-3i:~/mitesh_git/queries$ gcc t2.c 
mitesh@mitesh-IdeaPad-3i:~/mitesh_git/queries$ ./a.out 
-1 -1 0 
mitesh@mitesh-IdeaPad-3i:~/mitesh_git/queries$
====================


Query :
Why in output b = -1 ?
*/
