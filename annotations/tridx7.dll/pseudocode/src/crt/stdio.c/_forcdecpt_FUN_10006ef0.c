// Name: crt_stdio.c__forcdecpt_FUN_10006ef0
// Address: 10006ef0
// Address Range: [[10006ef0, 10006f54]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__forcdecpt_FUN_10006ef0(char *buf)

#include "nocturne.h"

void __cdecl _forcdecpt(char *buf)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  
  iVar2 = _tolower((int)*buf);
  if (iVar2 != 0x65) {
    do {
      buf = buf + 1;
      if (DAT_10017690 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10017480 + *buf * 2) & 4;
      }
      else {
        uVar3 = _isctype((int)*buf,4);
      }
    } while (uVar3 != 0);
  }
  cVar4 = *buf;
  *buf = DAT_10017694;
  do {
    buf = buf + 1;
    cVar1 = *buf;
    *buf = cVar4;
    bVar5 = cVar4 != '\0';
    cVar4 = cVar1;
  } while (bVar5);
  return;
}
