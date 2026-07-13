// Name: __ftbuf
// Address: 10005f00
// Address Range: [[10005f00, 10005f37]]
// Convention: __cdecl
// Signature: void __cdecl __ftbuf(int _Flag,FILE *_File)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}
