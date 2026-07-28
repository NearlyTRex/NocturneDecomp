// Name: core_fire.cpp_CFireEffect_createLaserSegment_FUN_0048b370
// Address: 0048b370
// Address Range: [[0048b370, 0048b3d1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

{
  if (0x3f < _DAT_01c5c700) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_004858f0
            (_DAT_01c5c700 * 0x40 + 0x1c5c704,origin,hit_position,beam_width,reticle_intensity,
             reflection_normal,red,green,blue,halo_spread,0);
  _DAT_01c5c700 = _DAT_01c5c700 + 1;
  return;
}
