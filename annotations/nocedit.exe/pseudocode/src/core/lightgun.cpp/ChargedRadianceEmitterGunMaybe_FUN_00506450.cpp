// Name: core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450
// Address: 00506450
// Address Range: [[00506450, 00506663]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_weapon_lightgun.cpp_ChargedRadianceEmitterGunMaybe(uint
   param_1, uint param_2) */

void core_lightgun_cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450(void)

{
  float volume;
  int iVar1;
  CDemonFilter *filter_ptr;
  uint uVar2;
  int extraout_EDX;
  double dVar3;
  CWeapon *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float fVar4;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  volume = core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
                     (&g_HeroActors[g_LocalHeroIndex]->inventory,DAT_00660a40);
  fVar4 = (DAT_00660a40 / volume) * in_stack_00000010 +
          *(float *)(in_stack_00000004[1].base_actor.actor_name + 8);
  *(float *)(in_stack_00000004[1].base_actor.actor_name + 8) = fVar4;
  if (DAT_00660a40 < fVar4) {
    *(float *)(in_stack_00000004[1].base_actor.actor_name + 8) = DAT_00660a40;
  }
  fVar4 = *(float *)(in_stack_00000004[1].base_actor.actor_name + 8) / DAT_00660a40;
  *(float *)(in_stack_00000004[1].base_actor.actor_name + 0xc) = fVar4;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)(fVar4 * (float)100));
  in_stack_00000004->ammo_count = (int)ROUND(dVar3);
  if (extraout_EDX == 2) {
    fVar4 = _DAT_00660a50 +
            (_DAT_00660a54 - _DAT_00660a50) *
            *(float *)(in_stack_00000004[1].base_actor.actor_name + 0xc);
    iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[1].base_actor.actor_name + 4));
    if (iVar1 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
                (&(in_stack_00000004->base_actor).location.position);
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(volume);
      sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80((float)in_stack_00000004);
      uVar2 = sound_sndmain_cpp_startSfx_FUN_005a8e90("cre-charge.wav");
      *(uint *)(in_stack_00000004[1].base_actor.actor_name + 4) = uVar2;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                (*(uint *)(in_stack_00000004[1].base_actor.actor_name + 4),fVar4);
      sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40
                (*(uint *)(in_stack_00000004[1].base_actor.actor_name + 4),in_stack_0000000c);
    }
    core_lightgun_cpp_FUN_00505ac0();
    if (*(int *)in_stack_00000004[1].base_actor.actor_name == 0) {
      g_CDemonLightInstance.antialiasing_enabled = 0;
    }
    else {
      g_CDemonLightInstance.antialiasing_enabled = 1;
      filter_ptr = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                             (g_CFilterCachePtr,"lgunmask.raw",(char *)0x0,
                              in_stack_00000008);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0();
    }
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[1].base_actor.actor_name + 4));
  in_stack_00000004[1].base_actor.actor_name[0] = '\0';
  in_stack_00000004[1].base_actor.actor_name[1] = '\0';
  in_stack_00000004[1].base_actor.actor_name[2] = '\0';
  in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  return;
}
