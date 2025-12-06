// Name: core_fire.cpp_CFireEffect_FUN_004c7e60
// Address: 004c7e60
// Address Range: [[004c7e60, 004c7eab]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7e60(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7e60(CFireEffect *this_ptr)

{
  g_CFireEffectFireballsEnd = (CFireball *)((int)&(g_CFireEffectFireballsEnd->base).position.x + 1);
  if (0x3f < (int)g_CFireEffectFireballsEnd) {
    g_CFireEffectFireballsEnd = (CFireball *)0x0;
  }
  core_fire_cpp_FUN_004c17c0();
  return;
}
