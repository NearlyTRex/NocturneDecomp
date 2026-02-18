// Name: core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004c7620
// Address: 004c7620
// Address Range: [[004c7620, 004c7640]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004c7620(CFireEffect *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004c7620(CFireEffect *this_ptr,CVector3f *position)

{
  core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
            (g_CFireEffectPtr,position,0.6,(CVector3f *)0x0,0xffff);
  return;
}
