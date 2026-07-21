// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710
// Address: 0048c710
// Address Range: [[0048c710, 0048c75e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710(uint param_1,uint param_2,uint param_3)

{
  (*(code *)**(uint **)(&DAT_01c69648 + _DAT_01c69610 * 0x38))
            (_DAT_01c69610 * 0x38 + 0x1c69614,param_2,param_3);
  _DAT_01c69610 = _DAT_01c69610 + 1;
  if (_DAT_01c69610 < 0x100) {
    return;
  }
  _DAT_01c69610 = 0;
  return;
}
