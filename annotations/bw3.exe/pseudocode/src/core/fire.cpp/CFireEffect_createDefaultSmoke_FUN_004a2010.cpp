// Name: core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010
// Address: 004a2010
// Address Range: [[004a2010, 004a2030]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect *this_ptr,CVector3f *position)

{
  core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
            (g_CFireEffect_PTR_005fc5a0,position,0.6,(CVector3f *)0x0,0x4000);
  return;
}
