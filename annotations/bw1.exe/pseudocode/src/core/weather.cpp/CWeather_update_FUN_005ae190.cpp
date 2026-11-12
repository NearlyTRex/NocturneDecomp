// Name: core_weather.cpp_CWeather_update_FUN_005ae190
// Address: 005ae190
// Address Range: [[005ae190, 005ae557]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_update_FUN_005ae190(CWeather *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_update_FUN_005ae190(CWeather *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_1018 [1011];
  float local_34;
  CVector3f local_30;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  fVar1 = g_CGamePtr->delta_time_float;
  local_24 = fVar1;
  if (this_ptr->lightning_active != 0) {
    fVar2 = this_ptr->flash_timer - fVar1;
    this_ptr->flash_timer = fVar2;
    if (0.0 <= fVar2) {
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"?noLightningFlash" + 1);
      if (iVar4 == 0) {
        local_14 = (float)g_CDemonCameraInstance.corona_blend_factor;
        local_20 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)_DAT_005f994a -
                   local_24;
        if (local_20 < this_ptr->base_ambient) {
          local_20 = this_ptr->base_ambient;
          this_ptr->lightning_active = 0;
          this_ptr->flash_timer = 0.0;
        }
        core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540
                  (&g_CDemonCameraInstance,local_20);
        goto LAB_005ae1bc;
      }
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540
              (&g_CDemonCameraInstance,this_ptr->base_ambient);
    this_ptr->lightning_active = 0;
    this_ptr->flash_timer = 0.0;
  }
LAB_005ae1bc:
  if (this_ptr->weather_type == WEATHER_TYPE_NONE) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(_DAT_02c9a540);
    return;
  }
  iVar4 = 0;
  local_1c = 0;
  local_18 = 0;
  do {
    *(byte *)(local_1c + 0x2c9a478) = 0;
    fVar2 = *(float *)(&DAT_02c997fc + iVar4) - this_ptr->particle_speed * fVar1;
    *(float *)(&DAT_02c997fc + iVar4) = fVar2;
    if ((fVar2 < *(float *)(local_18 + 0x2c9a158)) &&
       (*(float *)(&DAT_02c997fc + iVar4) = *(float *)(&DAT_02c997fc + iVar4) + _DAT_005f996a,
       this_ptr->weather_type == WEATHER_TYPE_RAIN)) {
      fVar2 = *(float *)(local_18 + 0x2c9a158);
      local_30.x = *(float *)(&DAT_02c997f8 + iVar4);
      *(uint *)((int)&local_30 + (uint)bVar5 * -8 + 4) =
           *(uint *)(&DAT_02c997fc + (uint)bVar5 * -8 + iVar4);
      *(uint *)((int)&local_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)
            ((int)(&DAT_02c997fc + (uint)bVar5 * -8 + iVar4) + ((uint)bVar5 * -2 + 1) * 4);
      local_30.y = fVar2;
      core_fire_cpp_CFireEffect_createRainDrop_FUN_004b7320(0x01C57074,&local_30,(CVector3f *)0x0)
      ;
      core_fire_cpp_CFireEffect_createRainDrop_FUN_004b7320(0x01C57074,&local_30,(CVector3f *)0x0)
      ;
      core_fire_cpp_CFireEffect_createRainDrop_FUN_004b7320(0x01C57074,&local_30,(CVector3f *)0x0)
      ;
      core_fire_cpp_CFireEffect_createRainDrop_FUN_004b7320(0x01C57074,&local_30,(CVector3f *)0x0)
      ;
    }
    iVar4 = iVar4 + 0xc;
    local_1c = local_1c + 1;
    local_18 = local_18 + 4;
  } while (local_1c < 200);
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    fVar2 = this_ptr->lightning_countdown - fVar1;
    this_ptr->lightning_countdown = fVar2;
    if (fVar2 < 0.0) {
      iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
      if (iVar4 == 0) {
        core_weather_cpp_CWeather_createThunder_FUN_005ae840(this_ptr);
      }
      else {
        core_weather_cpp_CWeather_createLightningStrike_FUN_005ae580(this_ptr,0.1,1);
      }
    }
    else {
      fVar2 = this_ptr->sub_flash_interval - fVar1;
      this_ptr->sub_flash_interval = fVar2;
      if (fVar2 < 0.0) {
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                             (0.1,this_ptr->max_flash_interval);
        this_ptr->sub_flash_interval = local_14;
        iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,"noLightningFlash");
        if (iVar4 == 0) {
          this_ptr->lightning_active = 1;
          local_14 = (float)g_CDemonCameraInstance.corona_blend_factor;
          fVar3 = (float)g_CDemonCameraInstance.corona_blend_factor;
          fVar2 = (float)_DAT_005f994a;
          this_ptr->base_ambient = fVar3 * fVar2;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.1,0.3);
          local_34 = local_14 + fVar3 * fVar2;
          if (1.0 < local_34) {
            local_34 = 1.0;
          }
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                               (0.01,local_34 * (float)_DAT_005f9952);
          this_ptr->flash_timer = local_14;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540
                    (&g_CDemonCameraInstance,local_34);
        }
      }
    }
    if ((float)_DAT_005f995a <= this_ptr->max_flash_interval) {
      this_ptr->max_flash_interval = 15.0;
    }
    else {
      fVar8 = (float10)1;
      fVar6 = (float10)1.4426950408889634 *
              ((float10)fVar1 * (float10)_DAT_005f9962 +
              (float10)0.6931471805599453 * (float10)this_ptr->max_flash_interval);
      fVar7 = (float10)f2xm1(fVar6 - (fVar6 / fVar8) * fVar8);
      fVar8 = (float10)fscale(fVar7 + fVar8,fVar6);
      this_ptr->max_flash_interval = (float)fVar8;
    }
    iVar4 = sound_sndmain_cpp_FUN_005735a0(_DAT_02c9a540);
    if (iVar4 == 0) {
      _DAT_02c9a540 =
           core_sound_cpp_CSound_playSound_FUN_0057d880(0x02C82A60,this_ptr,"rain.wav @ .1")
      ;
      return;
    }
  }
  return;
}
