// Name: core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40
// Address: 00554d40
// Address Range: [[00554d40, 00554fc1]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(int param_1,uint param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float local_98;
  byte local_94 [40];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000,0x41a00000);
  *(int *)(param_1 + 0x20) = local_14;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                       (0x40000000,*(uint *)(param_1 + 0x34));
  *(uint *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x24) = 1;
  *(int *)(param_1 + 0x2c) = local_14;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0(&DAT_01fba938,&local_30);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0(&DAT_01fba938,&local_54);
  local_20 = (float)0.5;
  local_60 = (local_30 + local_54) * local_20;
  local_58 = (local_28 + local_4c) * local_20;
  local_20 = (local_54 - local_30) * local_20;
  local_18 = 0.0;
  local_5c = local_2c;
  if (0.0 < local_20) {
    local_18 = local_20;
  }
  local_24 = local_50 - local_2c;
  if (local_18 < local_24) {
    local_18 = local_24;
  }
  local_1c = (local_4c - local_28) * (float)0.5;
  if (local_18 < local_1c) {
    local_18 = local_1c;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_94,param_1 + 0x14);
  local_64 = local_18;
  local_6c = 0.0;
  local_68 = 0.0;
  pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                              (local_94,local_3c,&local_6c);
  local_48 = *pfVar4 + *(float *)(param_1 + 8);
  local_44 = pfVar4[1] + *(float *)(param_1 + 0xc);
  local_40 = pfVar4[2] + *(float *)(param_1 + 0x10);
  if (&local_6c != &local_48) {
    local_6c = local_48;
    local_68 = local_44;
    local_64 = local_40;
  }
  if (param_3 != 0) {
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420(0x01C08D04,&local_6c,local_18,0,0);
  }
  uVar3 = 0x01C03A10;
  local_14 = _DAT_01fb96f0;
  fVar2 = (float)_DAT_01fb96f0;
  fVar1 = (float)1.5259021896696401e-05;
  *(float *)(param_1 + 0x30) = fVar2 * fVar1;
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (uVar3,"noLightningFlash");
  if (iVar5 == 0) {
    local_98 = fVar2 * fVar1 + 0.65f;
    if (1.0 < local_98) {
      local_98 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(0x1fb8508,local_98);
    if (param_3 == 0) {
      return;
    }
  }
  else if (param_3 == 0) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,param_1,"light?.wav",&local_6c);
  return;
}
