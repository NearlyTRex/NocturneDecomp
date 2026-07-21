// Name: FUN_0048c0d0
// Address: 0048c0d0
// Address Range: [[0048c0d0, 0048c153]]
// Convention: unknown
// Signature: void FUN_0048c0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c0d0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  core_fire_cpp_CExplosion_activate_FUN_00486e40
            (_DAT_01c5d704 * 0x1c + 0x1c5d708,param_2,param_3,param_4);
  _DAT_01c5d704 = _DAT_01c5d704 + 1;
  if (9 < _DAT_01c5d704) {
    _DAT_01c5d704 = 0;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,param_1,"xplode?.wav @ 6.0",param_2);
  core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(param_1,param_2,param_5);
  FUN_004940d0(0x01C70F74);
  return;
}
