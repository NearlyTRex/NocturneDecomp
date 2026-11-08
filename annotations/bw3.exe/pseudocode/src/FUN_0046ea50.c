// Name: FUN_0046ea50
// Address: 0046ea50
// Address Range: [[0046ea50, 0046eb2e]]
// Convention: unknown
// Signature: int FUN_0046ea50(undefined4 param_1)

#include "nocturne.h"

int FUN_0046ea50(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_00462500(iVar2 + 0x158);
  *(uint *)(iVar2 + -4) = 0x5ded24;
  FUN_004625f0(iVar2,0x5bc703);
  *(uint *)(iVar2 + 0x17c) = 2;
  *(uint *)(iVar2 + 0x180) = 1;
  *(uint *)(iVar2 + 0x1b4) = 0;
  *(uint *)(iVar2 + 0x1b0) = *(uint *)(iVar2 + 0x1b4);
  *(uint *)(iVar2 + 0x1ac) = *(uint *)(iVar2 + 0x1b0);
  *(uint *)(iVar2 + 0x188) = 0x40a00000;
  *(uint *)(iVar2 + 0x18c) = 0x41200000;
  *(uint *)(iVar2 + 0x184) = 0;
  pcVar3 = (char *)0x5bc70e;
  *(uint *)(iVar2 + 400) = 0;
  *(uint *)(iVar2 + 0x1b8) = 0x41200000;
  pcVar4 = (char *)(iVar2 + 0x1bc);
  *(uint *)(iVar2 + 0x1e0) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1dc) = 0;
  return iVar2 + -0x158;
}
