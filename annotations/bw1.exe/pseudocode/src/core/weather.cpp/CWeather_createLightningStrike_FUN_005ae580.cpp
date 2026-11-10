// Name: core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580
// Address: 005ae580
// Address Range: [[005ae580, 005ae832]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_005ae580(CWeather *this_ptr,float flash_timer,int play_sound)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_005ae580(CWeather *this_ptr,float flash_timer,int play_sound)

{
  CEventList *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_107c [1002];
  float local_c0;
  CMatrix3x3f local_bc;
  CVector3f local_94;
  float local_88;
  float local_84 [4];
  float local_74;
  float local_70;
  CVector3f local_64;
  float local_58;
  float afStack_54 [5];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar2 = 0;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,20.0);
  this_ptr->lightning_countdown = local_18;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(2.0,this_ptr->max_flash_interval);
  this_ptr->lightning_active = 1;
  this_ptr->flash_timer = flash_timer;
  this_ptr->sub_flash_interval = local_18;
  core_dtrace_cpp_FUN_0048f210(&g_CDemonRaytraceInstance);
  local_84[2] = afStack_54[2];
  local_84[(uint)bVar2 * -2 + 3] = afStack_54[(uint)bVar2 * -2 + 3];
  local_84[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       afStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  core_dtrace_cpp_FUN_0048f230(&g_CDemonRaytraceInstance);
  local_88 = local_70;
  local_84[(uint)bVar2 * -2] = local_84[(uint)bVar2 * -2 + 6];
  local_84[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       local_84[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  local_24 = (local_88 - local_84[2]) * (float)_DAT_005f9992;
  local_1c = 0.0;
  if (0.0 < local_24) {
    local_1c = local_24;
  }
  local_28 = local_84[0] - local_84[3];
  if (local_1c < local_28) {
    local_1c = local_28;
  }
  local_20 = (local_84[1] - local_74) * (float)_DAT_005f9992;
  if (local_1c < local_20) {
    local_1c = local_20;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&local_bc,&this_ptr->rotation);
  local_64.z = local_1c;
  local_64.x = 0.0;
  local_64.y = 0.0;
  core_dirmat_cpp_FUN_0045f690(&local_bc,&local_64);
  local_34 = local_58;
  afStack_54[(uint)bVar2 * -2 + 9] = afStack_54[(uint)bVar2 * -2];
  afStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
       afStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  local_40 = local_34 + (this_ptr->direction).x;
  local_3c = local_30 + (this_ptr->direction).y;
  local_38 = local_2c + (this_ptr->direction).z;
  local_94.x = local_40;
  *(float *)((int)&local_94 + (uint)bVar2 * -8 + 4) = afStack_54[(uint)bVar2 * -2 + 6];
  *(float *)((int)&local_94 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  if (&local_64 != &local_94) {
    local_64.x = local_94.x;
    local_64.y = local_94.y;
    local_64.z = local_94.z;
  }
  if (play_sound != 0) {
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_004b6fe0
              (0x01C57074,&local_64,local_1c,0,0.0);
  }
  local_18 = (float)core_weather_cpp_FUN_005ae560();
  this_ptr_00 = 0x01C51D80;
  this_ptr->base_ambient = local_18;
  local_c0 = this_ptr->base_ambient;
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (this_ptr_00,"BnoLightningFlash" + 1);
  if (iVar1 == 0) {
    local_c0 = local_c0 + _DAT_005f999a;
    if (1.0 < local_c0) {
      local_c0 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(&g_CDemonCameraInstance,local_c0);
    if (play_sound == 0) {
      return;
    }
  }
  else if (play_sound == 0) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (0x02C82A60,(CDemonActor *)this_ptr,"light?.wav @ 0.6",&local_64);
  return;
}
