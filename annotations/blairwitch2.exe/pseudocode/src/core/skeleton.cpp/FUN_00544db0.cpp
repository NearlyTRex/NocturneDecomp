// Name: FUN_00544db0
// Address: 00544db0
// Address Range: [[00544db0, 00544e29]]
// Convention: unknown
// Signature: void FUN_00544db0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00544db0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00544e30(param_1);
  iVar1 = FUN_00547810(param_1);
  iVar1 = *(int *)(iVar1 + 0x2c);
  iVar2 = FUN_005b8df8(iVar1 * 0xc);
  *(int *)(param_1 + 0x2234) = iVar2;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x2230) = 0xffffffff;
    return;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x909;
  FUN_004e4500("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  *(uint *)(param_1 + 0x2230) = 0xffffffff;
  return;
}
