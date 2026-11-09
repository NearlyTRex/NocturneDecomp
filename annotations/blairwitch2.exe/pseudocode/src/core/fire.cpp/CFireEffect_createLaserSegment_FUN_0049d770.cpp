// Name: core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770
// Address: 0049d770
// Address Range: [[0049d770, 0049d7d1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0049d770(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0049d770(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

{
  if (0x3f < _DAT_01c965dc) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_00497660
            ((CLaserBeam *)(_DAT_01c965dc * 0x40 + 0x1c965e0),origin,hit_position,beam_width,
             reticle_intensity,reflection_normal,red,green,blue,halo_spread,0.0);
  _DAT_01c965dc = _DAT_01c965dc + 1;
  return;
}
