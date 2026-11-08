// Name: FUN_0043c2a0
// Address: 0043c2a0
// Address Range: [[0043c2a0, 0043c2f0]]
// Convention: unknown
// Signature: void FUN_0043c2a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c2a0(int param_1)

{
  int iVar1;
  
  FUN_0043c300(param_1);
  iVar1 = FUN_005a40df(*(int *)(param_1 + 0x104) << 2);
  *(int *)(param_1 + 0x3aafc) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\cloth.cpp";
  _DAT_01d71de4 = 0x77;
  FUN_004e4330("CCloth::allocMemory - Out of memory");
  return;
}
