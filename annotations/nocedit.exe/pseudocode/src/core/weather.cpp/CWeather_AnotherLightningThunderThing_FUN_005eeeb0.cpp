// Name: core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
// Address: 005eeeb0
// Address Range: [[005eeeb0, 005eeecf]]
// Convention: unknown
// Signature: void core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0(void)

#include "nocturne.h"

/* Signature: byte core_weather.cpp_CWeather_AnotherLightningThunderThing(CWeather* param_1,
   uint param_2, uint param_3) */

void core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0(void)

{
  float fVar1;
  float fVar2;
  CEventList *this_ptr;
  CVector3f *pCVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
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
  
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  fVar1 = (in_stack_00000004->orient).bank;
  (in_stack_00000004->location).position.x = local_14;
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,fVar1);
  (in_stack_00000004->location).position.z = in_stack_00000008;
  (in_stack_00000004->location).position.y = 1.4013e-45;
  (in_stack_00000004->location).area_id = (int)local_14;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_30);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_54);
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
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&local_94,(CVector3f *)(in_stack_00000004->actor_name + 0x14));
  local_6c.z = local_18;
  local_6c.x = 0.0;
  local_6c.y = 0.0;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_94,&local_3c,&local_6c);
  local_48.x = pCVar3->x + *(float *)(in_stack_00000004->actor_name + 8);
  local_48.y = pCVar3->y + *(float *)(in_stack_00000004->actor_name + 0xc);
  local_48.z = pCVar3->z + *(float *)(in_stack_00000004->actor_name + 0x10);
  if (&local_6c != &local_48) {
    local_6c.x = local_48.x;
    local_6c.y = local_48.y;
    local_6c.z = local_48.z;
  }
  if (in_stack_0000000c != 0) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
  }
  this_ptr = g_CEventListPtr;
  local_14 = (float)g_CDemonCameraInstance.corona_blend_factor;
  fVar2 = (float)g_CDemonCameraInstance.corona_blend_factor;
  fVar1 = (float)1.5259021896696401e-05;
  (in_stack_00000004->orient).pitch = fVar2 * fVar1;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (this_ptr,"noLightningFlash");
  if (iVar4 == 0) {
    local_98 = fVar2 * fVar1 + 0.65f;
    if (1.0 < local_98) {
      local_98 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(&g_CDemonCameraInstance,local_98);
    if (in_stack_0000000c == 0) {
      return;
    }
  }
  else if (in_stack_0000000c == 0) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"light?.wav",&local_6c);
  return;
}
