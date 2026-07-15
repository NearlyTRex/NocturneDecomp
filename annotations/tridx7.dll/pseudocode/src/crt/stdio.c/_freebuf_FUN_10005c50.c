// Name: crt_stdio.c__freebuf_FUN_10005c50
// Address: 10005c50
// Address Range: [[10005c50, 10005c88]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__freebuf_FUN_10005c50(FILE *file)

#include "nocturne.h"

void __cdecl _freebuf(FILE *file)

{
  if (((file->_flag & 0x83U) != 0) && ((file->_flag & 8U) != 0)) {
    free(file->_base);
    file->_ptr = (char *)0x0;
    file->_flag = file->_flag & 0xfffffbf7;
    file->_base = (char *)0x0;
    file->_cnt = 0;
  }
  return;
}
