// Name: crt_io.c__setmode_lk_FUN_1000e880
// Address: 1000e880
// Address Range: [[1000e880, 1000e8e8]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__setmode_lk_FUN_1000e880(uint fh,int mode)

#include "nocturne.h"

int __cdecl _setmode_lk(uint fh,int mode)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  
  pbVar1 = (byte *)(*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7) >> 3)) + 4 +
                   (fh & 0x1f) * 0x24);
  bVar2 = *pbVar1;
  if (mode == 0x8000) {
    bVar4 = bVar2 & 0x7f;
  }
  else {
    if (mode != 0x4000) {
      piVar3 = _errno();
      *piVar3 = 0x16;
      return -1;
    }
    bVar4 = bVar2 | 0x80;
  }
  *pbVar1 = bVar4;
  return (-(uint)((bVar2 & 0x80) == 0) & 0x4000) + 0x4000;
}
