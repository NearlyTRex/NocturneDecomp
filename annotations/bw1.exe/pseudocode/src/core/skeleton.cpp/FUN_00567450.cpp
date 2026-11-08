// Name: FUN_00567450
// Address: 00567450
// Address Range: [[00567450, 005674c9]]
// Convention: unknown
// Signature: void FUN_00567450(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00567450(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_005674d0(param_1);
  iVar1 = FUN_00569eb0(param_1);
  iVar1 = *(int *)(iVar1 + 0x2c);
  iVar2 = FUN_005c1268(iVar1 * 0xc);
  *(int *)(param_1 + 0x2324) = iVar2;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x2320) = 0xffffffff;
    return;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x919;
  FUN_005030e0("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  *(uint *)(param_1 + 0x2320) = 0xffffffff;
  return;
}
