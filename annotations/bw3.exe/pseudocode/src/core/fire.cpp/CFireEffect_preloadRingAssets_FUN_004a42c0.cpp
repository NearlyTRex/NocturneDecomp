// Name: core_fire.cpp_CFireEffect_preloadRingAssets_FUN_004a42c0
// Address: 004a42c0
// Address Range: [[004a42c0, 004a42e2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_preloadRingAssets_FUN_004a42c0(CFireEffect *this_ptr,int variant)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_preloadRingAssets_FUN_004a42c0(CFireEffect *this_ptr,int variant)

{
  if (variant == 0) {
    core_fire_cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(this_ptr,2);
    return;
  }
  core_fire_cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(this_ptr,5);
  return;
}
