// Name: core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
// Address: 0048b1c0
// Address Range: [[0048b1c0, 0048b21d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_01c4f088 * 0x9c;
  _DAT_01c4f088 = _DAT_01c4f088 + 1;
  if (0xff < _DAT_01c4f088) {
    _DAT_01c4f088 = 0;
  }
  core_fire_cpp_CGlassParticle_init_FUN_004850d0
            (iVar1 + 0x1c4f08c,param_2,param_3,param_4,param_5,param_6);
  return;
}
