// Name: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
// Address: 004b5b30
// Address Range: [[004b5b30, 004b5b87]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)

{
  CSmokeParticle *this_ptr_00;
  int iVar1;
  
  iVar1 = g_SmokeParticleAllocIndex + 1;
  this_ptr_00 = g_SmokeParticlePool + g_SmokeParticleAllocIndex;
  g_SmokeParticleAllocIndex = iVar1;
  if (0x7ff < iVar1) {
    g_SmokeParticleAllocIndex = 0;
  }
  core_fire_cpp_CSmokeParticle_init_FUN_004abeb0
            (this_ptr_00,position,drag_factor,wind_influence,alpha_value);
  return;
}
