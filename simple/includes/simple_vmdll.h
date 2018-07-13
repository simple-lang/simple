
/* 
	Copyright (c) 2017-2018 Azeez Adewale <azeezadewale98@gmail.com"> 
	MIT License Copyright (c) 2017 simple 

*/

/* 
 * File:   simple.h
 * Author: thecarisma
 *
 * Created on July 10, 2017, 1:10 PM
 */


#ifndef simple_vmdll_h
#define simple_vmdll_h
#ifdef _WIN32
#include <windows.h>
#define LoadDLL(x) LoadLibrary(x)
#define GetDLLBlock GetProcAddress
#define CloseDLL FreeLibrary
typedef HINSTANCE LpHandleType ;
#else
#include <dlfcn.h>
#define LoadDLL(x) dlopen(x, RTLD_LAZY)
#define GetDLLBlock dlsym
#define CloseDLL dlclose
typedef void * LpHandleType ;
#endif
typedef void (*loadlibblockptr)(SimpleState *) ;

void simple_vm_dll_loadblocks ( SimpleState *sState ) ;

void simple_vm_dll_loadlib ( void *pointer ) ;

void simple_vm_dll_closelib ( void *pointer ) ;
#endif
