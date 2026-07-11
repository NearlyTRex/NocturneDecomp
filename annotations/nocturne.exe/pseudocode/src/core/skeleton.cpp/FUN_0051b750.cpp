// Name: FUN_0051b750
// Address: 0051b750
// Address Range: [[0051b750, 0051b7c9]]
// Convention: unknown
// Signature: void FUN_0051b750(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b750(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0051b7d0(param_1);
  iVar1 = FUN_0051e020(param_1);
  iVar1 = *(int *)(iVar1 + 0x2c);
  iVar2 = FUN_00564c18(iVar1 * 0xc);
  *(int *)(param_1 + 0x2234) = iVar2;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x2230) = 0xffffffff;
    return;
  }
  _DAT_01cc4800 = "..\\core\\skeleton.cpp";
  _DAT_01cc4804 = 0x8fa;
  FUN_004c8440("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  *(uint *)(param_1 + 0x2230) = 0xffffffff;
  return;
}
