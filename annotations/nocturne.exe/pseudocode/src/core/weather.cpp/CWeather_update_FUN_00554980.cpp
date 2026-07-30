// Name: core_weather.cpp_CWeather_update_FUN_00554980
// Address: 00554980
// Address Range: [[00554980, 00554d3e]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_update_FUN_00554980(CWeather *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_update_FUN_00554980(CWeather *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CEventList *this_ptr_00;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_2c;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar1 = *(float *)(0x01C775EC + 0x264);
  local_1c = fVar1;
  if (this_ptr->lightning_active != 0) {
    fVar2 = this_ptr->flash_timer - fVar1;
    this_ptr->flash_timer = fVar2;
    if (0.0 <= fVar2) {
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"noLightningFlash");
      if (iVar4 == 0) {
        local_14 = _DAT_01fb96f0;
        local_18 = (float)(int)_DAT_01fb96f0 * (float)1.5259021896696401e-05 - local_1c;
        if (local_18 < this_ptr->base_ambient) {
          local_18 = this_ptr->base_ambient;
          this_ptr->lightning_active = 0;
          this_ptr->flash_timer = 0.0;
        }
        core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740
                  ((CDemonCamera *)&DAT_01fb8508,local_18);
        goto LAB_005549ac;
      }
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740
              ((CDemonCamera *)&DAT_01fb8508,this_ptr->base_ambient);
    this_ptr->lightning_active = 0;
    this_ptr->flash_timer = 0.0;
  }
LAB_005549ac:
  if (this_ptr->weather_type == WEATHER_TYPE_NONE) {
    sound_sndmain_cpp_killSfx_FUN_00527230(_DAT_02de0770);
    return;
  }
  iVar5 = 0;
  iVar6 = 0;
  iVar4 = 0;
  do {
    *(byte *)(iVar5 + 0x2de06a8) = 0;
    fVar2 = *(float *)(&DAT_02ddfa2c + iVar4) - this_ptr->particle_speed * fVar1;
    *(float *)(&DAT_02ddfa2c + iVar4) = fVar2;
    if ((fVar2 < *(float *)(iVar6 + 0x2de0388)) &&
       (*(float *)(&DAT_02ddfa2c + iVar4) = *(float *)(&DAT_02ddfa2c + iVar4) + 100.0f,
       this_ptr->weather_type == WEATHER_TYPE_RAIN)) {
      local_28.x = *(float *)(&DAT_02ddfa28 + iVar4);
      local_28.z = *(float *)(&DAT_02ddfa30 + iVar4);
      local_28.y = *(float *)(iVar6 + 0x2de0388);
      core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(0x01C08D04,&local_28,(CVector3f *)0x0)
      ;
      core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(0x01C08D04,&local_28,(CVector3f *)0x0)
      ;
      core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(0x01C08D04,&local_28,(CVector3f *)0x0)
      ;
      core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(0x01C08D04,&local_28,(CVector3f *)0x0)
      ;
    }
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar5 < 200);
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    fVar2 = this_ptr->lightning_countdown - fVar1;
    this_ptr->lightning_countdown = fVar2;
    if (fVar2 < 0.0) {
      iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.4);
      if (iVar4 == 0) {
        core_weather_cpp_CWeather_createThunder_FUN_00554fd0(this_ptr);
      }
      else {
        core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(this_ptr,0.1,1);
      }
    }
    else {
      fVar2 = this_ptr->sub_flash_interval - fVar1;
      this_ptr->sub_flash_interval = fVar2;
      if (fVar2 < 0.0) {
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                             (0.1,this_ptr->max_flash_interval);
        this_ptr_00 = 0x01C03A10;
        this_ptr->sub_flash_interval = local_14;
        iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (this_ptr_00,"noLightningFlash");
        if (iVar4 == 0) {
          this_ptr->lightning_active = 1;
          local_14 = _DAT_01fb96f0;
          fVar3 = (float)(int)_DAT_01fb96f0;
          fVar2 = (float)1.5259021896696401e-05;
          this_ptr->base_ambient = fVar3 * fVar2;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.1,0.3);
          local_2c = local_14 + fVar3 * fVar2;
          if (1.0 < local_2c) {
            local_2c = 1.0;
          }
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                               (0.01,local_2c * (float)0.59999999999999998);
          this_ptr->flash_timer = local_14;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740
                    ((CDemonCamera *)&DAT_01fb8508,local_2c);
        }
      }
    }
    if ((float)15 <= this_ptr->max_flash_interval) {
      this_ptr->max_flash_interval = 15.0;
    }
    else {
      fVar9 = (float10)1;
      fVar7 = (float10)1.4426950408889634 *
              ((float10)fVar1 * (float10)0.10000000000000001 +
              (float10)0.6931471805599453 * (float10)this_ptr->max_flash_interval);
      fVar8 = (float10)f2xm1(fVar7 - (fVar7 / fVar9) * fVar9);
      fVar9 = (float10)fscale(fVar8 + fVar9,fVar7);
      this_ptr->max_flash_interval = (float)fVar9;
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(_DAT_02de0770);
    if (iVar4 == 0) {
      _DAT_02de0770 =
           core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,this_ptr,"rain.wav @ .1")
      ;
      return;
    }
  }
  return;
}
