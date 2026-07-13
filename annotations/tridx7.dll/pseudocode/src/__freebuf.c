// Name: __freebuf
// Address: 10005c50
// Address Range: [[10005c50, 10005c88]]
// Convention: __cdecl
// Signature: void __cdecl __freebuf(FILE *_File)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_10005b30(_File->_base);
    _File->_ptr = (char *)0x0;
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}
