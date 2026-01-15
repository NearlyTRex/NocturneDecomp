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
  float fVar1;
  float fVar2;
  CEventList *this_ptr;
  CVector3f *pCVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  float local_94;
  CMatrix3x3f CStack_90;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f CStack_38;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  
  fStack_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  fVar1 = (in_stack_00000004->orient).bank;
  (in_stack_00000004->location).position.x = fStack_10;
  fStack_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,fVar1);
  (in_stack_00000004->location).position.z = in_stack_00000008;
  (in_stack_00000004->location).position.y = 1.4013e-45;
  (in_stack_00000004->location).area_id = (int)fStack_10;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_2c);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_50);
  local_1c = (float)_DAT_00657bf4;
  local_5c = (local_2c.x + local_50.x) * local_1c;
  local_54 = (local_2c.z + local_50.z) * local_1c;
  local_1c = (local_50.x - local_2c.x) * local_1c;
  local_14 = 0.0;
  local_58 = local_2c.y;
  if (0.0 < local_1c) {
    local_14 = local_1c;
  }
  local_20 = local_50.y - local_2c.y;
  if (local_14 < local_20) {
    local_14 = local_20;
  }
  local_18 = (local_50.z - local_2c.z) * (float)_DAT_00657bf4;
  if (local_14 < local_18) {
    local_14 = local_18;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&CStack_90,(CVector3f *)(in_stack_00000004->actor_name + 0x14));
  local_68.z = local_14;
  local_68.x = 0.0;
  local_68.y = 0.0;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_90,&CStack_38,&local_68)
  ;
  local_44.x = pCVar3->x + *(float *)(in_stack_00000004->actor_name + 8);
  local_44.y = pCVar3->y + *(float *)(in_stack_00000004->actor_name + 0xc);
  local_44.z = pCVar3->z + *(float *)(in_stack_00000004->actor_name + 0x10);
  if (&local_68 != &local_44) {
    local_68.x = local_44.x;
    local_68.y = local_44.y;
    local_68.z = local_44.z;
  }
  if (in_stack_0000000c != 0) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
  }
  this_ptr = g_CEventListPtr;
  fStack_10 = (float)g_CDemonCameraInstance.corona_blend_factor;
  fVar2 = (float)g_CDemonCameraInstance.corona_blend_factor;
  fVar1 = (float)_DAT_00657bfc;
  (in_stack_00000004->orient).pitch = fVar2 * fVar1;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (this_ptr,"BnoLightningFlash" + 1);
  if (iVar4 == 0) {
    local_94 = fVar2 * fVar1 + _DAT_00657c04;
    if (1.0 < local_94) {
      local_94 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(&g_CDemonCameraInstance,local_94);
    if (in_stack_0000000c == 0) {
      return;
    }
  }
  else if (in_stack_0000000c == 0) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004,"light?.wav",&local_68);
  return;
}
