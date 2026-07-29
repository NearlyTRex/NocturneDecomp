// Name: core_fire.cpp_FUN_0048c0d0
// Address: 0048c0d0
// Address Range: [[0048c0d0, 0048c153]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0048c0d0(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_0048c0d0(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)

{
  core_fire_cpp_CExplosion_activate_FUN_00486e40
            ((CExplosion *)(_DAT_01c5d704 * 0x1c + 0x1c5d708),position,scale,gore_multiplier);
  _DAT_01c5d704 = _DAT_01c5d704 + 1;
  if (9 < _DAT_01c5d704) {
    _DAT_01c5d704 = 0;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,(CDemonActor *)this_ptr,"xplode?.wav @ 6.0",position);
  core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(this_ptr,position,radius);
  xxx_unk_c_FUN_004940d0(INT_005b9284);
  return;
}
