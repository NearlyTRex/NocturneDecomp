// Name: crt_stdio.c_CreateFileVariadic_FUN_00609074
// Address: 00609074
// Address Range: [[00609074, 0060909d]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_CreateFileVariadic_FUN_00609074(char *filename,int access_mode,int share_mode,...)

#include "nocturne.h"

int __cdecl
crt_stdio_c_CreateFileVariadic_FUN_00609074(char *filename,int access_mode,int share_mode,...)

{
  HANDLE pvVar1;
  va_list_t variadic_args;
  
  variadic_args = &stack0x00000010;
  pvVar1 = crt_stdio_c_CreateFileImpl_FUN_006090a0(filename,access_mode,share_mode,&variadic_args);
  return (int)pvVar1;
}
