// Name: crt_io.c__findclose_FUN_00602380
// Address: 00602380
// Address Range: [[00602380, 00602398]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__findclose_FUN_00602380(HANDLE find_handle)

#include "nocturne.h"

int __cdecl _findclose(HANDLE find_handle)

{
  BOOL BVar1;
  
  BVar1 = (*g_FindCloseFunc)(find_handle);
  return (BVar1 == 1) - 1;
}
