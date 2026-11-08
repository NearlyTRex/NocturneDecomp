// Name: FUN_005a6140
// Address: 005a6140
// Address Range: [[005a6140, 005a61ed]]
// Convention: unknown
// Signature: void FUN_005a6140(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a6140(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x10a78);
    fVar1 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
    fVar2 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
    if (_DAT_005ffc9c < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      FUN_0059dcb0(param_1 + 0x10af8,0x3f800000);
      FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
      return;
    }
    FUN_00423850(param_1,iVar3 + 0x20);
    param_1 = param_1 + 0x2b4;
    FUN_00503620(param_1,5,1);
    iVar3 = FUN_005035c0(param_1);
    if (*(int *)(iVar3 + 0x24) == 5) {
      FUN_00503e60(param_1);
      return;
    }
  }
  return;
}
