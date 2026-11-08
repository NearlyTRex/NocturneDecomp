// Name: FUN_005a9ed0
// Address: 005a9ed0
// Address Range: [[005a9ed0, 005a9fe5]]
// Convention: unknown
// Signature: void FUN_005a9ed0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a9ed0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar2 == 0) {
    return;
  }
  FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
  iVar2 = *(int *)(param_1 + 0x10a78);
  if ((iVar2 != 0) &&
     (fVar3 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20),
     fVar1 = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28),
     _DAT_0060088c < SQRT(fVar1 * fVar1 + fVar3 * fVar3))) {
    FUN_0059d8e0(param_1 + 0x10af8,"Sleeping");
    return;
  }
  if (*(int *)(param_1 + 0x1185c) == 0) {
    uVar4 = 3;
  }
  else {
    if (*(int *)(param_1 + 0x1185c) != 1) goto LAB_005a9f63;
    uVar4 = 4;
  }
  FUN_00503620(param_1 + 0x2b4,uVar4,1);
LAB_005a9f63:
  iVar2 = FUN_005035c0(param_1 + 0x2b4);
  iVar2 = *(int *)(iVar2 + 0x24);
  fVar3 = (float)FUN_00503e60(param_1 + 0x2b4);
  if ((iVar2 != 3) && (iVar2 != 4)) {
    return;
  }
  if (fVar3 <= (float)_DAT_005f0a53) {
    return;
  }
  uVar4 = FUN_0040cfc0(0,1);
  *(uint *)(param_1 + 0x1185c) = uVar4;
  return;
}
