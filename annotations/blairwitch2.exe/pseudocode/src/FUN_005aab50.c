// Name: FUN_005aab50
// Address: 005aab50
// Address Range: [[005aab50, 005aac97]]
// Convention: unknown
// Signature: void FUN_005aab50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aab50(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x10a78);
  fVar3 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
  fVar1 = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
  fVar3 = SQRT(fVar1 * fVar1 + fVar3 * fVar3);
  if (_DAT_00600a6c < fVar3) {
    *(float *)(param_1 + 0x11394) = _DAT_00600a6c;
    FUN_0059dcb0(param_1 + 0x10af8,0x3f000000);
    FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
    return;
  }
  FUN_00423850(param_1,iVar2 + 0x20);
  if (_DAT_00600a70 < fVar3) {
    if (_DAT_00600a6c < fVar3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
    }
  }
  else {
    uVar4 = 5;
  }
  iVar2 = FUN_005035c0(param_1 + 0x2b4);
  iVar2 = *(int *)(iVar2 + 0x24);
  if (iVar2 != 0) {
    if ((iVar2 == 5) || (iVar2 == 4)) goto LAB_005aabe3;
    uVar4 = 0;
  }
  FUN_00503620(param_1 + 0x2b4,uVar4,1);
LAB_005aabe3:
  if ((iVar2 == 4) && (fVar3 = (float)FUN_00503e60(param_1 + 0x2b4), (float)_DAT_005f0bde < fVar3))
  {
    *(float *)(param_1 + 0x11394) = _DAT_00600a70;
    FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
    return;
  }
  return;
}
