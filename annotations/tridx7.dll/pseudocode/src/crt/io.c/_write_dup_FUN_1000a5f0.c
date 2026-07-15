// Name: crt_io.c__write_dup_FUN_1000a5f0
// Address: 1000a5f0
// Address Range: [[1000a5f0, 1000a667]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__write_dup_FUN_1000a5f0(int file_handle,void *buf,uint max_char_count)

#include "nocturne.h"

int __cdecl _write_dup(int file_handle,void *buf,uint max_char_count)

{
  long lVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)file_handle < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(file_handle & 0xffffffe7U) >> 3)) + 4 +
                (file_handle & 0x1fU) * 0x24) & 1) != 0)) {
    _lock_fhandle(file_handle);
    lVar1 = _lseek_lk(file_handle,(long)buf,max_char_count);
    _unlock_fhandle(file_handle);
    return lVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}
