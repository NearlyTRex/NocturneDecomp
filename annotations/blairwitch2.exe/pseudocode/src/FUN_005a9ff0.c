// Name: FUN_005a9ff0
// Address: 005a9ff0
// Address Range: [[005a9ff0, 005aa190]]
// Convention: unknown
// Signature: void FUN_005a9ff0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a9ff0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x2b4;
  iVar3 = FUN_005035c0(iVar4);
  iVar3 = *(int *)(iVar3 + 0x24);
  if (*(float *)(param_1 + 0x11864) <= 0.0) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
    if (*(int *)(param_1 + 0x10a78) == 0) {
      if (iVar3 != 0) {
        FUN_00503620(iVar4,2,1);
        param_2 = *(float *)(param_1 + 0x11868) - param_2;
        *(float *)(param_1 + 0x11868) = param_2;
        if (param_2 <= 0.0) {
          FUN_00503620(iVar4,0,1);
          return;
        }
      }
    }
    else {
      *(uint *)(param_1 + 0x11868) = 0x40a00000;
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))
                        (*(int *)(param_1 + 0x10a78));
      if ((iVar4 != 0) && (*(int *)(param_1 + 0x10af0) != 0)) {
        *(uint *)(param_1 + 0x10af0) = 0;
        *(uint *)(param_1 + 0x10a78) = 0;
        return;
      }
      iVar4 = FUN_005035c0(param_1 + 0x2b4);
      if (*(int *)(iVar4 + 0x24) == 0) {
        FUN_00503620(param_1 + 0x2b4,2,1);
        return;
      }
      if (*(int *)(iVar4 + 0x24) != 2) {
        FUN_00503620(param_1 + 0x2b4,2,1);
        return;
      }
      FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
      fVar1 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x20);
      fVar2 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x28);
      if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < _DAT_0060088c) {
        FUN_0059d8e0(param_1 + 0x10af8,"?MeleeAttack" + 1);
        return;
      }
    }
  }
  else {
    param_2 = *(float *)(param_1 + 0x11864) - param_2;
    *(float *)(param_1 + 0x11864) = param_2;
    if (param_2 < 0.0) {
      *(uint *)(param_1 + 0x11864) = 0;
    }
  }
  return;
}
