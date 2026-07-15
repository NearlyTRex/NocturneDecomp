// Name: crt_io.c__read_FUN_1000b6a0
// Address: 1000b6a0
// Address Range: [[1000b6a0, 1000b717]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__read_FUN_1000b6a0(int fh,void *buf,uint cnt)

#include "nocturne.h"

int __cdecl _read(int fh,void *buf,uint cnt)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)fh < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3)) + 4 +
                (fh & 0x1fU) * 0x24) & 1) != 0)) {
    _lock_fhandle(fh);
    iVar1 = _read_lk(fh,buf,cnt);
    _unlock_fhandle(fh);
    return iVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}
