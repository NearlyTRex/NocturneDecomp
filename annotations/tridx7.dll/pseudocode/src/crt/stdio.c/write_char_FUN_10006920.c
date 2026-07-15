// Name: crt_stdio.c_write_char_FUN_10006920
// Address: 10006920
// Address Range: [[10006920, 10006960]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_write_char_FUN_10006920(int ch,FILE *file,int *pnumwritten)

#include "nocturne.h"

void __cdecl write_char(int ch,FILE *file,int *pnumwritten)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = file->_cnt + -1;
  file->_cnt = iVar1;
  if (iVar1 < 0) {
    uVar2 = _flsbuf(ch,file);
  }
  else {
    *file->_ptr = (char)ch;
    uVar2 = (uint)(byte)*file->_ptr;
    file->_ptr = file->_ptr + 1;
  }
  if (uVar2 == 0xffffffff) {
    *pnumwritten = -1;
    return;
  }
  *pnumwritten = *pnumwritten + 1;
  return;
}
