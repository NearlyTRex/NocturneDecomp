// Name: core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0
// Address: 005eeaf0
// Address Range: [[005eeaf0, 005eec56] [005eec84, 005eede0] [005eee7c, 005eeeae]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_weather.cpp_CWeather_SomethingWithLightingThunder(CWeather* param_1)
    */

void core_weather_cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0(void)

{
  CEventList *this_ptr;
  float fVar1;
  uint extraout_EAX;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int *in_stack_00000004;
  ulonglong local_30;
  float *pfStack_2c;
  float local_28;
  float local_18;
  float local_14;
  
  if (in_stack_00000004[9] != 0) {
    fVar1 = (float)in_stack_00000004[10] - g_CGamePtr->delta_time_float;
    in_stack_00000004[10] = (int)fVar1;
    if (0.0 <= fVar1) {
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"noLightningFlash");
      if (iVar2 == 0) {
        local_14 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)_DAT_00657bb4 -
                   local_18;
        if (local_14 < (float)in_stack_00000004[0xc]) {
          local_14 = (float)in_stack_00000004[0xc];
          in_stack_00000004[9] = 0;
          in_stack_00000004[10] = 0;
        }
        core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
                  (&g_CDemonCameraInstance,local_14);
        goto LAB_005eeb1c;
      }
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
              (&g_CDemonCameraInstance,(float)in_stack_00000004[0xc]);
    in_stack_00000004[9] = 0;
    in_stack_00000004[10] = 0;
  }
LAB_005eeb1c:
  if (*in_stack_00000004 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(DAT_03f96b40);
    return;
  }
  iVar3 = 0;
  iVar4 = 0;
  iVar2 = 0;
  do {
    (&DAT_03f96a78)[iVar3] = 0;
    fVar1 = *(float *)((int)&DAT_03f95df8[0].y + iVar2) - (float)in_stack_00000004[1] * local_28;
    *(float *)((int)&DAT_03f95df8[0].y + iVar2) = fVar1;
    if ((fVar1 < *(float *)((int)&DAT_03f96758 + iVar4)) &&
       (*(float *)((int)&DAT_03f95df8[0].y + iVar2) =
             *(float *)((int)&DAT_03f95df8[0].y + iVar2) + _DAT_00657bd4, *in_stack_00000004 == 1))
    {
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
      local_28 = 0.0;
      pfStack_2c = &local_14;
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
    }
    iVar2 = iVar2 + 0xc;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 200);
  if (*in_stack_00000004 == 1) {
    fVar1 = (float)in_stack_00000004[8];
    in_stack_00000004[8] = (int)(fVar1 - local_28);
    if (fVar1 - local_28 < 0.0) {
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
      if (iVar2 == 0) {
        core_weather_cpp_CWeather_SomethingWithThunder_FUN_005ef140();
      }
      else {
        core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0();
      }
    }
    else {
      fVar1 = (float)in_stack_00000004[0xb];
      in_stack_00000004[0xb] = (int)(fVar1 - local_28);
      if (fVar1 - local_28 < 0.0) {
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,(float)in_stack_00000004[0xd]);
        this_ptr = g_CEventListPtr;
        in_stack_00000004[0xb] = (int)fVar1;
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (this_ptr,"noLightningFlash");
        if (iVar2 == 0) {
          in_stack_00000004[9] = 1;
          in_stack_00000004[0xc] =
               (int)((float)g_CDemonCameraInstance.corona_blend_factor * (float)_DAT_00657bb4);
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.3);
          pfStack_2c = (float *)(local_14 + (float)pfStack_2c);
          if (1.0 < (float)pfStack_2c) {
            pfStack_2c = (float *)0x3f800000;
          }
          fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                            (0.01,(float)pfStack_2c * (float)_DAT_00657bbc);
          in_stack_00000004[10] = (int)fVar1;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
                    (&g_CDemonCameraInstance,local_28);
        }
      }
    }
    if ((float)_DAT_00657bc4 <= (float)in_stack_00000004[0xd]) {
      in_stack_00000004[0xd] = 0x41700000;
    }
    else {
      fVar7 = (float10)1;
      fVar5 = (float10)1.4426950408889634 *
              ((float10)local_28 * (float10)_DAT_00657bcc +
              (float10)0.6931471805599453 * (float10)(float)in_stack_00000004[0xd]);
      fVar6 = (float10)f2xm1(fVar5 - (fVar5 / fVar7) * fVar7);
      fVar7 = (float10)fscale(fVar6 + fVar7,fVar5);
      in_stack_00000004[0xd] = (int)(float)fVar7;
    }
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(DAT_03f96b40);
    if (iVar2 == 0) {
      core_sound_cpp_CSound_playSound_FUN_005b3a20
                (g_CSoundPtr,in_stack_00000004,"rain.wav @ .1");
      DAT_03f96b40 = extraout_EAX;
      return;
    }
  }
  return;
}
