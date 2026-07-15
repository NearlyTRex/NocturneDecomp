// Name: crt_io.c__open_osfhandle_FUN_10008d20
// Address: 10008d20
// Address Range: [[10008d20, 10008dd3]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__open_osfhandle_FUN_10008d20(intptr_t osfhandle,int flags)

#include "nocturne.h"

int __cdecl _open_osfhandle(intptr_t osfhandle,int flags)

{
  DWORD DVar1;
  uint fh;
  int *piVar2;
  ulong *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((flags & 8U) != 0) {
    bVar4 = 0x20;
  }
  if ((flags & 0x4000U) != 0) {
    bVar4 = bVar4 | 0x80;
  }
  DVar1 = GetFileType((HANDLE)osfhandle);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    _dosmaperr(DVar1);
    return -1;
  }
  if (DVar1 == 2) {
    bVar4 = bVar4 | 0x40;
  }
  else if (DVar1 == 3) {
    bVar4 = bVar4 | 8;
  }
  fh = _alloc_osfhnd();
  if (fh == 0xffffffff) {
    piVar2 = _errno();
    *piVar2 = 0x18;
    puVar3 = __doserrno();
    *puVar3 = 0;
    return -1;
  }
  _set_osfhnd(fh,osfhandle);
  *(byte *)(*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7) >> 3)) + 4 + (fh & 0x1f) * 0x24) =
       bVar4 | 1;
  _unlock_fhandle(fh);
  return fh;
}
