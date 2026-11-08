// Name: FUN_0040e5c0
// Address: 0040e5c0
// Address Range: [[0040e5c0, 0040e66f]]
// Convention: unknown
// Signature: int FUN_0040e5c0(undefined4 param_1)

#include "nocturne.h"

int FUN_0040e5c0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_00462500(iVar2 + 0x158);
  *(uint *)(iVar2 + -4) = 0x5db554;
  FUN_004625f0(iVar2,0x5b613c);
  pcVar3 = (char *)0x5b6148;
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
  *(uint *)(iVar2 + 0x1bc) = 0x14;
  *(uint *)(iVar2 + 0x1c0) = 0;
  *(uint *)(iVar2 + 0x1c4) = 0;
  *(uint *)(iVar2 + 0x1c8) = 0;
  *(uint *)(iVar2 + 0x1cc) = 0;
  *(byte *)(iVar2 + 0x1d0) = 0;
  *(uint *)(iVar2 + 0x1f0) = 0;
  return iVar2 + -0x158;
}
