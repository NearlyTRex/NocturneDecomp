// Name: __stbuf
// Address: 10005e60
// Address Range: [[10005e60, 10005ef1]]
// Convention: __cdecl
// Signature: int __cdecl __stbuf(FILE *_File)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = FUN_100091b0(_File->_file);
  if (iVar3 == 0) {
    return 0;
  }
  if (_File == (FILE *)&DAT_100170a8) {
    iVar3 = 0;
  }
  else {
    if (_File != (FILE *)&DAT_100170c8) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_10017308 = _DAT_10017308 + 1;
  if ((_File->_flag & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &DAT_10016d38 + iVar3;
  if (*piVar1 == 0) {
    iVar3 = FUN_10008830(0x1000);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}
