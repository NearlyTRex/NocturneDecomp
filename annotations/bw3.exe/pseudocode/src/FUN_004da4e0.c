// Name: FUN_004da4e0
// Address: 004da4e0
// Address Range: [[004da4e0, 004da56e]]
// Convention: unknown
// Signature: void FUN_004da4e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da4e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004da440(param_1);
  iVar2 = param_1;
  do {
    iVar1 = FUN_005a35cc();
    iVar3 = iVar2 + 4;
    *(float *)(iVar2 + 0x1a4) = (float)iVar1 * _DAT_005c5f2b * _DAT_005c5f2f * (float)_DAT_005c5f37;
    iVar2 = iVar3;
  } while (iVar3 != param_1 + 400);
  if (*(int *)(param_1 + 0x464) != 0) {
    return;
  }
  iVar2 = FUN_0040c4f0("CAmmo");
  *(int *)(param_1 + 0x464) = iVar2;
  (*(code *)**(uint **)(iVar2 + 0x154))(iVar2);
  *(uint *)(param_1 + 0x468) = 0;
  *(uint *)(param_1 + 0x46c) = 0;
  return;
}
