// Name: crt_stdio.c_fflush_FUN_10005c90
// Address: 10005c90
// Address Range: [[10005c90, 10005cc8]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fflush_FUN_10005c90(FILE *file)

#include "nocturne.h"

int __cdecl _fflush(FILE *file)

{
  int iVar1;
  
  if (file == (FILE *)0x0) {
    iVar1 = _flsall(0);
    return iVar1;
  }
  _lock_file(file);
  iVar1 = _fflush_lk(file);
  _unlock_file(file);
  return iVar1;
}
