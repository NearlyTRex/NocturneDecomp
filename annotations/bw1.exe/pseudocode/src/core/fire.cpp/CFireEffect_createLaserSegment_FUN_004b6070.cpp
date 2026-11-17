// Name: core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070
// Address: 004b6070
// Address Range: [[004b6070, 004b60d1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004b6070(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004b6070(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

{
  if (0x3f < g_INT_01caf068) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_004b0000
            (g_CLaserBeam_ARRAY_01caf06c + g_INT_01caf068,origin,hit_position,beam_width,
             reticle_intensity,reflection_normal,red,green,blue,halo_spread,0.0);
  g_INT_01caf068 = g_INT_01caf068 + 1;
  return;
}
