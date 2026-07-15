// Name: crt_io.c__setmode_FUN_1000e810
// Address: 1000e810
// Address Range: [[1000e810, 1000e877]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__setmode_FUN_1000e810(int fh,int mode)

#include "nocturne.h"

int __cdecl _setmode(int fh,int mode)

{
  int iVar1;
  int *piVar2;
  
  if (((uint)fh < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3)) + 4 +
                (fh & 0x1fU) * 0x24) & 1) != 0)) {
    _lock_fhandle(fh);
    iVar1 = _setmode_lk(fh,mode);
    _unlock_fhandle(fh);
    return iVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  return -1;
}
