// Name: core_weather.cpp_CWeather_update_FUN_0057bda0
// Address: 0057bda0
// Address Range: [[0057bda0, 0057c2bb]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_update_FUN_0057bda0(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_update_FUN_0057bda0(CWeather *this_ptr)

{
  EWeatherType EVar1;
  float fVar2;
  CEventList *this_ptr_00;
  CVector3f *pCVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_103c [1014];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  CVector3f local_48;
  float local_3c;
  float local_38 [4];
  int local_28;
  int local_24;
  float local_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar6 = 0;
  local_38[2] = g_CGamePtr->delta_time_float;
  local_20 = local_38[2];
  if (this_ptr->lightning_active != 0) {
    fVar2 = this_ptr->flash_timer - local_38[2];
    this_ptr->flash_timer = fVar2;
    if ((fVar2 < 0.0) ||
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (g_CEventList_PTR_005fba60,"noLightningFlash"), iVar4 != 0)) {
      core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
                (&g_CDemonCameraInstance,this_ptr->base_ambient);
      this_ptr->lightning_active = 0;
      this_ptr->flash_timer = 0.0;
    }
    else {
      local_14 = (float)g_CDemonCameraInstance.corona_blend_factor;
      local_38[3] = (float)g_CDemonCameraInstance.corona_blend_factor * (float)1.5259021896696401e-05 -
                    local_38[2];
      if (local_38[3] < this_ptr->base_ambient) {
        local_38[3] = this_ptr->base_ambient;
        this_ptr->lightning_active = 0;
        this_ptr->flash_timer = 0.0;
      }
      core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
                (&g_CDemonCameraInstance,local_38[3]);
    }
  }
  if ((this_ptr->weather_type != WEATHER_TYPE_RAIN) && (this_ptr->weather_type != 5)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(g_UINT_02d20258);
  }
  if (this_ptr->weather_type != WEATHER_TYPE_NONE) {
    local_28 = 0;
    if (0 < (int)this_ptr[1].weather_type) {
      local_24 = 0;
      iVar4 = 0;
      local_1c = &g_CVector3f_02d0c208;
      local_18 = (CVector3f *)&DAT_02d17d88;
      do {
        *(byte *)(local_28 + 0x2d1fa88) = 0;
        *(float *)((int)&g_CVector3f_02d0c208.y + iVar4) =
             *(float *)((int)&g_CVector3f_02d0c208.y + iVar4) - this_ptr->particle_speed * local_20;
        EVar1 = this_ptr->weather_type;
        if (((EVar1 == WEATHER_TYPE_SNOW) || (EVar1 == (WEATHER_TYPE_SNOW|WEATHER_TYPE_RAIN))) ||
           (EVar1 == 4)) {
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          *(float *)(&DAT_02d17d88 + iVar4) =
               local_14 * local_20 + *(float *)(&DAT_02d17d88 + iVar4);
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          pCVar3 = local_1c;
          *(float *)(&DAT_02d17d90 + iVar4) =
               local_14 * local_20 + *(float *)(&DAT_02d17d90 + iVar4);
          local_3c = local_18->x * local_20;
          local_38[0] = local_18->y * local_20;
          local_38[1] = local_18->z * local_20;
          local_54 = local_3c;
          *(float *)((int)&stack0xffffffb0 + (uint)bVar6 * -8) = local_38[(uint)bVar6 * -2];
          *(float *)((int)&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          pCVar3->x = pCVar3->x + local_54;
          pCVar3->y = pCVar3->y + local_50;
          pCVar3->z = pCVar3->z + local_4c;
        }
        if (*(float *)((int)&g_CVector3f_02d0c208.y + iVar4) < *(float *)(local_24 + 0x2d1db48)) {
          puVar5 = (uint *)((int)&g_CVector3f_02d0c208.x + iVar4);
          if (puVar5 != (uint *)(&DAT_02d11fc8 + iVar4)) {
            *puVar5 = *(uint *)(&DAT_02d11fc8 + iVar4);
            *(uint *)((int)&g_CVector3f_02d0c208.y + iVar4) =
                 *(uint *)(&DAT_02d11fcc + iVar4);
            *(uint *)((int)&g_CVector3f_02d0c208.z + iVar4) =
                 *(uint *)(&DAT_02d11fd0 + iVar4);
          }
          if (local_18 != &g_CVector3f_02cfd900) {
            local_18->x = g_CVector3f_02cfd900.x;
            local_18->y = g_CVector3f_02cfd900.y;
            local_18->z = g_CVector3f_02cfd900.z;
          }
          if ((this_ptr->weather_type == WEATHER_TYPE_RAIN) || (this_ptr->weather_type == 5)) {
            fVar2 = *(float *)(local_24 + 0x2d1db48);
            puVar5 = (uint *)(iVar4 + 0x2d0c20c + (uint)bVar6 * -8);
            local_48.x = *(float *)((int)&g_CVector3f_02d0c208.x + iVar4);
            *(uint *)((int)&local_48 + (uint)bVar6 * -8 + 4) = *puVar5;
            *(uint *)((int)&local_48 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                 puVar5[(uint)bVar6 * -2 + 1];
            local_48.y = fVar2;
            core_fire_cpp_CFireEffect_createRainDrop_FUN_004a3f20
                      (g_CFireEffect_PTR_005fc5a0,&local_48,(CVector3f *)0x0);
            core_fire_cpp_CFireEffect_createRainDrop_FUN_004a3f20
                      (g_CFireEffect_PTR_005fc5a0,&local_48,(CVector3f *)0x0);
            core_fire_cpp_CFireEffect_createRainDrop_FUN_004a3f20
                      (g_CFireEffect_PTR_005fc5a0,&local_48,(CVector3f *)0x0);
            core_fire_cpp_CFireEffect_createRainDrop_FUN_004a3f20
                      (g_CFireEffect_PTR_005fc5a0,&local_48,(CVector3f *)0x0);
          }
        }
        iVar4 = iVar4 + 0xc;
        local_1c = local_1c + 1;
        local_18 = local_18 + 1;
        local_24 = local_24 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < (int)this_ptr[1].weather_type);
    }
    if ((this_ptr->weather_type != WEATHER_TYPE_RAIN) && (this_ptr->weather_type != 5)) {
      return;
    }
    fVar2 = this_ptr->lightning_countdown - local_20;
    this_ptr->lightning_countdown = fVar2;
    if (0.0 <= fVar2) {
      fVar2 = this_ptr->sub_flash_interval - local_20;
      this_ptr->sub_flash_interval = fVar2;
      if (fVar2 < 0.0) {
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                             (0.1,this_ptr->max_flash_interval);
        this_ptr_00 = g_CEventList_PTR_005fba60;
        this_ptr->sub_flash_interval = local_14;
        iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (this_ptr_00,"noLightningFlash");
        if (iVar4 == 0) {
          this_ptr->lightning_active = 1;
          local_14 = (float)g_CDemonCameraInstance.corona_blend_factor;
          local_58 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)1.5259021896696401e-05;
          this_ptr->base_ambient = local_58;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.3);
          local_58 = local_14 + local_58;
          if (1.0 < local_58) {
            local_58 = 1.0;
          }
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                               (0.01,local_58 * (float)0.59999999999999998);
          this_ptr->flash_timer = local_14;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
                    (&g_CDemonCameraInstance,local_58);
        }
      }
    }
    else if ((this_ptr->weather_type == 5) ||
            (iVar4 = core_actor_cpp_randomChance_FUN_0040cf40(0.4), iVar4 != 0)) {
      core_weather_cpp_CWeather_createLightningStrike_FUN_0057c2e0(this_ptr,0.1,1);
    }
    else {
      core_weather_cpp_CWeather_createThunder_FUN_0057c840(this_ptr);
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(g_UINT_02d20258);
    if (iVar4 == 0) {
      if (this_ptr->weather_type != 5) {
        g_UINT_02d20258 =
             core_sound_cpp_CSound_playSound_FUN_005609b0
                       (g_CSound_PTR_006045f8,this_ptr,"rain.wav @ .1");
        return;
      }
      g_UINT_02d20258 =
           core_sound_cpp_CSound_playSound_FUN_005609b0
                     (g_CSound_PTR_006045f8,this_ptr,"rain.wav @ .5");
    }
  }
  return;
}
