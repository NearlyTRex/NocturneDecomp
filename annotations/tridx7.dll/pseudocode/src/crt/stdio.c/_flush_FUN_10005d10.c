// Name: crt_stdio.c__flush_FUN_10005d10
// Address: 10005d10
// Address Range: [[10005d10, 10005d73]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__flush_FUN_10005d10(_FILE *file)

#include "nocturne.h"

int __cdecl _flush(_FILE *file)

{
  uint uVar1;
  uint max_char_count;
  int iVar2;
  
  iVar2 = 0;
  if ((((byte)file->_flag & 3) == 2) && ((file->_flag & 0x108U) != 0)) {
    max_char_count = (int)file->_ptr - (int)file->_base;
    if (0 < (int)max_char_count) {
      uVar1 = _write(file->_file,file->_base,max_char_count);
      if (uVar1 == max_char_count) {
        if ((file->_flag & 0x80U) != 0) {
          file->_flag = file->_flag & 0xfffffffd;
        }
      }
      else {
        file->_flag = file->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  file->_ptr = file->_base;
  file->_cnt = 0;
  return iVar2;
}
