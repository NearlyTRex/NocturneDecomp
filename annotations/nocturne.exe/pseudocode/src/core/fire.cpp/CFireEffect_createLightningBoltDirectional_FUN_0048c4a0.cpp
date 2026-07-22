// Name: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
// Address: 0048c4a0
// Address Range: [[0048c4a0, 0048c523]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  core_fire_cpp_CLightningBolt_activateDirectional_FUN_00488b50
            (_DAT_01c6750c * 0x2c + 0x1c67510,param_2,param_3,param_5,param_6);
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
