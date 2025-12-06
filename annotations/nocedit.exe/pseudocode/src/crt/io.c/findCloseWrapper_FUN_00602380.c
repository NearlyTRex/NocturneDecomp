// Name: crt_io.c_findCloseWrapper_FUN_00602380
// Address: 00602380
// Address Range: [[00602380, 00602398]]
// Convention: __cdecl
// Signature: int crt_io.c_findCloseWrapper_FUN_00602380(HANDLE find_handle)

#include "nocturne.h"

int __cdecl crt_io_c_findCloseWrapper_FUN_00602380(HANDLE find_handle)

{
  BOOL BVar1;
  
  BVar1 = (*PTR_FindClose_00611548)(find_handle);
  return (BVar1 == 1) - 1;
}
