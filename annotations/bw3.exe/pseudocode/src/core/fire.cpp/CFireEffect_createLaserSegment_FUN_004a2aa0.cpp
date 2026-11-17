// Name: core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0
// Address: 004a2aa0
// Address Range: [[004a2aa0, 004a2b01]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004a2aa0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004a2aa0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)

{
  if (0x3f < g_INT_01cf5088) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_0049b030
            (g_CLaserBeam_ARRAY_01cf508c + g_INT_01cf5088,origin,hit_position,beam_width,
             reticle_intensity,reflection_normal,red,green,blue,halo_spread,0.0);
  g_INT_01cf5088 = g_INT_01cf5088 + 1;
  return;
}
