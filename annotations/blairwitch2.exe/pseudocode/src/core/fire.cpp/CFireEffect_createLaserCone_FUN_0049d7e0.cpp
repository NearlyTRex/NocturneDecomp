// Name: core_fire.cpp_CFireEffect_createLaserCone_FUN_0049d7e0
// Address: 0049d7e0
// Address Range: [[0049d7e0, 0049d83e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_0049d7e0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_0049d7e0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

{
  if (0x3f < g_LaserBeamActiveCount) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_00497660
            (g_LaserBeamPool + g_LaserBeamActiveCount,origin,hit_position,beam_width,0.0,
             (CVector3f *)0x0,red,green,blue,0.02f,cone_angle);
  g_LaserBeamActiveCount = g_LaserBeamActiveCount + 1;
  return;
}
