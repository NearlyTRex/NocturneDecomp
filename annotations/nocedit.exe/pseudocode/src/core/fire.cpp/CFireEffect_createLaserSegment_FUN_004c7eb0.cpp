// Name: core_fire.cpp_CFireEffect_createLaserSegment_FUN_004c7eb0
// Address: 004c7eb0
// Address Range: [[004c7eb0, 004c7f11]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004c7eb0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004c7eb0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

{
  if (0x3f < g_LaserBeamActiveCount) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_004c2420
            (g_LaserBeamPool + g_LaserBeamActiveCount,origin,hit_position,beam_width,
             reticle_intensity,reflection_normal,red,green,blue,halo_spread,0.0);
  g_LaserBeamActiveCount = g_LaserBeamActiveCount + 1;
  return;
}
