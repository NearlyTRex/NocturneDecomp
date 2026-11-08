// Name: FUN_004a0410
// Address: 004a0410
// Address Range: [[004a0410, 004a0505]]
// Convention: unknown
// Signature: int FUN_004a0410(undefined4 param_1)

#include "nocturne.h"

int FUN_004a0410(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = FUN_0042c080(param_1);
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_005ffb54;
  uVar3 = FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar2 + 0xc1d4) = 0;
  *(uint *)(iVar2 + 0xc258) = 0;
  *(uint *)(iVar2 + 0xc1e8) = 0;
  *(uint *)(iVar2 + 0xc1ec) = 0;
  *(uint *)(iVar2 + 0xc1f0) = 0x42480000;
  *(uint *)(iVar2 + 0xc1d8) = 1;
  *(uint *)(iVar2 + 0xc260) = 0;
  *(uint *)(iVar2 + 0xc1dc) = 0;
  *(byte *)(iVar2 + 0xc1f4) = 0;
  *(uint *)(iVar2 + 0xc1e0) = 0x42c80000;
  pcVar4 = &DAT_005dcac1;
  *(uint *)(iVar2 + 0xc1e4) = 0;
  pcVar5 = (char *)(iVar2 + 0x120);
  *(uint *)(iVar2 + 0xc25c) = 0x40c00000;
  *(uint *)(iVar2 + 0xc264) = 1;
  *(uint *)(iVar2 + 0xc1d0) = uVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x252c) = 0x3fc90fdb;
  return iVar2;
}
