// Name: FUN_00547370
// Address: 00547370
// Address Range: [[00547370, 005473db]]
// Convention: unknown
// Signature: void FUN_00547370(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547370(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x2230) < 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0xd32;
    FUN_004e4500("CDeformableModelInstance::renderPolygons called but LOD is not set!");
  }
  uVar1 = FUN_00547810(param_1,*(uint *)(param_1 + 0x2230),param_1 + 0x2140,param_1 + 0x21b8,
                       param_2,param_3);
  FUN_00541a60(uVar1);
  return;
}
