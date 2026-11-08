// Name: FUN_00569a10
// Address: 00569a10
// Address Range: [[00569a10, 00569a7b]]
// Convention: unknown
// Signature: void FUN_00569a10(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00569a10(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x2320) < 0) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0xd42;
    FUN_005030e0("CDeformableModelInstance::renderPolygons called but LOD is not set!");
  }
  uVar1 = FUN_00569eb0(param_1,*(uint *)(param_1 + 0x2320),param_1 + 0x2140,param_1 + 0x2230,
                       param_2,param_3);
  FUN_005640d0(uVar1);
  return;
}
