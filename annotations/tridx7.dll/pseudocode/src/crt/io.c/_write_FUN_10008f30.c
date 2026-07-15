// Name: crt_io.c__write_FUN_10008f30
// Address: 10008f30
// Address Range: [[10008f30, 10008fa7]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__write_FUN_10008f30(int file_handle,void *buf,uint max_char_count)

#include "nocturne.h"

int __cdecl _write(int file_handle,void *buf,uint max_char_count)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)file_handle < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(file_handle & 0xffffffe7U) >> 3)) + 4 +
                (file_handle & 0x1fU) * 0x24) & 1) != 0)) {
    _lock_fhandle(file_handle);
    iVar1 = _write_lk(file_handle,buf,max_char_count);
    _unlock_fhandle(file_handle);
    return iVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}
