// Name: FUN_005ac200
// Address: 005ac200
// Address Range: [[005ac200, 005ac2e3]]
// Convention: unknown
// Signature: void FUN_005ac200(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ac200(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  iVar1 = *(int *)(iVar1 + 0x24);
  fVar2 = (float)FUN_00503e60(param_1 + 0x2b4);
  if ((iVar1 == 3) && (fVar2 < (float)_DAT_005f0df6)) {
    FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
  }
  if (iVar1 != 7) {
    FUN_00503620(param_1 + 0x2b4,3,1);
    return;
  }
  FUN_00503620(param_1 + 0x2b4,0,1);
  *(uint *)(param_1 + 0x11394) = _DAT_00600c50;
  FUN_0059d7f0(param_1 + 0x10af8,"ChaseComplete","MeleeAttack");
  FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
  return;
}
