// Name: core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0
// Address: 004b60e0
// Address Range: [[004b60e0, 004b613e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_004b60e0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_004b60e0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

{
  if (0x3f < g_INT_01caf068) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_004b0000
            (g_CLaserBeam_ARRAY_01caf06c + g_INT_01caf068,origin,hit_position,beam_width,0.0,
             (CVector3f *)0x0,red,green,blue,0.02f,cone_angle);
  g_INT_01caf068 = g_INT_01caf068 + 1;
  return;
}
