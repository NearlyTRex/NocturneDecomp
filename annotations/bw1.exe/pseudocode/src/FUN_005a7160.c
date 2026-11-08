// Name: FUN_005a7160
// Address: 005a7160
// Address Range: [[005a7160, 005a71d6]]
// Convention: unknown
// Signature: void FUN_005a7160(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a7160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"voicusummon.wav");
  for (iVar3 = 0; iVar3 < *(int *)(0x01E82168 + 0x14d164); iVar3 = iVar3 + 1) {
    iVar1 = FUN_0040c600(*(uint *)(iVar4 + 0x14d168 + 0x01E82168),_DAT_01beee00);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2d4) == 2)) {
      iVar2 = FUN_0040cd00(0x3f000000);
      if (iVar2 == 0) {
        FUN_00485a60(iVar1);
      }
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
