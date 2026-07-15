// Name: crt_io.c__close_FUN_10005b50
// Address: 10005b50
// Address Range: [[10005b50, 10005bbd]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__close_FUN_10005b50(int file_handle)

#include "nocturne.h"

int __cdecl _close(int file_handle)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)file_handle < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(file_handle & 0xffffffe7U) >> 3)) + 4 +
                (file_handle & 0x1fU) * 0x24) & 1) != 0)) {
    _lock_fhandle(file_handle);
    iVar1 = _close_lk(file_handle);
    _unlock_fhandle(file_handle);
    return iVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}
