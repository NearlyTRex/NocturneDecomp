// Name: core_fire.cpp_FUN_0048c0d0
// Address: 0048c0d0
// Address Range: [[0048c0d0, 0048c153]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0048c0d0(CDemonActor *param_1,CVector3f *param_2,undefined4 param_3,undefined4 param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0048c0d0(CDemonActor *param_1,CVector3f *param_2,uint param_3,uint param_4,float param_5)

{
  core_fire_cpp_CExplosion_activate_FUN_00486e40
            (_DAT_01c5d704 * 0x1c + 0x1c5d708,param_2,param_3,param_4);
  _DAT_01c5d704 = _DAT_01c5d704 + 1;
  if (9 < _DAT_01c5d704) {
    _DAT_01c5d704 = 0;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,param_1,"xplode?.wav @ 6.0",param_2);
  core_fire_cpp_CFireEffect_createCrater_FUN_0048c370((CFireEffect *)param_1,param_2,param_5);
  xxx_unk_c_FUN_004940d0(INT_005b9284);
  return;
}
