// Name: core_weather.cpp_CWeather_FUN_005eeaf0
// Address: 005eeaf0
// Address Range: [[005eeaf0, 005eec56] [005eec84, 005eede0] [005eee7c, 005eeeae]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_FUN_005eeaf0(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_FUN_005eeaf0(CWeather *this_ptr)

{
  float fVar1;
  float fVar2;
  CEventList *this_ptr_00;
  float fVar3;
  uint extraout_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_2c;
  float local_18;
  
  fVar1 = g_CGamePtr->delta_time_float;
  if (*(int *)(this_ptr->unk + 0x24) != 0) {
    fVar3 = *(float *)(this_ptr->unk + 0x28) - fVar1;
    *(float *)(this_ptr->unk + 0x28) = fVar3;
    if (0.0 <= fVar3) {
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"noLightningFlash");
      if (iVar4 == 0) {
        local_18 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)1.5259021896696401e-05 -
                   fVar1;
        if (local_18 < *(float *)(this_ptr->unk + 0x30)) {
          local_18 = *(float *)(this_ptr->unk + 0x30);
          this_ptr->unk[0x24] = '\0';
          this_ptr->unk[0x25] = '\0';
          this_ptr->unk[0x26] = '\0';
          this_ptr->unk[0x27] = '\0';
          this_ptr->unk[0x28] = '\0';
          this_ptr->unk[0x29] = '\0';
          this_ptr->unk[0x2a] = '\0';
          this_ptr->unk[0x2b] = '\0';
        }
        core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
                  (&g_CDemonCameraInstance,local_18);
        goto LAB_005eeb1c;
      }
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
              (&g_CDemonCameraInstance,*(float *)(this_ptr->unk + 0x30));
    this_ptr->unk[0x24] = '\0';
    this_ptr->unk[0x25] = '\0';
    this_ptr->unk[0x26] = '\0';
    this_ptr->unk[0x27] = '\0';
    this_ptr->unk[0x28] = '\0';
    this_ptr->unk[0x29] = '\0';
    this_ptr->unk[0x2a] = '\0';
    this_ptr->unk[0x2b] = '\0';
  }
LAB_005eeb1c:
  if (*(int *)this_ptr->unk == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(DAT_03f96b40);
    return;
  }
  iVar5 = 0;
  iVar6 = 0;
  iVar4 = 0;
  do {
    (&DAT_03f96a78)[iVar5] = 0;
    fVar3 = *(float *)((int)&DAT_03f95df8[0].y + iVar4) - *(float *)(this_ptr->unk + 4) * fVar1;
    *(float *)((int)&DAT_03f95df8[0].y + iVar4) = fVar3;
    if ((fVar3 < *(float *)((int)&DAT_03f96758 + iVar6)) &&
       (*(float *)((int)&DAT_03f95df8[0].y + iVar4) =
             *(float *)((int)&DAT_03f95df8[0].y + iVar4) + 100.0f,
       *(int *)this_ptr->unk == 1)) {
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
    }
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar5 < 200);
  if (*(int *)this_ptr->unk == 1) {
    fVar3 = *(float *)(this_ptr->unk + 0x20) - fVar1;
    *(float *)(this_ptr->unk + 0x20) = fVar3;
    if (fVar3 < 0.0) {
      iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
      if (iVar4 == 0) {
        core_weather_cpp_CWeather_SomethingWithThunder_FUN_005ef140();
      }
      else {
        core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0();
      }
    }
    else {
      fVar3 = *(float *)(this_ptr->unk + 0x2c) - fVar1;
      *(float *)(this_ptr->unk + 0x2c) = fVar3;
      if (fVar3 < 0.0) {
        fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,*(float *)(this_ptr->unk + 0x34));
        this_ptr_00 = g_CEventListPtr;
        *(float *)(this_ptr->unk + 0x2c) = fVar3;
        iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (this_ptr_00,"noLightningFlash");
        if (iVar4 == 0) {
          this_ptr->unk[0x24] = '\x01';
          this_ptr->unk[0x25] = '\0';
          this_ptr->unk[0x26] = '\0';
          this_ptr->unk[0x27] = '\0';
          fVar2 = (float)g_CDemonCameraInstance.corona_blend_factor;
          fVar3 = (float)1.5259021896696401e-05;
          *(float *)(this_ptr->unk + 0x30) = fVar2 * fVar3;
          local_2c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.3);
          local_2c = local_2c + fVar2 * fVar3;
          if (1.0 < local_2c) {
            local_2c = 1.0;
          }
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.01,local_2c * (float)0.59999999999999998)
          ;
          *(float *)(this_ptr->unk + 0x28) = fVar3;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
                    (&g_CDemonCameraInstance,local_2c);
        }
      }
    }
    if ((float)15 <= *(float *)(this_ptr->unk + 0x34)) {
      this_ptr->unk[0x34] = '\0';
      this_ptr->unk[0x35] = '\0';
      this_ptr->unk[0x36] = 'p';
      this_ptr->unk[0x37] = 'A';
    }
    else {
      fVar9 = (float10)1;
      fVar7 = (float10)1.4426950408889634 *
              ((float10)fVar1 * (float10)0.10000000000000001 +
              (float10)0.6931471805599453 * (float10)*(float *)(this_ptr->unk + 0x34));
      fVar8 = (float10)f2xm1(fVar7 - (fVar7 / fVar9) * fVar9);
      fVar9 = (float10)fscale(fVar8 + fVar9,fVar7);
      *(float *)(this_ptr->unk + 0x34) = (float)fVar9;
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(DAT_03f96b40);
    if (iVar4 == 0) {
      core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,this_ptr,"rain.wav @ .1");
      DAT_03f96b40 = extraout_EAX;
      return;
    }
  }
  return;
}
