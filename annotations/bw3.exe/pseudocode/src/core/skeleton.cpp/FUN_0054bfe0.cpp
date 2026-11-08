// Name: FUN_0054bfe0
// Address: 0054bfe0
// Address Range: [[0054bfe0, 0054c059]]
// Convention: unknown
// Signature: void FUN_0054bfe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054bfe0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0054c060(param_1);
  iVar1 = FUN_0054ea40(param_1);
  iVar1 = *(int *)(iVar1 + 0x2c);
  iVar2 = FUN_005a40df(iVar1 * 0xc);
  *(int *)(param_1 + 0x2324) = iVar2;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x2320) = 0xffffffff;
    return;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x910;
  FUN_004e4330("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  *(uint *)(param_1 + 0x2320) = 0xffffffff;
  return;
}
