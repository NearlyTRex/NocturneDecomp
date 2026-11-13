// Name: core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360
// Address: 0049e360
// Address Range: [[0049e360, 0049e3d4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

{
  core_fire_cpp_CExplosion_activate_FUN_00498d30
            ((CExplosion *)(_DAT_01c975e0 * 0x1c + 0x1c975e4),position,scale,gore_multiplier);
  _DAT_01c975e0 = _DAT_01c975e0 + 1;
  if (9 < _DAT_01c975e0) {
    _DAT_01c975e0 = 0;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"xplode?.wav @ 6.0",position);
  core_fire_cpp_CFireEffect_createCrater_FUN_0049e630(this_ptr,position,radius);
  return;
}
