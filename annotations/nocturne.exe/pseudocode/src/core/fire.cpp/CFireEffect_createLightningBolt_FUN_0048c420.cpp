// Name: core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420
// Address: 0048c420
// Address Range: [[0048c420, 0048c49f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  core_fire_cpp_CLightningBolt_activate_FUN_00488b10
            (_DAT_01c6750c * 0x2c + 0x1c67510,param_2,param_3,param_5);
  _DAT_01c6750c = _DAT_01c6750c + 1;
  if (_DAT_01c6750c < 10) {
    if (param_4 == 0) {
      return;
    }
  }
  else {
    _DAT_01c6750c = 0;
    if (param_4 == 0) {
      return;
    }
  }
  core_set_cpp_FUN_0050e660(0x01E57284,0x42c80000,0,0,0x3f800000);
  return;
}
