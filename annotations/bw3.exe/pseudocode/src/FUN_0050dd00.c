// Name: FUN_0050dd00
// Address: 0050dd00
// Address Range: [[0050dd00, 0050de0a]]
// Convention: unknown
// Signature: int FUN_0050dd00(undefined4 param_1)

#include "nocturne.h"

int FUN_0050dd00(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_00462500(iVar2 + 0x158);
  *(uint *)(iVar2 + -4) = 0x5e31c4;
  FUN_004625f0(iVar2,0x5cbabf);
  pcVar3 = (char *)0x5cbac8;
  pcVar4 = (char *)(iVar2 + 0x17c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5cbacd;
  pcVar4 = (char *)(iVar2 + 0x1e0);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x244) = 1;
  *(uint *)(iVar2 + 0x248) = 0;
  *(uint *)(iVar2 + 0x250) = 0x3f060a92;
  *(byte *)(iVar2 + 0x254) = 0;
  *(byte *)(iVar2 + 0x278) = 0;
  *(byte *)(iVar2 + 0x298) = 0;
  *(uint *)(iVar2 + 0x274) = 0;
  *(uint *)(iVar2 + 0x2d0) = 0;
  *(uint *)(iVar2 + 0x2d4) = 0;
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0;
  *(uint *)(iVar2 + 0x2e4) = 0;
  return iVar2 + -0x158;
}
