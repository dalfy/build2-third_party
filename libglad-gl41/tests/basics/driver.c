#include <stdio.h>

#include <glad/glad.h>

int main ()
{
    if(!gladLoadGL()) { 
        exit(-1); 
    }
    printf("OpenGL Version %d.%d loaded", GLVersion.major, GLVersion.minor);
    
    return 0;
}
