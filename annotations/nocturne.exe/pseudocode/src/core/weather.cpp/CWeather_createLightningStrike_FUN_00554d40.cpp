// Name: core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40
// Address: 00554d40
// Address Range: [[00554d40, 00554fc1]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(CWeather *this_ptr,float flash_timer,int play_sound)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(CWeather *this_ptr,float flash_timer,int play_sound)

{
  float fVar1;
  float fVar2;
  CEventList *this_ptr_00;
  CVector3f *pCVar3;
  int iVar4;
  float local_98;
  CMatrix3x3f local_94;
  CVector3f local_6c;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,20.0);
  this_ptr->lightning_countdown = local_14;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(2.0,this_ptr->max_flash_interval);
  this_ptr->flash_timer = flash_timer;
  this_ptr->lightning_active = 1;
  this_ptr->sub_flash_interval = local_14;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0((CDemonRaytrace *)&DAT_01fba938,&local_30);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0((CDemonRaytrace *)&DAT_01fba938,&local_54);
  local_20 = (float)0.5;
  local_60 = (local_30.x + local_54.x) * local_20;
  local_58 = (local_30.z + local_54.z) * local_20;
  local_20 = (local_54.x - local_30.x) * local_20;
  local_18 = 0.0;
  local_5c = local_30.y;
  if (0.0 < local_20) {
    local_18 = local_20;
  }
  local_24 = local_54.y - local_30.y;
  if (local_18 < local_24) {
    local_18 = local_24;
  }
  local_1c = (local_54.z - local_30.z) * (float)0.5;
  if (local_18 < local_1c) {
    local_18 = local_1c;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_94,&this_ptr->rotation);
  local_6c.z = local_18;
  local_6c.x = 0.0;
  local_6c.y = 0.0;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_94,&local_3c,&local_6c);
  local_48.x = pCVar3->x + (this_ptr->direction).x;
  local_48.y = pCVar3->y + (this_ptr->direction).y;
  local_48.z = pCVar3->z + (this_ptr->direction).z;
  if (&local_6c != &local_48) {
    local_6c.x = local_48.x;
    local_6c.y = local_48.y;
    local_6c.z = local_48.z;
  }
  if (play_sound != 0) {
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420
              (0x01C08D04,&local_6c,local_18,0,0.0);
  }
  this_ptr_00 = 0x01C03A10;
  local_14 = (float)_DAT_01fb96f0;
  fVar2 = (float)_DAT_01fb96f0;
  fVar1 = (float)1.5259021896696401e-05;
  this_ptr->base_ambient = fVar2 * fVar1;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (this_ptr_00,"noLightningFlash");
  if (iVar4 == 0) {
    local_98 = fVar2 * fVar1 + 0.65f;
    if (1.0 < local_98) {
      local_98 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740
              ((CDemonCamera *)&DAT_01fb8508,local_98);
    if (play_sound == 0) {
      return;
    }
  }
  else if (play_sound == 0) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,(CDemonActor *)this_ptr,"light?.wav",&local_6c);
  return;
}
