// Name: core_fire.cpp_CFireEffect_createRainDrop_FUN_0048c760
// Address: 0048c760
// Address Range: [[0048c760, 0048c7c1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  (*(code *)**(uint **)(&DAT_01c6ce4c + _DAT_01c6ce14 * 0x38))
            (_DAT_01c6ce14 * 0x38 + 0x1c6ce18,param_2,param_3);
  iVar1 = _DAT_01c6ce14 + 1;
  *(uint *)(&DAT_01c6ce30 + _DAT_01c6ce14 * 0x38) = 0x3e800000;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  _DAT_01c6ce14 = iVar1;
  return;
}
