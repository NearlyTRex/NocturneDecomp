// Name: __getbuf
// Address: 1000a700
// Address Range: [[1000a700, 1000a74a]]
// Convention: __cdecl
// Signature: void __cdecl __getbuf(FILE *_File)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_10017308 = _DAT_10017308 + 1;
  pcVar1 = (char *)FUN_10008830(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return;
}
