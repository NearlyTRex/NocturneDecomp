// Name: core_weather.cpp_FUN_0058aa30
// Address: 0058aa30
// Address Range: [[0058aa30, 0058ace3]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_FUN_0058aa30(CWeather *this_ptr,float flash_timer,int play_sound)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_FUN_0058aa30(CWeather *this_ptr,float flash_timer,int play_sound)

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
  byte local_7c [4];
  float local_78;
  float local_74;
  float local_70;
  float afStack_6c [4];
  float local_5c;
  float local_58;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  
  bVar2 = 0;
  local_18 = core_actor_cpp_FUN_0040cf60(0x41200000,0x41a00000);
  *(uint *)(this_ptr + 0x20) = local_18;
  local_18 = core_actor_cpp_FUN_0040cf60(0x40000000,*(uint *)(this_ptr + 0x34));
  *(uint *)(this_ptr + 0x24) = 1;
  *(float *)(this_ptr + 0x28) = flash_timer;
  *(uint *)(this_ptr + 0x2c) = local_18;
  core_dtrace_cpp_FUN_00476d20(&g_CDemonRaytraceInstance);
  afStack_6c[2] = local_34;
  afStack_6c[(uint)bVar2 * -2 + 3] = afStack_6c[(uint)bVar2 * -2 + 0xf];
  afStack_6c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       afStack_6c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x10];
  core_dtrace_cpp_FUN_00476d40(&g_CDemonRaytraceInstance);
  local_90[2] = local_70;
  local_90[(uint)bVar2 * -2 + 3] = afStack_6c[(uint)bVar2 * -2];
  local_90[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       afStack_6c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  local_24 = (local_90[2] - afStack_6c[2]) * (float)_DAT_005ee5b2;
  local_1c = 0.0;
  if (0.0 < local_24) {
    local_1c = local_24;
  }
  local_28 = local_90[3] - afStack_6c[3];
  if (local_1c < local_28) {
    local_1c = local_28;
  }
  local_20 = (local_80 - local_5c) * (float)_DAT_005ee5b2;
  if (local_1c < local_20) {
    local_1c = local_20;
  }
  core_dirmat_cpp_FUN_00449280(local_bc,(CVector3f *)(this_ptr + 0x14));
  local_74 = local_1c;
  local_7c = (byte  [4])0x0;
  local_78 = 0.0;
  core_dirmat_cpp_FUN_00449530(local_bc,local_7c);
  local_40 = local_58;
  afStack_6c[(uint)bVar2 * -2 + 0xc] = afStack_6c[(uint)bVar2 * -2 + 6];
  afStack_6c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd] =
       afStack_6c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  local_4c = local_40 + *(float *)(this_ptr + 8);
  local_48 = local_3c + *(float *)(this_ptr + 0xc);
  local_44 = local_38 + *(float *)(this_ptr + 0x10);
  local_94 = local_40 + *(float *)(this_ptr + 8);
  local_90[(uint)bVar2 * -2] = afStack_6c[(uint)bVar2 * -2 + 9];
  local_90[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       afStack_6c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10];
  if ((float *)local_7c != &local_94) {
    local_7c = (byte  [4])local_94;
    local_78 = local_90[0];
    local_74 = local_90[1];
  }
  if (play_sound != 0) {
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0049e6e0
              (0x01C3DEB4,(CVector3f *)local_7c,local_1c,0,0.0);
  }
  this_ptr_00 = 0x01C38BC0;
  local_18 = g_CDemonCameraInstance._4584_4_;
  local_c0 = (float)(int)g_CDemonCameraInstance._4584_4_ * (float)_DAT_005ee5ba;
  *(float *)(this_ptr + 0x30) = local_c0;
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (this_ptr_00,"BnoLightningFlash" + 1);
  if (iVar1 == 0) {
    local_c0 = local_c0 + _DAT_005ee5c2;
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
            (0x0264B290,(CDemonActor *)this_ptr,"light?.wav",(CVector3f *)local_7c);
  return;
}
