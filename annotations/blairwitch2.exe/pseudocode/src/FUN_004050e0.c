// Name: FUN_004050e0
// Address: 004050e0
// Address Range: [[004050e0, 00405184]]
// Convention: unknown
// Signature: int FUN_004050e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004050e0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte auStack_28 [4];
  uint uStack_24;
  char acStack_20 [16];
  
  iVar2 = *(int *)(param_1 + 0x14) + _DAT_01c2a370;
  *(int *)(param_1 + 0x14) = iVar2;
  iVar2 = (iVar2 / *(int *)(param_1 + 0x10)) % *(int *)(param_1 + 8);
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0x18) = 1;
    *(int *)(param_1 + 0xc) = iVar2;
  }
  uStack_24 = 0;
  pcVar4 = acStack_20;
  pcVar3 = (char *)(*(int *)(param_1 + 0xc) * 0x20 + param_1 + 0x1c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  FUN_00574e00(auStack_28);
  if (*(int *)(param_1 + 0x18) == 0) {
    return *(int *)(param_1 + 8) * 0x20 + param_1 + 0x1c;
  }
  *(uint *)(param_1 + 0x18) = 0;
  return *(int *)(param_1 + 8) * 0x20 + param_1 + 0x1c;
}
