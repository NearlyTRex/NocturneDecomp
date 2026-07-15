// Name: crt_stdio.c__fflush_lk_FUN_10005cd0
// Address: 10005cd0
// Address Range: [[10005cd0, 10005d0b]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__fflush_lk_FUN_10005cd0(FILE *file)

#include "nocturne.h"

int __cdecl _fflush_lk(FILE *file)

{
  int iVar1;
  
  iVar1 = _flush(file);
  if (iVar1 != 0) {
    return -1;
  }
  if ((file->_flag & 0x4000) != 0) {
    iVar1 = _commit(file->_file);
    return (iVar1 == 0) - 1;
  }
  return 0;
}
