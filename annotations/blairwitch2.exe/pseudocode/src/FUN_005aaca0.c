// Name: FUN_005aaca0
// Address: 005aaca0
// Address Range: [[005aaca0, 005aad69]]
// Convention: unknown
// Signature: void FUN_005aaca0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aaca0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar3 != 0) {
    FUN_00503620(param_1 + 0x2b4,0,1);
    iVar3 = *(int *)(param_1 + 0x10a78);
    *(float *)(param_1 + 0x25a8) = param_2 * (float)_DAT_005f0bfe + *(float *)(param_1 + 0x25a8);
    if ((iVar3 != 0) &&
       (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20),
       fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28),
       SQRT(fVar2 * fVar2 + fVar1 * fVar1) < _DAT_00600a6c)) {
      FUN_0059d8e0(param_1 + 0x10af8,"?MeleeAttack" + 1);
      return;
    }
    if ((float)_DAT_005f0c06 <= *(float *)(param_1 + 0x25a8)) {
      *(float *)(param_1 + 0x11394) = _DAT_00600a6c;
      FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
      return;
    }
  }
  return;
}
