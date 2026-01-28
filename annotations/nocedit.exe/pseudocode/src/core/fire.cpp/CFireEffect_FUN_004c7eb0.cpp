// Name: core_fire.cpp_CFireEffect_FUN_004c7eb0
// Address: 004c7eb0
// Address Range: [[004c7eb0, 004c7f11]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_FUN_004c7eb0(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7eb0(CFireEffect *this_ptr)

{
  if (0x3f < (int)g_CFireEffectRocksEnd) {
    return;
  }
  core_fire_cpp_CLaserBeam_FUN_004c2420(g_LaserBeamPool + (int)g_CFireEffectRocksEnd);
  g_CFireEffectRocksEnd = (CRock *)((int)&(g_CFireEffectRocksEnd->base).position.x + 1);
  return;
}
