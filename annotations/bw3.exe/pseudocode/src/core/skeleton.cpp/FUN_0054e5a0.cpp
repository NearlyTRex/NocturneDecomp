// Name: FUN_0054e5a0
// Address: 0054e5a0
// Address Range: [[0054e5a0, 0054e60b]]
// Convention: unknown
// Signature: void FUN_0054e5a0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054e5a0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x2320) < 0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0xd39;
    FUN_004e4330("CDeformableModelInstance::renderPolygons called but LOD is not set!");
  }
  uVar1 = FUN_0054ea40(param_1,*(uint *)(param_1 + 0x2320),param_1 + 0x2140,param_1 + 0x2230,
                       param_2,param_3);
  FUN_00548c70(uVar1);
  return;
}
