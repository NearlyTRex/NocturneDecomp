// Name: FUN_0045d9c0
// Address: 0045d9c0
// Address Range: [[0045d9c0, 0045da0c]]
// Convention: unknown
// Signature: void FUN_0045d9c0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045d9c0(int *param_1)

{
  int iVar1;
  
  FUN_0045da10(param_1);
  iVar1 = FUN_005c08d0(*param_1 * param_1[1]);
  param_1[0x12] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dfilter.cpp";
  _DAT_01d1d404 = 0x8d;
  FUN_005030e0("CDemonFilter::allocMemory - Out of memory");
  return;
}
