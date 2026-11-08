// Name: FUN_0040ee40
// Address: 0040ee40
// Address Range: [[0040ee40, 0040eedc]]
// Convention: unknown
// Signature: int FUN_0040ee40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040ee40(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_00487db0(param_1);
  pcVar5 = (char *)0x5cb369;
  *(uint *)(iVar4 + 0x2b0) = 0x5f2684;
  FUN_005478b0(iVar4 + 0x2b4,0x5cb35e);
  uVar3 = _DAT_005f267c;
  uVar2 = _DAT_005f2678;
  *(uint *)(iVar4 + 0x3430) = 0x3f19999a;
  *(uint *)(iVar4 + 0x3434) = 0x40000000;
  pcVar6 = (char *)(iVar4 + 0x10af8);
  *(uint *)(iVar4 + 0x3438) = uVar2;
  *(uint *)(iVar4 + 0x343c) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0x280c) = 2;
  *(uint *)(iVar4 + 0x259c) = 0x40490fdb;
  return iVar4;
}
