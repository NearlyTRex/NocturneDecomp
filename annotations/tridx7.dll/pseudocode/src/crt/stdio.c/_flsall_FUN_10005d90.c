// Name: crt_stdio.c__flsall_FUN_10005d90
// Address: 10005d90
// Address Range: [[10005d90, 10005e5a]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__flsall_FUN_10005d90(int flag)

#include "nocturne.h"

int __cdecl _flsall(int flag)

{
  void *stream;
  _FILE *file;
  int iVar1;
  int iVar2;
  int iVar3;
  int index;
  int local_4;
  
  iVar2 = 0;
  index = 0;
  local_4 = 0;
  _lock(2);
  if (0 < DAT_10241860) {
    iVar3 = 0;
    do {
      stream = *(void **)(DAT_1024085c + iVar3);
      if ((stream != (void *)0x0) && ((*(byte *)((int)stream + 0xc) & 0x83) != 0)) {
        _lock_file2(index,stream);
        file = *(_FILE **)(DAT_1024085c + iVar3);
        if ((file->_flag & 0x83U) != 0) {
          if (flag == 1) {
            iVar1 = _fflush_lk(file);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if (((flag == 0) && ((file->_flag & 2U) != 0)) &&
                  (iVar1 = _fflush_lk(file), iVar1 == -1)) {
            local_4 = -1;
          }
        }
        _unlock_file2(index,*(void **)(DAT_1024085c + iVar3));
      }
      iVar3 = iVar3 + 4;
      index = index + 1;
    } while (index < DAT_10241860);
  }
  _unlock(2);
  if (flag != 1) {
    iVar2 = local_4;
  }
  return iVar2;
}
