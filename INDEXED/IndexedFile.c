#include <stdio.h>

int main() 
{ 
    int n, m[20], i, j, sb[20], s[20], b[20][20], x; 

    printf("Enter no. of files: "); 
    scanf("%d", &n); 

    for(i = 0; i < n; i++) 
    { 
        printf("Enter starting block and size of file %d: ", i + 1); 
        scanf("%d%d", &sb[i], &s[i]); 
        
        printf("Enter number of blocks occupied by file %d: ", i + 1); 
        scanf("%d", &m[i]); 
        
        printf("Enter blocks of file %d: ", i + 1); 
        for(j = 0; j < m[i]; j++) 
        {
            scanf("%d", &b[i][j]); 
        }
    } 

    printf("\nFile\tIndex\tLength\n"); 
    for(i = 0; i < n; i++) 
    { 
        printf("%d\t%d\t%d\n", i + 1, sb[i], m[i]); 
    }

    printf("\nEnter file name (number): "); 
    scanf("%d", &x); 

    i = x - 1; 
    printf("File name is: %d\n", x); 
    printf("Index is: %d\n", sb[i]); 
    printf("Blocks occupied are: "); 
    for(j = 0; j < m[i]; j++) 
    {
        printf("%3d", b[i][j]); 
    }

    printf("\n");
    return 0; 
}

