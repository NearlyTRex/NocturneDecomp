// Name: FUN_005735a0
// Address: 005735a0
// Address Range: [[005735a0, 005735e2]]
// Convention: unknown
// Signature: bool FUN_005735a0(undefined4 param_1)

#include "nocturne.h"

bool FUN_005735a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00575560();
  if (iVar1 < 1) {
    iVar1 = FUN_0056fa10(param_1,0);
    return iVar1 != 0;
  }
  iVar1 = FUN_0056fa10(param_1,1);
  if (iVar1 == 0) {
    return false;
  }
  FUN_00573e70();
  return true;
}
