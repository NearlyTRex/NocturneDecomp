// Name: FUN_00450170
// Address: 00450170
// Address Range: [[00450170, 004501b1]]
// Convention: unknown
// Signature: void FUN_00450170(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450170(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005635b0(0x10000);
  *(int *)(param_1 + 0x1c6c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01cc4800 = "?..\\core\\dlight.cpp" + 1;
  _DAT_01cc4804 = 0x541;
  FUN_004c8440("CDemonLight::allocateFilter - Out of memory");
  return;
}
