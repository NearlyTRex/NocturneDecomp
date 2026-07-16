// Name: crt_stdio.c__fclose_lk_FUN_10005470
// Address: 10005470
// Address Range: [[10005470, 100054ce]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__fclose_lk_FUN_10005470(_FILE *file)

#include "nocturne.h"

int __cdecl _fclose_lk(_FILE *file)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((file->_flag & 0x83) != 0) {
    iVar2 = _flush(file);
    _freebuf(file);
    iVar1 = _close(file->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (file->_tmpfname != (char *)0x0) {
      free(file->_tmpfname);
      file->_tmpfname = (char *)0x0;
    }
  }
  file->_flag = 0;
  return iVar2;
}
