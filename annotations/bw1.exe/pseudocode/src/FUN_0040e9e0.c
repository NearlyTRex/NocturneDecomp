// Name: FUN_0040e9e0
// Address: 0040e9e0
// Address Range: [[0040e9e0, 0040ea7c]]
// Convention: unknown
// Signature: int FUN_0040e9e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040e9e0(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_004a0410(param_1);
  pcVar5 = (char *)0x5d32d4;
  *(byte ***)(iVar4 + 0x154) = &PTR_FUN_005fb7d4;
  FUN_00569f50(iVar4 + 0x158,0x5d32c9);
  uVar3 = _DAT_005fb7cc;
  uVar2 = _DAT_005fb7c8;
  *(uint *)(iVar4 + 0x2fec) = 0x3f19999a;
  *(uint *)(iVar4 + 0x2ff0) = 0x40000000;
  pcVar6 = (char *)(iVar4 + 0xc268);
  *(uint *)(iVar4 + 0x2ff4) = uVar2;
  *(uint *)(iVar4 + 0x2ff8) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0x27a0) = 2;
  *(uint *)(iVar4 + 0x252c) = 0x40490fdb;
  return iVar4;
}
