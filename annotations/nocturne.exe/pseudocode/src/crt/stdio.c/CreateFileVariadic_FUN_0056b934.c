// Name: crt_stdio.c_CreateFileVariadic_FUN_0056b934
// Address: 0056b934
// Address Range: [[0056b934, 0056b95d]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_CreateFileVariadic_FUN_0056b934(char *filename,int access_mode,int share_mode,...)

#include "nocturne.h"

int __cdecl CreateFileVariadic(char *filename,int access_mode,int share_mode,...)

{
  HANDLE pvVar1;
  va_list_t local_8;
  
  VA_START_T(local_8, share_mode);
  pvVar1 = CreateFileImpl(filename,access_mode,share_mode,&local_8);
  return (int)pvVar1;
}
