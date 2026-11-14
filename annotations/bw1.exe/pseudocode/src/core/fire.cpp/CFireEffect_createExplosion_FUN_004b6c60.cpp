// Name: core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60
// Address: 004b6c60
// Address Range: [[004b6c60, 004b6cd4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

{
  core_fire_cpp_CExplosion_activate_FUN_004b16d0
            ((CExplosion *)(_DAT_01cb006c * 0x1c + 0x1cb0070),position,scale,gore_multiplier);
  _DAT_01cb006c = _DAT_01cb006c + 1;
  if (9 < _DAT_01cb006c) {
    _DAT_01cb006c = 0;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (0x02C82A60,(CDemonActor *)this_ptr,"xplode?.wav @ 6.0",position);
  core_fire_cpp_CFireEffect_createCrater_FUN_004b6f30(this_ptr,position,radius);
  return;
}
