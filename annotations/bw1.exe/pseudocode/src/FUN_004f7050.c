// Name: FUN_004f7050
// Address: 004f7050
// Address Range: [[004f7050, 004f70d4]]
// Convention: unknown
// Signature: void FUN_004f7050(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f7050(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004f6fa0(param_1);
  iVar2 = param_1;
  do {
    iVar1 = FUN_005c084c();
    iVar3 = iVar2 + 4;
    *(float *)(iVar2 + 0x1a4) = (float)iVar1 * _DAT_005e6064 * _DAT_005e6068 * (float)_DAT_005e6070;
    iVar2 = iVar3;
  } while (iVar3 != param_1 + 400);
  if (*(int *)(param_1 + 0x464) != 0) {
    return;
  }
  iVar2 = FUN_0040c2b0("CAmmo");
  *(int *)(param_1 + 0x464) = iVar2;
  (*(code *)**(uint **)(iVar2 + 0x154))(iVar2);
  *(uint *)(param_1 + 0x468) = 0;
  return;
}
