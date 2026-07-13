// Name: __dosmaperr
// Address: 100089a0
// Address Range: [[100089a0, 10008a12]]
// Convention: __cdecl
// Signature: void __cdecl __dosmaperr(ulong param_1)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar1 = (ulong *)FUN_10008a30();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_10017310;
  do {
    if (*puVar1 == param_1) {
      puVar2 = (uint *)FUN_10008a20();
      *puVar2 = *(uint *)(iVar3 * 8 + 0x10017314);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_10017478);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (uint *)FUN_10008a20();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (uint *)FUN_10008a20();
    *puVar2 = 8;
    return;
  }
  puVar2 = (uint *)FUN_10008a20();
  *puVar2 = 0x16;
  return;
}
