// Name: core_fire.cpp_CFireEffect_createLaserCone_FUN_004a2b10
// Address: 004a2b10
// Address Range: [[004a2b10, 004a2b6e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_004a2b10(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_004a2b10(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

{
  if (0x3f < g_LaserBeamActiveCount) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_0049b030
            (g_LaserBeamPool + g_LaserBeamActiveCount,origin,hit_position,beam_width,0.0,
             (CVector3f *)0x0,red,green,blue,0.02f,cone_angle);
  g_LaserBeamActiveCount = g_LaserBeamActiveCount + 1;
  return;
}
