// Name: FUN_005a71e0
// Address: 005a71e0
// Address Range: [[005a71e0, 005a7240]]
// Convention: unknown
// Signature: void FUN_005a71e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a71e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"voicusummon.wav");
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(0x01E82168 + 0x14d164); iVar3 = iVar3 + 1) {
    iVar1 = FUN_0040c600(*(uint *)(iVar2 + 0x14d168 + 0x01E82168),_DAT_01c3f664);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x158) == 2)) {
      FUN_0049f0e0(iVar1);
    }
    iVar2 = iVar2 + 4;
  }
  return;
}
