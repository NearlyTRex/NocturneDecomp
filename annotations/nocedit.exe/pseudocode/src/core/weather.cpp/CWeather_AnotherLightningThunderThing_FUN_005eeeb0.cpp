// Name: core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
// Address: 005eeeb0
// Address Range: [[005eeeb0, 005eeecf]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_weather.cpp_CWeather_AnotherLightningThunderThing(CWeather* param_1,
   uint param_2, uint param_3) */

void core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
               (uint param_1,uint param_2,float unaff_EBX,uint param_4,
               CDemonActor *param_5,float param_6,int param_7)

{
  CEventList *this_ptr;
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_ffffff88;
  CVector3f local_58;
  float local_4c;
  CVector3f local_48;
  float local_3c;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  
  fStack_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  fVar1 = (param_5->orient).bank;
  (param_5->location).position.x = fStack_10;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,fVar1);
  (param_5->location).position.z = param_6;
  (param_5->location).position.y = 1.4013e-45;
  (param_5->location).area_id = (int)fVar1;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_28);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_48);
  fStack_10 = (float)_DAT_00657bf4;
  local_58.z = (local_28.z + local_48.y) * fStack_10;
  local_48.x = (local_18 + local_3c) * fStack_10;
  fStack_10 = (local_48.y - local_28.z) * fStack_10;
  local_4c = local_1c;
  local_14 = local_48.z - local_1c;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff7c,(CVector3f *)(param_5->actor_name + 0x14));
  local_58.x = 0.0;
  local_58.y = 0.0;
  local_58.z = unaff_EBX;
  pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)&stack0xffffff80,&local_28,&local_58);
  local_30 = pCVar2->x + *(float *)(param_5->actor_name + 8);
  local_2c = pCVar2->y + *(float *)(param_5->actor_name + 0xc);
  local_28.x = pCVar2->z + *(float *)(param_5->actor_name + 0x10);
  if (&local_58.y != &local_30) {
    local_58.y = local_30;
    local_58.z = local_2c;
    local_4c = local_28.x;
  }
  if (param_7 != 0) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
  }
  this_ptr = g_CEventListPtr;
  (param_5->orient).pitch = (float)g_CDemonCameraInstance.corona_blend_factor * (float)_DAT_00657bfc
  ;
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (this_ptr,"BnoLightningFlash" + 1);
  if (iVar3 == 0) {
    in_stack_ffffff88 = in_stack_ffffff88 + _DAT_00657c04;
    if (1.0 < in_stack_ffffff88) {
      in_stack_ffffff88 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
              (&g_CDemonCameraInstance,in_stack_ffffff88);
    if (param_7 == 0) {
      return;
    }
  }
  else if (param_7 == 0) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,param_5,"light?.wav",&local_48);
  return;
}
