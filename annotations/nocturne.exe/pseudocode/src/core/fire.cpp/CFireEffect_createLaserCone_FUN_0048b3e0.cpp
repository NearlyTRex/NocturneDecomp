// Name: core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0
// Address: 0048b3e0
// Address Range: [[0048b3e0, 0048b43e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

{
  if (0x3f < _DAT_01c5c700) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_004858f0
            (g_CLaserBeam_ARRAY_01c5c704 + _DAT_01c5c700,origin,hit_position,beam_width,0.0,
             (CVector3f *)0x0,red,green,blue,0.02f,cone_angle);
  _DAT_01c5c700 = _DAT_01c5c700 + 1;
  return;
}
