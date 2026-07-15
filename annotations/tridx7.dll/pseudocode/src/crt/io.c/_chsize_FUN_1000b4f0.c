// Name: crt_io.c__chsize_FUN_1000b4f0
// Address: 1000b4f0
// Address Range: [[1000b4f0, 1000b557]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__chsize_FUN_1000b4f0(int fh,long size)

#include "nocturne.h"

int __cdecl _chsize(int fh,long size)

{
  int iVar1;
  int *piVar2;
  
  if (((uint)fh < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3)) + 4 +
                (fh & 0x1fU) * 0x24) & 1) != 0)) {
    _lock_fhandle(fh);
    iVar1 = _chsize_lk(fh,size);
    _unlock_fhandle(fh);
    return iVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  return -1;
}
