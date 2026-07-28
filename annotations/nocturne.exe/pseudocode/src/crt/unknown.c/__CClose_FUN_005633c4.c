// Name: crt_unknown.c___CClose_FUN_005633c4
// Address: 005633c4
// Address Range: [[005633c4, 005633e9]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c___CClose_FUN_005633c4(_FILE *file_handle,int close_flags)

#include "nocturne.h"

int __cdecl __CClose(_FILE *file_handle,int close_flags)

{
  int iVar1;
  
  iVar1 = _fclose(file_handle,close_flags);
  __freefp(file_handle);
  return iVar1;
}
