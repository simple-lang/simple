
/* 
	Copyright (c) 2017-2018 Azeez Adewale <azeezadewale98@gmail.com"> 
	MIT License Copyright (c) 2017 simple 

*/

/* 
 * File:   simple_misc.c
 * Author: thecarisma
 *
 * Created on July 12, 2017, 3:34 PM
 */

#include "../includes/ring.h"

SIMPLE_API void print_line ( void )
{
    puts("==============================================================================="); 
}

void display_help(){
    printf("Usage:  simple ([OPTIONS]) [PATH] [ARGS...]\n");
    printf("\t\t\t<to run a simple or complex file>\n\n");
    printf("[PATH]     : The Simple/Complex source file to execute.\n");
    printf("[ARG...]   : The arguments to pass to your simple application.\n");
    printf("([OPTIONS]): The flags/options to pass to the Simple VM/Simplify.\n\n");
    printf("The OPTIONS include : \n");
    printf("  -h -help                    Displays this help and exits.\n");
    printf("  -k -show-tokens             Scans and outputs the tokens in the source file.\n");
    printf("  -s -simplify                Compile simple file to one complex file.\n");
    printf("  -t -time                    Shows time before and after program execution.\n");
    printf("  -c -case-insensitive        Make simple case insensitive 'a=A'.\n");
    printf("  -v -verbose                 Displays all the modules and libraries of SIMPLE and exits.\n");
    printf("  -a -about                   Display the SIMPLE Property and exits.\n");
    printf("  -z -licence                 Print the current SIMPLE LICENCE and exits.\n");
    //printf("\t-p -property                Pop up a dialog that shows the current SIMPLE and your Computer Property.\n");
    printf("  -e -error                   Skip all error instance and print error report in console.\n");
    //printf("  -l [PATH] -log-error [PATH] Skip all error instance and print error report in file.\n");
    //print_line(); printf("MORE OPTION BELOW"); print_line(); 
    //printf("\t-k [PATH] -show-tokens [PATH]             Save the token into a file for debugging.\n");
}

int is_simple_file( const char *file_name )
{
    int x  ; 
    x = strlen(file_name) - 1 ;
    if ( x >= 5 ) {
        if ( tolower(file_name[x]) == 'm' && tolower(file_name[x-1]) == 'i' && tolower(file_name[x-2]) == 's' && tolower(file_name[x-3]) == '.'  ) {
            return 1 ;
        }
    }
    return 0 ;
}

int is_complex_file( const char *file_name )
{
    int x ;
    x = strlen(file_name) - 1 ;
    if ( x > 6 ) {
        if ( tolower(file_name[x]) == 'x' && tolower(file_name[x-1]) == 'e' && tolower(file_name[x-2]) == 'l' && tolower(file_name[x-3]) == 'm' && tolower(file_name[x-4]) == 'o' && file_name[x-5] == 'c' && file_name[x-5] == '.' ) {
            return 1 ;
        }
    } 
    return 0 ;
}

const char *file_real_name(const char *absolute_name){
    char *filename = (char*)calloc(1, sizeof(KB_BYTE_SIZE));
    if (strstr(absolute_name, "\\") != NULL ) {
        filename = (strrchr(absolute_name, '\\'))+1;
    } else {
        filename = (strrchr(absolute_name, '/'))+1;
    }

    return filename;
}