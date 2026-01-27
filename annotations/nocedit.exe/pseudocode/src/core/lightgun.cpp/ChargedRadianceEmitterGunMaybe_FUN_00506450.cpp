// Name: core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450
// Address: 00506450
// Address Range: [[00506450, 00506663]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450()

#include "nocturne.h"

/* Signature: byte actors_weapon_lightgun.cpp_ChargedRadianceEmitterGunMaybe(uint
   param_1, uint param_2) */

void core_lightgun_cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450(void)

{
  float base_frequency;
  float fVar1;
  int iVar2;
  CDemonFilter *filter_ptr;
  uint uVar3;
  int unaff_ESI;
  double dVar4;
  CWeapon *in_stack_00000004;
  float in_stack_00000008;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004,in_stack_00000008);
  fVar1 = core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,30.0f);
  fVar1 = (30.0f / fVar1) * in_stack_00000008 +
          *(float *)(in_stack_00000004[1].base.actor_name + 8);
  *(float *)(in_stack_00000004[1].base.actor_name + 8) = fVar1;
  if (30.0f < fVar1) {
    *(float *)(in_stack_00000004[1].base.actor_name + 8) = 30.0f;
  }
  fVar1 = *(float *)(in_stack_00000004[1].base.actor_name + 8) / 30.0f;
  *(float *)(in_stack_00000004[1].base.actor_name + 0xc) = fVar1;
  iVar2 = in_stack_00000004->weapon_state;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * (float)100));
  in_stack_00000004->ammo_count = (int)ROUND(dVar4);
  if (iVar2 == 2) {
    fVar1 = (2.5f - 2.0f) *
            *(float *)(in_stack_00000004[1].base.actor_name + 0xc) + 2.0f;
    base_frequency =
         1.0f +
         (2.0f - 1.0f) * *(float *)(in_stack_00000004[1].base.actor_name + 0xc);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[1].base.actor_name + 4));
    if (iVar2 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
                (&(in_stack_00000004->base).location.position);
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(fVar1);
      sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(base_frequency);
      uVar3 = sound_sndmain_cpp_startSfx_FUN_005a8e90("cre-charge.wav");
      *(uint *)(in_stack_00000004[1].base.actor_name + 4) = uVar3;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (*(uint *)(in_stack_00000004[1].base.actor_name + 4),fVar1);
      sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40
                (*(uint *)(in_stack_00000004[1].base.actor_name + 4),base_frequency);
    }
    core_lightgun_cpp_FUN_00505ac0();
    if (*(int *)in_stack_00000004[1].base.actor_name == 0) {
      g_CDemonLightInstance.antialiasing_enabled = 0;
    }
    else {
      g_CDemonLightInstance.antialiasing_enabled = 1;
      filter_ptr = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                             (g_CFilterCachePtr,"lgunmask.raw",(char *)0x0,unaff_ESI);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0();
    }
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
    in_stack_00000004[1].base.actor_name[0] = '\0';
    in_stack_00000004[1].base.actor_name[1] = '\0';
    in_stack_00000004[1].base.actor_name[2] = '\0';
    in_stack_00000004[1].base.actor_name[3] = '\0';
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[1].base.actor_name + 4));
  in_stack_00000004[1].base.actor_name[0] = '\0';
  in_stack_00000004[1].base.actor_name[1] = '\0';
  in_stack_00000004[1].base.actor_name[2] = '\0';
  in_stack_00000004[1].base.actor_name[3] = '\0';
  return;
}
