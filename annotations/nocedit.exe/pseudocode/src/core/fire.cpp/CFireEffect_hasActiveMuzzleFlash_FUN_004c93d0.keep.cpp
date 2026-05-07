// Name: core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004c93d0
// Address: 004c93d0
// MANUAL RECONSTRUCTION
// Address Range: [[004c93d0, 004c93f9]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004c93d0(CFireEffect *this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004c93d0(CFireEffect *this_ptr)

{
  int i;

  for (i = 0; i < 20; i = i + 1) {
    if (g_MuzzleFlashPool[i].frames_remaining == 1) {
      return 1;
    }
  }
  return 0;
}
