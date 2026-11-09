// Name: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
// Address: 0049d230
// Address Range: [[0049d230, 0049d287]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  int iVar1;
  
  iVar1 = _DAT_01c3f8dc * 0x2c;
  _DAT_01c3f8dc = _DAT_01c3f8dc + 1;
  if (0x7ff < _DAT_01c3f8dc) {
    _DAT_01c3f8dc = 0;
  }
  core_fire_cpp_CSmokeParticle_init_FUN_00493510
            ((CSmokeParticle *)(&DAT_01c3f8e0 + iVar1),position,drag_factor,wind_influence,
             alpha_value);
  return;
}
