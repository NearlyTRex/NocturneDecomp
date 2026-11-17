// Name: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560
// Address: 004a2560
// Address Range: [[004a2560, 004a25b7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  CSmokeParticle *this_ptr_00;
  int iVar1;
  
  iVar1 = g_INT_01c74e9c + 1;
  this_ptr_00 = g_CSmokeParticle_ARRAY_01c74ea0 + g_INT_01c74e9c;
  g_INT_01c74e9c = iVar1;
  if (0x7ff < iVar1) {
    g_INT_01c74e9c = 0;
  }
  core_fire_cpp_CSmokeParticle_init_FUN_00496d60
            (this_ptr_00,position,drag_factor,wind_influence,alpha_value);
  return;
}
