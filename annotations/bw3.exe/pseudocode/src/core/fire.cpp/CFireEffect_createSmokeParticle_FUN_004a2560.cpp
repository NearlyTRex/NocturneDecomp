// Name: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560
// Address: 004a2560
// Address Range: [[004a2560, 004a25b7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  int iVar1;
  
  iVar1 = _DAT_01c74e9c * 0x2c;
  _DAT_01c74e9c = _DAT_01c74e9c + 1;
  if (0x7ff < _DAT_01c74e9c) {
    _DAT_01c74e9c = 0;
  }
  core_fire_cpp_CSmokeParticle_init_FUN_00496d60
            ((CSmokeParticle *)(&DAT_01c74ea0 + iVar1),position,drag_factor,wind_influence,
             alpha_value);
  return;
}
