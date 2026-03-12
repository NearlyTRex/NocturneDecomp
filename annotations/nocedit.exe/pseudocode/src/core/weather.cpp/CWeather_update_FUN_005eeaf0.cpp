// Name: core_weather.cpp_CWeather_update_FUN_005eeaf0
// Address: 005eeaf0
// Address Range: [[005eeaf0, 005eec56] [005eec84, 005eede0] [005eee7c, 005eeeae]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_update_FUN_005eeaf0(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_update_FUN_005eeaf0(CWeather *this_ptr)

{
  float fVar4;
  float10 fVar5;
  float fVar6;
  int iVar7;
  float fVar10;
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
  float fVar3;
  CEventList *this_ptr_00;
  float fVar2;
  float fVar1;
  
  fVar4 = g_CGamePtr->delta_time_float;
  if (this_ptr->lightning_active != 0) {
    fVar6 = this_ptr->flash_timer - fVar4;
    this_ptr->flash_timer = fVar6;
    if (0.0 <= fVar6) {
      iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"noLightningFlash");
      if (iVar7 == 0) {
        local_18 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)1.5259021896696401e-05 -
                   fVar4;
        if (local_18 < this_ptr->base_ambient) {
          local_18 = this_ptr->base_ambient;
          this_ptr->lightning_active = 0;
          this_ptr->flash_timer = 0.0;
        }
        core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
                  (&g_CDemonCameraInstance,local_18);
        goto LAB_005eeb1c;
      }
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
              (&g_CDemonCameraInstance,this_ptr->base_ambient);
    this_ptr->lightning_active = 0;
    this_ptr->flash_timer = 0.0;
  }
LAB_005eeb1c:
  if (this_ptr->weather_type == WEATHER_TYPE_NONE) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(UINT_03f96b40);
    return;
  }
  iVar5 = 0;
  iVar6 = 0;
  iVar4 = 0;
  do {
    g_WeatherParticleHitGround[iVar5] = '\0';
    fVar2 = *(float *)((int)&g_WeatherParticlePositions[0].y + iVar4) -
            this_ptr->particle_speed * fVar4;
    *(float *)((int)&g_WeatherParticlePositions[0].y + iVar4) = fVar2;
    if ((fVar2 < *(float *)((int)g_WeatherParticleGroundHeights + iVar6)) &&
       (*(float *)((int)&g_WeatherParticlePositions[0].y + iVar4) =
             *(float *)((int)&g_WeatherParticlePositions[0].y + iVar4) + 100.0f,
       this_ptr->weather_type == WEATHER_TYPE_RAIN)) {
      local_28.x = *(float *)((int)&g_WeatherParticlePositions[0].x + iVar4);
      local_28.z = *(float *)((int)&g_WeatherParticlePositions[0].z + iVar4);
      local_28.y = *(float *)((int)g_WeatherParticleGroundHeights + iVar6);
      core_fire_cpp_CFireEffect_createRainDrop_FUN_004c9290
                (g_CFireEffectPtr,&local_28,(CVector3f *)0x0);
      core_fire_cpp_CFireEffect_createRainDrop_FUN_004c9290
                (g_CFireEffectPtr,&local_28,(CVector3f *)0x0);
      core_fire_cpp_CFireEffect_createRainDrop_FUN_004c9290
                (g_CFireEffectPtr,&local_28,(CVector3f *)0x0);
      core_fire_cpp_CFireEffect_createRainDrop_FUN_004c9290
                (g_CFireEffectPtr,&local_28,(CVector3f *)0x0);
    }
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar5 < 200);
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    fVar6 = this_ptr->lightning_countdown - fVar4;
    this_ptr->lightning_countdown = fVar6;
    if (fVar6 < 0.0) {
      iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
      if (iVar7 == 0) {
        core_weather_cpp_CWeather_createThunder_FUN_005ef140(this_ptr);
      }
      else {
        core_weather_cpp_CWeather_createLightningStrike_FUN_005eeeb0(this_ptr,0.1,1);
      }
    }
    else {
      fVar6 = this_ptr->sub_flash_interval - fVar4;
      this_ptr->sub_flash_interval = fVar6;
      if (fVar6 < 0.0) {
        fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,this_ptr->max_flash_interval);
        this_ptr_00 = g_CEventListPtr;
        this_ptr->sub_flash_interval = fVar6;
        iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (this_ptr_00,"noLightningFlash");
        if (iVar7 == 0) {
          this_ptr->lightning_active = 1;
          fVar3 = (float)g_CDemonCameraInstance.corona_blend_factor;
          fVar6 = (float)1.5259021896696401e-05;
          this_ptr->base_ambient = fVar3 * fVar6;
          fVar10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.3);
          local_2c = fVar10 + fVar3 * fVar6;
          if (1.0 < local_2c) {
            local_2c = 1.0;
          }
          fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.01,local_2c * (float)0.59999999999999998)
          ;
          this_ptr->flash_timer = fVar6;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
                    (&g_CDemonCameraInstance,local_2c);
        }
      }
    }
    if ((float)15 <= this_ptr->max_flash_interval) {
      this_ptr->max_flash_interval = 15.0;
    }
    else {
      fVar5 = (float10)1;
      fVar7 = (float10)1.4426950408889634 *
              ((float10)fVar4 * (float10)0.10000000000000001 +
              (float10)0.6931471805599453 * (float10)this_ptr->max_flash_interval);
      fVar8 = (float10)f2xm1(fVar7 - (fVar7 / fVar5) * fVar5);
      fVar9 = (float10)fscale(fVar8 + fVar5,fVar7);
      this_ptr->max_flash_interval = (float)fVar9;
    }
    iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(UINT_03f96b40);
    if (iVar7 == 0) {
      UINT_03f96b40 =
           core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,this_ptr,"rain.wav @ .1");
      return;
    }
  }
  return;
}
