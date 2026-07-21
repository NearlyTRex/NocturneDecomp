// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_0048c530
// Address: 0048c530
// Address Range: [[0048c530, 0048c586]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0048c530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0048c530(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  core_fire_cpp_CTrail_activate_FUN_004892c0
            (_DAT_01c676c8 * 0x24 + 0x1c676cc,param_2,param_3,param_4,param_5,param_6);
  _DAT_01c676c8 = _DAT_01c676c8 + 1;
  if (_DAT_01c676c8 < 100) {
    return;
  }
  _DAT_01c676c8 = 0;
  return;
}
