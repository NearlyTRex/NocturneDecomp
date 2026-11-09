// Name: core_weather.cpp_FUN_0058a660
// Address: 0058a660
// Address Range: [[0058a660, 0058aa27]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_FUN_0058a660(CWeather *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_FUN_0058a660(CWeather *this_ptr)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1018 [1011];
  float local_34;
  CVector3f local_30;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  fVar2 = *(float *)&g_CGamePtr->field_0x284;
  local_24 = fVar2;
  if (*(int *)(this_ptr + 0x24) != 0) {
    fVar1 = *(float *)(this_ptr + 0x28);
    *(float *)(this_ptr + 0x28) = fVar1 - fVar2;
    if (0.0 <= fVar1 - fVar2) {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"?noLightningFlash" + 1);
      if (iVar5 == 0) {
        local_14 = (float)g_CDemonCameraInstance._4584_4_;
        local_20 = (float)(int)g_CDemonCameraInstance._4584_4_ * (float)_DAT_005ee572 - local_24;
        if (local_20 < *(float *)(this_ptr + 0x30)) {
          local_20 = *(float *)(this_ptr + 0x30);
          *(uint *)(this_ptr + 0x24) = 0;
          *(uint *)(this_ptr + 0x28) = 0;
        }
        core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
                  (&g_CDemonCameraInstance,local_20);
        goto LAB_0058a68c;
      }
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
              (&g_CDemonCameraInstance,*(float *)(this_ptr + 0x30));
    *(uint *)(this_ptr + 0x24) = 0;
    *(uint *)(this_ptr + 0x28) = 0;
  }
LAB_0058a68c:
  if (*(int *)this_ptr == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(_DAT_02662d00);
    return;
  }
  iVar5 = 0;
  local_1c = 0;
  local_18 = 0;
  do {
    *(byte *)(local_1c + 0x2662c38) = 0;
    fVar1 = *(float *)(&DAT_02661fbc + iVar5) - *(float *)(this_ptr + 4) * fVar2;
    *(float *)(&DAT_02661fbc + iVar5) = fVar1;
    if ((fVar1 < *(float *)(local_18 + 0x2662918)) &&
       (*(float *)(&DAT_02661fbc + iVar5) = *(float *)(&DAT_02661fbc + iVar5) + _DAT_005ee592,
       *(int *)this_ptr == 1)) {
      uVar3 = *(uint *)(local_18 + 0x2662918);
      local_30._0_4_ = *(uint *)(&DAT_02661fb8 + iVar5);
      *(uint *)((int)&local_30 + (uint)bVar6 * -8 + 4) =
           *(uint *)(&DAT_02661fbc + (uint)bVar6 * -8 + iVar5);
      *(uint *)((int)&local_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)
            ((int)(&DAT_02661fbc + (uint)bVar6 * -8 + iVar5) + ((uint)bVar6 * -2 + 1) * 4);
      local_30._4_4_ = uVar3;
      core_fire_cpp_FUN_0049ea20(0x01C3DEB4,&local_30,(CVector3f *)0x0);
      core_fire_cpp_FUN_0049ea20(0x01C3DEB4,&local_30,(CVector3f *)0x0);
      core_fire_cpp_FUN_0049ea20(0x01C3DEB4,&local_30,(CVector3f *)0x0);
      core_fire_cpp_FUN_0049ea20(0x01C3DEB4,&local_30,(CVector3f *)0x0);
    }
    iVar5 = iVar5 + 0xc;
    local_1c = local_1c + 1;
    local_18 = local_18 + 4;
  } while (local_1c < 200);
  if (*(int *)this_ptr == 1) {
    fVar1 = *(float *)(this_ptr + 0x20);
    *(float *)(this_ptr + 0x20) = fVar1 - fVar2;
    if (fVar1 - fVar2 < 0.0) {
      iVar5 = core_actor_cpp_FUN_0040d060(0.4);
      if (iVar5 == 0) {
        core_weather_cpp_CWeather_createThunder_FUN_0058acf0(this_ptr);
      }
      else {
        core_weather_cpp_FUN_0058aa30(this_ptr,0.1,1);
      }
    }
    else {
      fVar1 = *(float *)(this_ptr + 0x2c);
      *(float *)(this_ptr + 0x2c) = fVar1 - fVar2;
      if (fVar1 - fVar2 < 0.0) {
        local_14 = (float)core_actor_cpp_FUN_0040cf60(0x3dcccccd,*(uint *)(this_ptr + 0x34));
        *(float *)(this_ptr + 0x2c) = local_14;
        iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (0x01C38BC0,"noLightningFlash");
        if (iVar5 == 0) {
          *(uint *)(this_ptr + 0x24) = 1;
          local_14 = (float)g_CDemonCameraInstance._4584_4_;
          fVar4 = (float)(int)g_CDemonCameraInstance._4584_4_;
          fVar1 = (float)_DAT_005ee572;
          *(float *)(this_ptr + 0x30) = fVar4 * fVar1;
          local_14 = (float)core_actor_cpp_FUN_0040cf60(0x3dcccccd,0x3e99999a);
          local_34 = local_14 + fVar4 * fVar1;
          if (1.0 < local_34) {
            local_34 = 1.0;
          }
          local_14 = (float)core_actor_cpp_FUN_0040cf60(0x3c23d70a,local_34 * (float)_DAT_005ee57a);
          *(float *)(this_ptr + 0x28) = local_14;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
                    (&g_CDemonCameraInstance,local_34);
        }
      }
    }
    if ((float)_DAT_005ee582 <= *(float *)(this_ptr + 0x34)) {
      *(uint *)(this_ptr + 0x34) = 0x41700000;
    }
    else {
      fVar9 = (float10)1;
      fVar7 = (float10)1.4426950408889634 *
              ((float10)fVar2 * (float10)_DAT_005ee58a +
              (float10)0.6931471805599453 * (float10)*(float *)(this_ptr + 0x34));
      fVar8 = (float10)f2xm1(fVar7 - (fVar7 / fVar9) * fVar9);
      fVar9 = (float10)fscale(fVar8 + fVar9,fVar7);
      *(float *)(this_ptr + 0x34) = (float)fVar9;
    }
    iVar5 = sound_sndmain_cpp_FUN_00550b70(_DAT_02662d00);
    if (iVar5 == 0) {
      _DAT_02662d00 =
           core_sound_cpp_CSound_playSound_FUN_0055ae30(0x0264B290,this_ptr,"rain.wav @ .1")
      ;
      return;
    }
  }
  return;
}
