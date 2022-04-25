#include <stdio.h>
#include <ctype.h>
//Luca Sosa Cuenca K2002
int main()
{
    printf("Ingresar caractere: ");
    char c;
    while((c=getchar())!='\n')
    {
        if(islower(c))
        {
            printf("%c",toupper(c));
        }
        else if(isupper(c))
        {
            printf("%c",tolower(c));
        }
        else if(isdigit(c))
        {            
        }
        else
        {
            printf("%c",c);
        }        
    }
    return 0;
}