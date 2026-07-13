// Name: _fclose
// Address: 10005430
// Address Range: [[10005430, 1000546e]]
// Convention: __cdecl
// Signature: int __cdecl _fclose(FILE *_File)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  
  if ((_File->_flag & 0x40) != 0) {
    _File->_flag = 0;
    return -1;
  }
  __lock_file(_File);
  iVar1 = __fclose_lk(_File);
  __unlock_file(_File);
  return iVar1;
}
