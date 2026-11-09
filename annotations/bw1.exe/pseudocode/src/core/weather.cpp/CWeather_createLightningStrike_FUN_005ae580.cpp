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
  CMatrix3x3f local_bc [40];
  float local_94;
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  byte local_64 [4];
  float local_60;
  float local_5c;
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
  uint local_18;
  
  bVar2 = 0;
  local_18 = core_actor_cpp_FUN_0040cc00(0x41200000,0x41a00000);
  *(uint *)(this_ptr + 0x20) = local_18;
  local_18 = core_actor_cpp_FUN_0040cc00(0x40000000,*(uint *)(this_ptr + 0x34));
  *(uint *)(this_ptr + 0x24) = 1;
  *(float *)(this_ptr + 0x28) = flash_timer;
  *(uint *)(this_ptr + 0x2c) = local_18;
  core_dtrace_cpp_FUN_0048f210(&g_CDemonRaytraceInstance);
  local_7c = afStack_54[2];
  local_90[(uint)bVar2 * -2 + 6] = afStack_54[(uint)bVar2 * -2 + 3];
  local_90[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       afStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  core_dtrace_cpp_FUN_0048f230(&g_CDemonRaytraceInstance);
  local_90[2] = local_70;
  local_90[(uint)bVar2 * -2 + 3] = local_90[(uint)bVar2 * -2 + 9];
  local_90[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       local_90[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10];
  local_24 = (local_90[2] - local_7c) * (float)_DAT_005f9992;
  local_1c = 0.0;
  if (0.0 < local_24) {
    local_1c = local_24;
  }
  local_28 = local_90[3] - local_78;
  if (local_1c < local_28) {
    local_1c = local_28;
  }
  local_20 = (local_80 - local_74) * (float)_DAT_005f9992;
  if (local_1c < local_20) {
    local_1c = local_20;
  }
  core_dirmat_cpp_FUN_0045f3e0(local_bc,(CVector3f *)(this_ptr + 0x14));
  local_5c = local_1c;
  local_64 = (byte  [4])0x0;
  local_60 = 0.0;
  core_dirmat_cpp_FUN_0045f690(local_bc,local_64);
  local_34 = local_58;
  afStack_54[(uint)bVar2 * -2 + 9] = afStack_54[(uint)bVar2 * -2];
  afStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
       afStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  local_40 = local_34 + *(float *)(this_ptr + 8);
  local_3c = local_30 + *(float *)(this_ptr + 0xc);
  local_38 = local_2c + *(float *)(this_ptr + 0x10);
  local_94 = local_34 + *(float *)(this_ptr + 8);
  local_90[(uint)bVar2 * -2] = afStack_54[(uint)bVar2 * -2 + 6];
  local_90[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       afStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  if ((float *)local_64 != &local_94) {
    local_64 = (byte  [4])local_94;
    local_60 = local_90[0];
    local_5c = local_90[1];
  }
  if (play_sound != 0) {
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_004b6fe0
              (0x01C57074,(CVector3f *)local_64,local_1c,0,0.0);
  }
  local_18 = core_weather_cpp_FUN_005ae560();
  this_ptr_00 = 0x01C51D80;
  *(uint *)(this_ptr + 0x30) = local_18;
  local_c0 = *(float *)(this_ptr + 0x30);
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
            (0x02C82A60,(CDemonActor *)this_ptr,"light?.wav @ 0.6",(CVector3f *)local_64);
  return;
}
