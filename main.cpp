//1.trying to modify using const
#include <stdio.h>

int main()
{
    const char *str = "Hello, World!";
    str ="likhitha";
    printf("%s\n", str);
     printf("%p\n", str);
    printf("%s\n", *str);
    printf("%s\n", str);

    return 0;
}




// 2.to print reverse string literals..


// #include <stdio.h>

// int main()
// {
//     const char *str = "Hello world!";
//     printf("initial *str is %p\n",*str);

//     for (int i = 12; i >= 0; i--)
//     {
//          printf("%p  ",str[i]);

//         printf("%c\n", str[i]);
//         printf("%p\n",str[i]);
//     }
//     printf("\n");
//     return 0;
// }




// 3.Concatenate Two String Literals


// #include <stdio.h>
// int main()
// {
//     const char *str1 = "Hello, ";
//     char const *str2 = "World!";
//     printf("%s%s\n", str1, str2);
//     return 0;
// }



// 4.Change to Uppercase


// #include <stdio.h>

// int main()
// {
//     const char *str = "likhitha";
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         printf("%c", str[i] - 32);//A=65,a=97; a-A=97-65=32 similarly for (a-z) and (A-Z) diffrence is 32
//     }
//     printf("\n");
//     return 0;
// }


//5. Compare Two Strings

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char *str1 = "Likhitha";
//     const char *str2 = "Likhitha";

//     if (strcmp(str1, str2) == 0)
//     {
//         printf("Strings are equal\n");
//     }
//     else
//     {
//         printf("Strings are not equal\n");
//     }

//     return 0;
// }



//6.Calculating String Length

// #include<stdio.h>
// int main()
// {
//     char *str = "likhitha";
//     int length = 0;
//     while(*str++)
//     {
//         length ++;
//         printf("%d\n", length);
//     }
//     return 0;
// }


// 7.Replace All characters
// #include<stdio.h>
// int main()
// {
//     char *str = "Likhitha";
//     while(*str)
//     {
//         putchar('#');
//         str++;
//     }
//     return 0;
// }

//8.print string without Vowels

// #include<stdio.h>
// int main()
// {
//     char *str = "likhitha";
//     while(*str)
//     {
//         if (!(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'))
//         {
//             putchar(*str);
//         }
//         str++;

//     }
//     return 0;
// }

//9.find middel value....still pending

// #include<stdio.h>
// int main()
// {
//     char *str="likhitha";
//     int length=0;
//     int mid;
//     while(str[length]!='\0')
//     {
//         length++;
//     }
//          mid=str[length/2];
//         printf("%c\n",mid);

//     return 0;
// }

//10.modifying the input

// #include<stdio.h>
// int main()
// {
//     char *str = "Hello";
//     str = "Likhitha";
//     printf("%s\n",str);
//     return 0;
// }


