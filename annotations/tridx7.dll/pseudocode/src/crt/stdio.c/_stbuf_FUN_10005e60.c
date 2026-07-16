// Name: crt_stdio.c__stbuf_FUN_10005e60
// Address: 10005e60
// Address Range: [[10005e60, 10005ef1]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__stbuf_FUN_10005e60(_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl _stbuf(_FILE *file)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = _isatty(file->_file);
  if (iVar3 == 0) {
    return 0;
  }
  if (file == (_FILE *)&DAT_100170a8) {
    iVar3 = 0;
  }
  else {
    if (file != (_FILE *)&DAT_100170c8) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_10017308 = _DAT_10017308 + 1;
  if ((file->_flag & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &DAT_10016d38 + iVar3;
  if (*piVar1 == 0) {
    pvVar4 = malloc(0x1000);
    *piVar1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
  }
  pcVar2 = (char *)*piVar1;
  file->_base = pcVar2;
  file->_ptr = pcVar2;
  file->_bufsiz = 0x1000;
  file->_cnt = 0x1000;
  file->_flag = file->_flag | 0x1102;
  return 1;
}
