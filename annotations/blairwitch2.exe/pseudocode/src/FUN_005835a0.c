// Name: FUN_005835a0
// Address: 005835a0
// Address Range: [[005835a0, 00583600]]
// Convention: unknown
// Signature: void FUN_005835a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005835a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"voicusummon.wav");
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(0x01E661B8 + 0x14d164); iVar3 = iVar3 + 1) {
    iVar1 = FUN_0040c8f0(*(uint *)(iVar2 + 0x14d168 + 0x01E661B8),_DAT_01c264a4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2b4) == 2)) {
      FUN_00486a80(iVar1);
    }
    iVar2 = iVar2 + 4;
  }
  return;
}
