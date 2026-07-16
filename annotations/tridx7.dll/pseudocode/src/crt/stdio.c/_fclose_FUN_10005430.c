// Name: crt_stdio.c__fclose_FUN_10005430
// Address: 10005430
// Address Range: [[10005430, 1000546e]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__fclose_FUN_10005430(_FILE *file)

#include "nocturne.h"

int __cdecl _fclose(_FILE *file)

{
  int iVar1;
  
  if ((file->_flag & 0x40) != 0) {
    file->_flag = 0;
    return -1;
  }
  _lock_file(file);
  iVar1 = _fclose_lk(file);
  _unlock_file(file);
  return iVar1;
}
