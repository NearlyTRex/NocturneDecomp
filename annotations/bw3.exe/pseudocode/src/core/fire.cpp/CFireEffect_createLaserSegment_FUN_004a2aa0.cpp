// Name: core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0
// Address: 004a2aa0
// Address Range: [[004a2aa0, 004a2b01]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004a2aa0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004a2aa0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

{
  if (0x3f < _DAT_01cf5088) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_0049b030
            ((CLaserBeam *)(_DAT_01cf5088 * 0x40 + 0x1cf508c),origin,hit_position,beam_width,
             reticle_intensity,reflection_normal,red,green,blue,halo_spread,0.0);
  _DAT_01cf5088 = _DAT_01cf5088 + 1;
  return;
}
