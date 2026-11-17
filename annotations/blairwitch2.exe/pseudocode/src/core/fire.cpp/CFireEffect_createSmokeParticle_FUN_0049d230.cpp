// Name: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
// Address: 0049d230
// Address Range: [[0049d230, 0049d287]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  CSmokeParticle *this_ptr_00;
  int iVar1;
  
  iVar1 = g_INT_01c3f8dc + 1;
  this_ptr_00 = g_CSmokeParticle_ARRAY_01c3f8e0 + g_INT_01c3f8dc;
  g_INT_01c3f8dc = iVar1;
  if (0x7ff < iVar1) {
    g_INT_01c3f8dc = 0;
  }
  core_fire_cpp_CSmokeParticle_init_FUN_00493510
            (this_ptr_00,position,drag_factor,wind_influence,alpha_value);
  return;
}
