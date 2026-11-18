// Name: core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0
// Address: 0048c8a0
// Address Range: [[0048c8a0, 0048c8c9]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0(CFireEffect *this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0(CFireEffect *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = g_MuzzleFlashPool[0].frames_remaining;
  while( true ) {
    if (iVar1 == 1) {
      return 1;
    }
    if (0x72f < iVar2 + 0x5c) break;
    iVar1 = *(int *)((int)&g_MuzzleFlashPool[1].frames_remaining + iVar2);
    iVar2 = iVar2 + 0x5c;
  }
  return 0;
}
