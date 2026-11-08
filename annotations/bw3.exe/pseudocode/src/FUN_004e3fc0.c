// Name: FUN_004e3fc0
// Address: 004e3fc0
// Address Range: [[004e3fc0, 004e4051]]
// Convention: unknown
// Signature: int FUN_004e3fc0(undefined4 param_1)

#include "nocturne.h"

int FUN_004e3fc0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5e2634;
  pcVar3 = (char *)0x5c6b12;
  *(uint *)(iVar2 + 0x158) = 0x42600000;
  *(uint *)(iVar2 + 0x15c) = 0x40c00000;
  *(uint *)(iVar2 + 0xfc) = 1;
  pcVar4 = (char *)(iVar2 + 0x164);
  *(uint *)(iVar2 + 0x160) = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5c6b17;
  pcVar4 = (char *)(iVar2 + 0x1c8);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2;
}
