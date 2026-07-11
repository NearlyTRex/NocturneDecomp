// Name: FUN_00526c50
// Address: 00526c50
// Address Range: [[00526c50, 00526c90]]
// Convention: unknown
// Signature: bool FUN_00526c50(undefined4 param_1)

#include "nocturne.h"

bool FUN_00526c50(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005284f0();
  if (iVar1 == 0) {
    iVar1 = FUN_005234b0(param_1,0);
    return iVar1 != 0;
  }
  iVar1 = FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return false;
  }
  FUN_00528890();
  return true;
}
