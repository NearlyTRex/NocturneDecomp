// Name: crt_stdio.c__ftbuf_FUN_10005f00
// Address: 10005f00
// Address Range: [[10005f00, 10005f37]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__ftbuf_FUN_10005f00(int flag,FILE *file)

#include "nocturne.h"

void __cdecl _ftbuf(int flag,FILE *file)

{
  if ((flag != 0) && ((file->_flag & 0x1000) != 0)) {
    _flush(file);
    file->_flag = file->_flag & 0xffffeeff;
    file->_bufsiz = 0;
    file->_ptr = (char *)0x0;
    file->_base = (char *)0x0;
  }
  return;
}
