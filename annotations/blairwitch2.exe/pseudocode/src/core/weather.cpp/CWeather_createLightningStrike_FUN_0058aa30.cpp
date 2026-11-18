// Name: core_weather.cpp_CWeather_createLightningStrike_FUN_0058aa30
// Address: 0058aa30
// Address Range: [[0058aa30, 0058ace3]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_0058aa30(CWeather *this_ptr,float flash_timer,int play_sound)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_0058aa30(CWeather *this_ptr,float flash_timer,int play_sound)

{
  CEventList *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_107c [1002];
  float local_c0;
  CMatrix3x3f local_bc;
  CVector3f local_94;
  float local_88;
  float local_84 [2];
  CVector3f local_7c;
  CVector3f local_70;
  float local_64;
  float local_60 [2];
  CVector3f local_58;
  float local_4c;
  float local_48 [4];
  float local_38;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar2 = 0;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,20.0);
  this_ptr->lightning_countdown = local_18;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,this_ptr->max_flash_interval);
  this_ptr->lightning_active = 1;
  this_ptr->flash_timer = flash_timer;
  this_ptr->sub_flash_interval = local_18;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00476d20(&g_CDemonRaytraceInstance,&local_34);
  local_64 = local_34.x;
  local_60[(uint)bVar2 * -2] = *(float *)((int)&local_34 + (uint)bVar2 * -8 + 4);
  local_60[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00476d40(&g_CDemonRaytraceInstance,&local_70);
  local_88 = local_70.x;
  local_84[(uint)bVar2 * -2] = *(float *)((int)&local_70 + (uint)bVar2 * -8 + 4);
  local_84[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_70 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  local_24 = (local_88 - local_64) * (float)0.5;
  local_1c = 0.0;
  if (0.0 < local_24) {
    local_1c = local_24;
  }
  local_28 = local_84[0] - local_60[0];
  if (local_1c < local_28) {
    local_1c = local_28;
  }
  local_20 = (local_84[1] - local_60[1]) * (float)0.5;
  if (local_1c < local_20) {
    local_1c = local_20;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_bc,&this_ptr->rotation);
  local_7c.z = local_1c;
  local_7c.x = 0.0;
  local_7c.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&local_bc,&local_7c,&local_58);
  local_48[2] = local_58.x;
  local_48[(uint)bVar2 * -2 + 3] = *(float *)((int)&local_58 + (uint)bVar2 * -8 + 4);
  local_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       *(float *)((int)&local_58 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  local_4c = local_48[2] + (this_ptr->direction).x;
  local_48[0] = local_48[3] + (this_ptr->direction).y;
  local_48[1] = local_38 + (this_ptr->direction).z;
  local_94.x = local_4c;
  *(float *)((int)&local_94 + (uint)bVar2 * -8 + 4) = local_48[(uint)bVar2 * -2];
  *(float *)((int)&local_94 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       local_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (&local_7c != &local_94) {
    local_7c.x = local_94.x;
    local_7c.y = local_94.y;
    local_7c.z = local_94.z;
  }
  if (play_sound != 0) {
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0049e6e0
              (g_CFireEffectPtr,&local_7c,local_1c,0,0.0);
  }
  this_ptr_00 = g_CEventListPtr;
  local_18 = (float)g_CDemonCameraInstance.corona_blend_factor;
  local_c0 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)1.5259021896696401e-05;
  this_ptr->base_ambient = local_c0;
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (this_ptr_00,"noLightningFlash");
  if (iVar1 == 0) {
    local_c0 = local_c0 + 0.65f;
    if (1.0 < local_c0) {
      local_c0 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(&g_CDemonCameraInstance,local_c0);
    if (play_sound == 0) {
      return;
    }
  }
  else if (play_sound == 0) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"light?.wav",&local_7c);
  return;
}
