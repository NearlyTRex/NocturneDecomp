// Name: core_fire.cpp_CFireEffect_createLaserSegment_FUN_0048b370
// Address: 0048b370
// Address Range: [[0048b370, 0048b3d1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

{
  if (0x3f < g_LaserBeamActiveCount) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_004858f0
            (g_LaserBeamPool + g_LaserBeamActiveCount,origin,hit_position,beam_width,
             reticle_intensity,reflection_normal,red,green,blue,halo_spread,0.0);
  g_LaserBeamActiveCount = g_LaserBeamActiveCount + 1;
  return;
}
