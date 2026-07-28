// Name: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
// Address: 0048afe0
// Address Range: [[0048afe0, 0048b037]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  int iVar1;
  
  iVar1 = _DAT_01c0a13c * 0x2c;
  _DAT_01c0a13c = _DAT_01c0a13c + 1;
  if (0x7ff < _DAT_01c0a13c) {
    _DAT_01c0a13c = 0;
  }
  core_fire_cpp_CSmokeParticle_init_FUN_00482780
            ((CSmokeParticle *)(&DAT_01c0a140 + iVar1),position,drag_factor,wind_influence,
             alpha_value);
  return;
}
