// Name: FUN_005a70f0
// Address: 005a70f0
// Address Range: [[005a70f0, 005a7150]]
// Convention: unknown
// Signature: void FUN_005a70f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a70f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"?voicusummon.wav" + 1);
  for (iVar2 = 0; iVar2 < *(int *)(0x01E82168 + 0x14d164); iVar2 = iVar2 + 1) {
    iVar1 = FUN_0040c600(*(uint *)(iVar3 + 0x14d168 + 0x01E82168),_DAT_02c8aee8);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc410) != 0)) {
      FUN_005a4eb0(iVar1);
    }
    iVar3 = iVar3 + 4;
  }
  return;
}
