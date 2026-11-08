// Name: FUN_00550b70
// Address: 00550b70
// Address Range: [[00550b70, 00550bb2]]
// Convention: unknown
// Signature: bool FUN_00550b70(undefined4 param_1)

#include "nocturne.h"

bool FUN_00550b70(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00552b30();
  if (iVar1 < 1) {
    iVar1 = FUN_0054d3a0(param_1,0);
    return iVar1 != 0;
  }
  iVar1 = FUN_0054d3a0(param_1,1);
  if (iVar1 == 0) {
    return false;
  }
  FUN_00551440();
  return true;
}
