// Name: core_weather.cpp_FUN_0057bda0
// Address: 0057bda0
// Address Range: [[0057bda0, 0057c2bb]]
// Convention: unknown
// Signature: void core_weather_cpp_FUN_0057bda0(CWeather *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_weather_cpp_FUN_0057bda0(CWeather *param_1)

{
  int iVar1;
  float fVar2;
  CEventList *this_ptr;
  float *pfVar3;
  int iVar4;
  byte bVar5;
  float afStackY_103c [1014];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  uint local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float *local_1c;
  float *local_18;
  float local_14;
  
  bVar5 = 0;
  local_30 = *(float *)&g_CGamePtr->field_0x314;
  local_20 = local_30;
  if (*(int *)(param_1 + 0x24) != 0) {
    fVar2 = *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x28) = fVar2 - local_30;
    if ((fVar2 - local_30 < 0.0) ||
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,"?noLightningFlash" + 1), iVar4 != 0)) {
      core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
                (&g_CDemonCameraInstance,*(float *)(param_1 + 0x30));
      *(uint *)(param_1 + 0x24) = 0;
      *(uint *)(param_1 + 0x28) = 0;
    }
    else {
      local_14 = (float)g_CDemonCameraInstance._4584_4_;
      local_2c = (float)(int)g_CDemonCameraInstance._4584_4_ * (float)_DAT_005d7933 - local_30;
      if (local_2c < *(float *)(param_1 + 0x30)) {
        local_2c = *(float *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x24) = 0;
        *(uint *)(param_1 + 0x28) = 0;
      }
      core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
                (&g_CDemonCameraInstance,local_2c);
    }
  }
  if ((*(int *)param_1 != 1) && (*(int *)param_1 != 5)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(_DAT_02d20258);
  }
  if (*(int *)param_1 != 0) {
    local_28 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      local_24 = 0;
      iVar4 = 0;
      local_1c = (float *)&DAT_02d0c208;
      local_18 = (float *)&DAT_02d17d88;
      do {
        *(byte *)(local_28 + 0x2d1fa88) = 0;
        *(float *)(&DAT_02d0c20c + iVar4) =
             *(float *)(&DAT_02d0c20c + iVar4) - *(float *)(param_1 + 4) * local_20;
        iVar1 = *(int *)param_1;
        if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
          local_14 = (float)core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
          *(float *)(&DAT_02d17d88 + iVar4) =
               local_14 * local_20 + *(float *)(&DAT_02d17d88 + iVar4);
          local_14 = (float)core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
          pfVar3 = local_1c;
          *(float *)(&DAT_02d17d90 + iVar4) =
               local_14 * local_20 + *(float *)(&DAT_02d17d90 + iVar4);
          local_3c = *local_18 * local_20;
          local_38 = local_18[1] * local_20;
          local_34 = local_18[2] * local_20;
          local_54 = *local_18 * local_20;
          *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          *pfVar3 = *pfVar3 + local_54;
          pfVar3[1] = pfVar3[1] + local_50;
          pfVar3[2] = pfVar3[2] + local_4c;
        }
        if (*(float *)(&DAT_02d0c20c + iVar4) < *(float *)(local_24 + 0x2d1db48)) {
          if (&DAT_02d0c208 + iVar4 != &DAT_02d11fc8 + iVar4) {
            *(uint *)(&DAT_02d0c208 + iVar4) = *(uint *)(&DAT_02d11fc8 + iVar4);
            *(uint *)(&DAT_02d0c20c + iVar4) = *(uint *)(&DAT_02d11fcc + iVar4);
            *(uint *)(&DAT_02d0c210 + iVar4) = *(uint *)(&DAT_02d11fd0 + iVar4);
          }
          if (local_18 != (float *)&DAT_02cfd900) {
            *local_18 = _DAT_02cfd900;
            local_18[1] = _DAT_02cfd904;
            local_18[2] = _DAT_02cfd908;
          }
          if ((*(int *)param_1 == 1) || (*(int *)param_1 == 5)) {
            fVar2 = *(float *)(local_24 + 0x2d1db48);
            local_48 = *(uint *)(&DAT_02d0c208 + iVar4);
            (&stack0xffffffbc)[(uint)bVar5 * 0xfffffffe] =
                 (float)*(uint *)(&DAT_02d0c20c + (uint)bVar5 * -8 + iVar4);
            *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)
                  ((int)(&DAT_02d0c20c + (uint)bVar5 * -8 + iVar4) + ((uint)bVar5 * -2 + 1) * 4);
            local_44 = fVar2;
            core_fire_cpp_FUN_004a3f20(0x01C73654,&stack0xffffffb8,0);
            core_fire_cpp_FUN_004a3f20(0x01C73654,&stack0xffffffb8,0);
            core_fire_cpp_FUN_004a3f20(0x01C73654,&stack0xffffffb8,0);
            core_fire_cpp_FUN_004a3f20(0x01C73654,&stack0xffffffb8,0);
          }
        }
        iVar4 = iVar4 + 0xc;
        local_1c = local_1c + 3;
        local_18 = local_18 + 3;
        local_24 = local_24 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(param_1 + 0x38));
    }
    if ((*(int *)param_1 != 1) && (*(int *)param_1 != 5)) {
      return;
    }
    fVar2 = *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x20) = fVar2 - local_20;
    if (0.0 <= fVar2 - local_20) {
      fVar2 = *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x2c) = fVar2 - local_20;
      if (fVar2 - local_20 < 0.0) {
        local_14 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,*(uint *)(param_1 + 0x34));
        this_ptr = 0x01C6E360;
        *(float *)(param_1 + 0x2c) = local_14;
        iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (this_ptr,"noLightningFlash");
        if (iVar4 == 0) {
          *(uint *)(param_1 + 0x24) = 1;
          local_14 = (float)g_CDemonCameraInstance._4584_4_;
          local_58 = (float)(int)g_CDemonCameraInstance._4584_4_ * (float)_DAT_005d7933;
          *(float *)(param_1 + 0x30) = local_58;
          local_14 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e99999a);
          local_58 = local_14 + local_58;
          if (1.0 < local_58) {
            local_58 = 1.0;
          }
          local_14 = (float)core_actor_cpp_FUN_0040ce40(0x3c23d70a,local_58 * (float)_DAT_005d793b);
          *(float *)(param_1 + 0x28) = local_14;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
                    (&g_CDemonCameraInstance,local_58);
        }
      }
    }
    else if ((*(int *)param_1 == 5) || (iVar4 = core_actor_cpp_FUN_0040cf40(0.4), iVar4 != 0)) {
      core_weather_cpp_FUN_0057c2e0(param_1,0x3dcccccd,1);
    }
    else {
      core_weather_cpp_CWeather_createThunder_FUN_0057c840(param_1);
    }
    iVar4 = sound_sndmain_cpp_FUN_00556700(_DAT_02d20258);
    if (iVar4 == 0) {
      if (*(int *)param_1 != 5) {
        _DAT_02d20258 =
             core_sound_cpp_CSound_playSound_FUN_005609b0
                       (0x02CF5680,param_1,"rain.wav @ .1");
        return;
      }
      _DAT_02d20258 =
           core_sound_cpp_CSound_playSound_FUN_005609b0(0x02CF5680,param_1,"rain.wav @ .5");
    }
  }
  return;
}
