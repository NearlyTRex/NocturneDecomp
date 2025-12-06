// Name: core_fire.cpp_CFireEffect_FUN_004c7f20
// Address: 004c7f20
// Address Range: [[004c7f20, 004c7f7e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7f20(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7f20(CFireEffect *this_ptr)

{
  if (0x3f < (int)g_CFireEffectRocksEnd) {
    return;
  }
  core_fire_cpp_CLaserBeam_FUN_004c2420(g_LaserBeamPool + (int)g_CFireEffectRocksEnd);
  g_CFireEffectRocksEnd = (CRock *)((int)&(g_CFireEffectRocksEnd->base).position.x + 1);
  return;
}
