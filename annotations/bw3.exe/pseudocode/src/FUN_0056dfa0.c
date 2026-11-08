// Name: FUN_0056dfa0
// Address: 0056dfa0
// Address Range: [[0056dfa0, 0056e0e9]]
// Convention: unknown
// Signature: int FUN_0056dfa0(undefined4 param_1)

#include "nocturne.h"

int FUN_0056dfa0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5e58d4;
  *(uint *)(iVar2 + 0x160) = 0x40a00000;
  *(uint *)(iVar2 + 0x164) = 0x41100000;
  *(uint *)(iVar2 + 0x168) = 0x40a00000;
  *(uint *)(iVar2 + 0x170) = 0;
  *(uint *)(iVar2 + 0x15c) = 0;
  pcVar3 = "nobody";
  *(byte *)(iVar2 + 0x224) = 0;
  *(byte *)(iVar2 + 0x288) = 0;
  *(uint *)(iVar2 + 0x16c) = 0;
  pcVar4 = (char *)(iVar2 + 0x178);
  *(uint *)(iVar2 + 0x174) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "CDemonActor";
  pcVar4 = (char *)(iVar2 + 0x1c8);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x218) = 0;
  *(uint *)(iVar2 + 0x21c) = 0x3e800000;
  *(uint *)(iVar2 + 0x220) = 0x3f800000;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x2f0) = 0;
  *(uint *)(iVar2 + 0x2f4) = 1;
  *(uint *)(iVar2 + 0x2f8) = 0x42c80000;
  *(uint *)(iVar2 + 100) = 0x96;
  *(uint *)(iVar2 + 0x36c) = 0;
  *(uint *)(iVar2 + 0x300) = 0;
  *(uint *)(iVar2 + 0x158) = 0x47c34ff3;
  *(uint *)(iVar2 + 0x304) = 1;
  *(byte *)(iVar2 + 0x308) = 0;
  *(uint *)(iVar2 + 0x370) = 0;
  *(int *)(iVar2 + 0x2fc) = iVar2;
  return iVar2;
}
