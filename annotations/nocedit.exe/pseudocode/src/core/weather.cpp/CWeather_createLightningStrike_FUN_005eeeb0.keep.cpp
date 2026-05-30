// Name: core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0
// Address: 005eeeb0
// MANUAL RECONSTRUCTION
// Address Range: [[005eeeb0, 005ef131]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_005eeeb0(CWeather *this_ptr,float flash_timer,int play_sound)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_005eeeb0(CWeather *this_ptr,float flash_timer,int play_sound)

{
  float fVar3;
  CVector3f *pCVar3;
  int iVar4;
  float local_98;
  CMatrix3x3f local_94;
  CVector3f local_6c;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  float local_18;
  CEventList *this_ptr_00;
  float fVar2;
  float fVar1;
  
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,20.0);
  this_ptr->lightning_countdown = fVar3;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(2.0,this_ptr->max_flash_interval);
  this_ptr->flash_timer = flash_timer;
  this_ptr->lightning_active = 1;
  this_ptr->sub_flash_interval = fVar3;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_30);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_54);
  fVar3 = (local_54.x - local_30.x) * (float)0.5;
  local_18 = 0.0;
  if (0.0 < fVar3) {
    local_18 = fVar3;
  }
  if (local_18 < local_54.y - local_30.y) {
    local_18 = local_54.y - local_30.y;
  }
  fVar3 = (local_54.z - local_30.z) * (float)0.5;
  if (local_18 < fVar3) {
    local_18 = fVar3;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_94,&this_ptr->rotation);
  local_6c.z = local_18;
  local_6c.x = 0.0;
  local_6c.y = 0.0;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_94,&local_3c,&local_6c);
  local_48.x = pCVar3->x + (this_ptr->direction).x;
  local_48.y = pCVar3->y + (this_ptr->direction).y;
  local_48.z = pCVar3->z + (this_ptr->direction).z;
  local_6c = local_48;
  if (play_sound != 0) {
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_004c8f50
              (g_CFireEffectPtr,&local_6c,local_18,0,0.0);
  }
  this_ptr_00 = g_CEventListPtr;
  fVar2 = (float)g_CDemonCameraInstance.corona_blend_factor;
  fVar1 = (float)1.5259021896696401e-05;
  this_ptr->base_ambient = fVar2 * fVar1;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (this_ptr_00,"noLightningFlash");
  if (iVar4 == 0) {
    local_98 = fVar2 * fVar1 + 0.65f;
    if (1.0 < local_98) {
      local_98 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(&g_CDemonCameraInstance,local_98);
    if (play_sound == 0) {
      return;
    }
  }
  else if (play_sound == 0) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"light?.wav",&local_6c);
  return;
}
