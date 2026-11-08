// Name: FUN_004da900
// Address: 004da900
// Address Range: [[004da900, 004da985]]
// Convention: unknown
// Signature: void FUN_004da900(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da900(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004da860(param_1);
  iVar2 = param_1;
  do {
    iVar1 = FUN_005b849c();
    iVar3 = iVar2 + 4;
    *(float *)(iVar2 + 0x1a4) = (float)iVar1 * _DAT_005db41e * _DAT_005db422 * (float)_DAT_005db42a;
    iVar2 = iVar3;
  } while (iVar3 != param_1 + 400);
  if (*(int *)(param_1 + 0x464) != 0) {
    return;
  }
  iVar2 = FUN_0040c5a0("CAmmo");
  *(int *)(param_1 + 0x464) = iVar2;
  (**(code **)(*(int *)(iVar2 + 0x2b0) + 8))(iVar2);
  *(uint *)(param_1 + 0x45c) = 0;
  return;
}
