// Name: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
// Address: 0048afe0
// Address Range: [[0048afe0, 0048b037]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = _DAT_01c0a13c * 0x2c;
  _DAT_01c0a13c = _DAT_01c0a13c + 1;
  if (0x7ff < _DAT_01c0a13c) {
    _DAT_01c0a13c = 0;
  }
  core_fire_cpp_CSmokeParticle_init_FUN_00482780
            (&DAT_01c0a140 + iVar1,param_2,param_3,param_4,param_5);
  return;
}
