// Name: FUN_0050f0c0
// Address: 0050f0c0
// Address Range: [[0050f0c0, 0050f1a6]]
// Convention: unknown
// Signature: int FUN_0050f0c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050f0c0(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_004a0410(param_1);
  iVar4 = FUN_0043e5c0(iVar4 + 0xc330);
  iVar4 = FUN_00522fa0(iVar4 + 0x3ab60);
  *(byte ***)(iVar4 + -0x46d3c) = &PTR_FUN_006039e4;
  *(uint *)(iVar4 + -0x43ea4) = 0x3f000000;
  pcVar5 = "CGhoul";
  *(uint *)(iVar4 + -0x43ea0) = 0x3f800000;
  uVar2 = _DAT_006039cc;
  *(byte *)(iVar4 + -0x3ac28) = 0;
  uVar3 = _DAT_006039d0;
  *(byte *)(iVar4 + -0x3abc4) = 0;
  *(uint *)(iVar4 + -0x43e9c) = uVar2;
  *(uint *)(iVar4 + -0x43e98) = uVar3;
  *(uint *)(iVar4 + -0x30) = 0;
  pcVar6 = (char *)(iVar4 + -0x28);
  *(uint *)(iVar4 + -0x2c) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0xc30) = 0;
  *(uint *)(iVar4 + 0xc2c) = 0xbf800000;
  *(uint *)(iVar4 + -0x46d88) = 0x10000;
  *(uint *)(iVar4 + -0x46d84) = 0x10000;
  *(uint *)(iVar4 + -0x46d80) = 0x10000;
  return iVar4 + -0x46e90;
}
