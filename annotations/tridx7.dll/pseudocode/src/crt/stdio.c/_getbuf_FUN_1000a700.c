// Name: crt_stdio.c__getbuf_FUN_1000a700
// Address: 1000a700
// Address Range: [[1000a700, 1000a74a]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__getbuf_FUN_1000a700(FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _getbuf(FILE *file)

{
  char *pcVar1;
  
  _DAT_10017308 = _DAT_10017308 + 1;
  pcVar1 = (char *)malloc(0x1000);
  file->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    file->_flag = file->_flag | 4;
    file->_base = (char *)&file->_charbuf;
    file->_bufsiz = 2;
  }
  else {
    file->_flag = file->_flag | 8;
    file->_bufsiz = 0x1000;
  }
  file->_ptr = file->_base;
  file->_cnt = 0;
  return;
}
