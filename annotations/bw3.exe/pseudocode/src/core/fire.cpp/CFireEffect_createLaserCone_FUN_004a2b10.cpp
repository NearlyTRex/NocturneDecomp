// Name: core_fire.cpp_CFireEffect_createLaserCone_FUN_004a2b10
// Address: 004a2b10
// Address Range: [[004a2b10, 004a2b6e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_004a2b10(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_004a2b10(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)

{
  if (0x3f < _DAT_01cf5088) {
    return;
  }
  core_fire_cpp_CLaserBeam_init_FUN_0049b030
            ((CLaserBeam *)(_DAT_01cf5088 * 0x40 + 0x1cf508c),origin,hit_position,beam_width,0.0,
             (CVector3f *)0x0,red,green,blue,0x3CA3D70A,cone_angle);
  _DAT_01cf5088 = _DAT_01cf5088 + 1;
  return;
}
