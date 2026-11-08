// Name: FUN_00583520
// Address: 00583520
// Address Range: [[00583520, 00583596]]
// Convention: unknown
// Signature: void FUN_00583520(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583520(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"voicusummon.wav");
  for (iVar3 = 0; iVar3 < *(int *)(0x01E661B8 + 0x14d164); iVar3 = iVar3 + 1) {
    iVar1 = FUN_0040c8f0(*(uint *)(iVar4 + 0x14d168 + 0x01E661B8),_DAT_01bd3844);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x430) == 2)) {
      iVar2 = FUN_0040d060(0x3f000000);
      if (iVar2 == 0) {
        FUN_0046d560(iVar1);
      }
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
