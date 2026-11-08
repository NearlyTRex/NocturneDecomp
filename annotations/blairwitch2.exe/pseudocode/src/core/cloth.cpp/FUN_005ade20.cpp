// Name: FUN_005ade20
// Address: 005ade20
// Address Range: [[005ade20, 005ade70]]
// Convention: unknown
// Signature: void FUN_005ade20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ade20(int param_1)

{
  int iVar1;
  
  FUN_005ade80(param_1);
  iVar1 = FUN_005b8df8(*(int *)(param_1 + 0x104) << 2);
  *(int *)(param_1 + 0x3aafc) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\cloth.cpp";
  _DAT_01d046a4 = 0x77;
  FUN_004e4500("CCloth::allocMemory - Out of memory");
  return;
}
