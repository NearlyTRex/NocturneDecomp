// Name: core_fire.cpp_CFireEffect_FUN_004c7d60
// Address: 004c7d60
// Address Range: [[004c7d60, 004c7daf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_FUN_004c7d60(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7d60(CFireEffect *this_ptr)

{
  g_CFireEffectGlassParticlesEnd =
       (CGlassParticle *)((int)&(g_CFireEffectGlassParticlesEnd->base).position.x + 1);
  if (9 < (int)g_CFireEffectGlassParticlesEnd) {
    g_CFireEffectGlassParticlesEnd = (CGlassParticle *)0x0;
  }
  core_fire_cpp_FUN_004c2170();
  return;
}
