// Name: FUN_00556700
// Address: 00556700
// Address Range: [[00556700, 00556742]]
// Convention: unknown
// Signature: bool FUN_00556700(undefined4 param_1)

#include "nocturne.h"

bool FUN_00556700(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005586d0();
  if (iVar1 < 1) {
    iVar1 = FUN_00552f10(param_1,0);
    return iVar1 != 0;
  }
  iVar1 = FUN_00552f10(param_1,1);
  if (iVar1 == 0) {
    return false;
  }
  FUN_00556fd0();
  return true;
}
