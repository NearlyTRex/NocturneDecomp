// Name: FUN_0045daf0
// Address: 0045daf0
// Address Range: [[0045daf0, 0045db31]]
// Convention: unknown
// Signature: void FUN_0045daf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045daf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a3650(0x10000);
  *(int *)(param_1 + 0x1c6c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dlight.cpp";
  _DAT_01d71de4 = 0x547;
  FUN_004e4330("CDemonLight::allocateFilter - Out of memory");
  return;
}
