// Name: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
// Address: 004b5b30
// Address Range: [[004b5b30, 004b5b87]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  int iVar1;
  
  iVar1 = _DAT_01c58a9c * 0x2c;
  _DAT_01c58a9c = _DAT_01c58a9c + 1;
  if (0x7ff < _DAT_01c58a9c) {
    _DAT_01c58a9c = 0;
  }
  core_fire_cpp_CSmokeParticle_init_FUN_004abeb0
            ((CSmokeParticle *)(&DAT_01c58aa0 + iVar1),position,drag_factor,wind_influence,
             alpha_value);
  return;
}
