// Name: crt_stdio.c___CClose_FUN_00601ee4
// Address: 00601ee4
// Address Range: [[00601ee4, 00601f09]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c___CClose_FUN_00601ee4(_FILE *file_handle,int close_flags)

#include "nocturne.h"

int __cdecl __CClose(_FILE *file_handle,int close_flags)

{
  int iVar1;
  
  iVar1 = _fclose(file_handle,close_flags);
  __freefp(file_handle);
  return iVar1;
}
