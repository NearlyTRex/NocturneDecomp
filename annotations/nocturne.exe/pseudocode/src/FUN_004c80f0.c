// Name: FUN_004c80f0
// Address: 004c80f0
// Address Range: [[004c80f0, 004c8181]]
// Convention: unknown
// Signature: int FUN_004c80f0(undefined4 param_1)

#include "nocturne.h"

int FUN_004c80f0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_FUN_0059fed4;
  pcVar3 = &DAT_00587ad0;
  *(uint *)(iVar2 + 0x150) = 0x42600000;
  *(uint *)(iVar2 + 0x154) = 0x40c00000;
  *(uint *)(iVar2 + 0xfc) = 1;
  pcVar4 = (char *)(iVar2 + 0x15c);
  *(uint *)(iVar2 + 0x158) = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_00587ad5;
  pcVar4 = (char *)(iVar2 + 0x1c0);
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
