// Name: core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
// Address: 005eeeb0
// Address Range: [[005eeeb0, 005eeecf]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_weather.cpp_CWeather_AnotherLightningThunderThing(CWeather* param_1,
   uint param_2, uint param_3) */

void core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0(void)

{
  CEventList *this_ptr;
  int iVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  float in_stack_ffffff8c;
  CVector3f local_54;
  float local_48;
  CVector3f local_44;
  float fStack_38;
  float local_2c;
  float local_28;
  CVector3f local_24;
  float local_18;
  float local_14;
  float fStack_10;
  
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  fVar3 = (in_stack_00000004->orient).bank;
  (in_stack_00000004->location).position.x = fVar2;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,fVar3);
  (in_stack_00000004->location).position.z = in_stack_00000008;
  (in_stack_00000004->location).position.y = 1.4013e-45;
  (in_stack_00000004->location).area_id = (int)fVar3;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_24);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_44);
  local_54.z = (local_24.z + local_44.y) * (float)_DAT_00657bf4;
  local_44.x = (local_14 + fStack_38) * (float)_DAT_00657bf4;
  local_48 = local_18;
  fStack_10 = local_44.z - local_18;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff80,(CVector3f *)(in_stack_00000004->actor_name + 0x14));
  local_54.x = 0.0;
  local_54.y = 0.0;
  local_54.z = unaff_retaddr;
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)&stack0xffffff84,&local_24,&local_54);
  local_2c = pCVar4->x + *(float *)(in_stack_00000004->actor_name + 8);
  local_28 = pCVar4->y + *(float *)(in_stack_00000004->actor_name + 0xc);
  local_24.x = pCVar4->z + *(float *)(in_stack_00000004->actor_name + 0x10);
  if (&local_54.y != &local_2c) {
    local_54.y = local_2c;
    local_54.z = local_28;
    local_48 = local_24.x;
  }
  if (in_stack_0000000c != 0) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
  }
  iVar1 = g_CDemonCameraInstance.corona_blend_factor;
  this_ptr = g_CEventListPtr;
  (in_stack_00000004->orient).pitch =
       (float)g_CDemonCameraInstance.corona_blend_factor * (float)_DAT_00657bfc;
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (this_ptr,"BnoLightningFlash" + 1);
  if (iVar5 == 0) {
    in_stack_ffffff8c = in_stack_ffffff8c + _DAT_00657c04;
    if (1.0 < in_stack_ffffff8c) {
      in_stack_ffffff8c = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
              (&g_CDemonCameraInstance,in_stack_ffffff8c);
    if (iVar1 == 0) {
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"light?.wav",&local_44);
  return;
}
