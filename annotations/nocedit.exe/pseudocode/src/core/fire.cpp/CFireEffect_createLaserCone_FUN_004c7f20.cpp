// Name: core_fire.cpp_CFireEffect_createLaserCone_FUN_004c7f20
// Address: 004c7f20
// Address Range: [[004c7f20, 004c7f7e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_004c7f20(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_004c7f20(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

{
  if (0x3f < g_LaserBeamActiveCount) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_004c2420
            (g_LaserBeamPool + g_LaserBeamActiveCount,origin,hit_position,beam_width,0.0,
             (CVector3f *)0x0,red,green,blue,0.02f,cone_angle);
  g_LaserBeamActiveCount = g_LaserBeamActiveCount + 1;
  return;
}
