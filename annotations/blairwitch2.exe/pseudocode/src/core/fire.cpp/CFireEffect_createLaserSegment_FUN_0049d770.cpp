// Name: core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770
// Address: 0049d770
// Address Range: [[0049d770, 0049d7d1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0049d770(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0049d770(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

{
  if (0x3f < g_INT_01c965dc) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_00497660
            (g_CLaserBeam_ARRAY_01c965e0 + g_INT_01c965dc,origin,hit_position,beam_width,
             reticle_intensity,reflection_normal,red,green,blue,halo_spread,0.0);
  g_INT_01c965dc = g_INT_01c965dc + 1;
  return;
}
