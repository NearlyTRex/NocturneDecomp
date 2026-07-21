// Name: core_fire.cpp_CFireEffect_createStake_FUN_0048b070
// Address: 0048b070
// Address Range: [[0048b070, 0048b1ba]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_0048b070(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_0048b070(uint param_1,float *param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  float *pfVar2;
  byte local_5c [40];
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_28 [12];
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = false;
  switch(param_5) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 8:
    bVar1 = true;
    break;
  case 3:
  case 4:
  case 7:
  case 9:
  case 10:
    bVar1 = false;
    break;
  case 6:
    goto switchD_0048b08a_caseD_6;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_5c,param_3);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f333333;
  pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                              (local_5c,local_28,&local_34);
  local_1c = *param_2 - *pfVar2;
  local_18 = param_2[1] - pfVar2[1];
  local_14 = param_2[2] - pfVar2[2];
  if (bVar1) {
    core_fire_cpp_CStake_spawn_FUN_00483320
              (_DAT_01c23d4c * 0x260 + 0x1c23d50,&local_1c,param_3,param_4);
  }
  else {
    core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
              (0x02DC9450,param_1,"a-wood?.wav",&local_1c,0x3e6b851f);
    core_fire_cpp_CStake_init_FUN_004832b0(_DAT_01c23d4c * 0x260 + 0x1c23d50,&local_1c,param_3);
  }
  _DAT_01c23d4c = _DAT_01c23d4c + 1;
  if (0xff < _DAT_01c23d4c) {
    _DAT_01c23d4c = 0;
  }
  if (_DAT_01c23d48 < 0x100) {
    _DAT_01c23d48 = _DAT_01c23d48 + 1;
    return;
  }
switchD_0048b08a_caseD_6:
  return;
}
