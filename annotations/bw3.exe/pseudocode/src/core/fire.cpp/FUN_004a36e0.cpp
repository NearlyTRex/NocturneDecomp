// Name: core_fire.cpp_FUN_004a36e0
// Address: 004a36e0
// Address Range: [[004a36e0, 004a378a]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a36e0(CDemonActor *param_1,CVector3f *param_2,undefined4 param_3,undefined4 param_4,float param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a36e0(CDemonActor *param_1,CVector3f *param_2,uint param_3,uint param_4,float param_5,int param_6)

{
  char *sound_name;
  
  core_fire_cpp_FUN_0049c730(_DAT_01cf608c * 0x20 + 0x1cf6090,param_2,param_3,param_4,param_6);
  _DAT_01cf608c = _DAT_01cf608c + 1;
  if (9 < _DAT_01cf608c) {
    _DAT_01cf608c = 0;
  }
  if (param_6 == 0) {
    sound_name = "xplode?.wav @ 6.0";
  }
  else if (param_6 == 1) {
    sound_name = "wp_bindevil.wav";
  }
  else {
    if (param_6 != 3) goto LAB_004a373c;
    sound_name = "wp_disease.wav";
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0(0x02CF5680,param_1,sound_name,param_2);
LAB_004a373c:
  if (param_6 != 0) {
    return;
  }
  core_fire_cpp_CFireEffect_createCrater_FUN_004a3aa0((CFireEffect *)param_1,param_2,param_5);
  return;
}
