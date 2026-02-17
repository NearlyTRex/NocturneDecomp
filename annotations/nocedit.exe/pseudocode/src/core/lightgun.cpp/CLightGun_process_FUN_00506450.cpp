// Name: core_lightgun.cpp_CLightGun_process_FUN_00506450
// Address: 00506450
// Address Range: [[00506450, 00506663]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_process_FUN_00506450(CLightGun *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_lightgun_cpp_CLightGun_process_FUN_00506450(CLightGun *this_ptr,float delta_time)

{
  float base_frequency;
  float fVar1;
  int iVar2;
  CDemonFilter *filter_ptr;
  uint uVar3;
  int unaff_ESI;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  fVar1 = core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,30.0f);
  fVar1 = (30.0f / fVar1) * delta_time + *(float *)(this_ptr->unk + 8);
  *(float *)(this_ptr->unk + 8) = fVar1;
  if (30.0f < fVar1) {
    *(float *)(this_ptr->unk + 8) = 30.0f;
  }
  fVar1 = *(float *)(this_ptr->unk + 8) / 30.0f;
  *(float *)(this_ptr->unk + 0xc) = fVar1;
  (this_ptr->base).ammo_count = (int)ROUND(ROUND(fVar1 * (float)100));
  if ((this_ptr->base).weapon_state == 2) {
    fVar1 = (2.5f - 2.0f) * *(float *)(this_ptr->unk + 0xc) + 2.0f;
    base_frequency =
         1.0f + (2.0f - 1.0f) * *(float *)(this_ptr->unk + 0xc);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 4));
    if (iVar2 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
                (&(this_ptr->base).base.location.position);
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(fVar1);
      sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(base_frequency);
      uVar3 = sound_sndmain_cpp_startSfx_FUN_005a8e90("cre-charge.wav");
      *(uint *)(this_ptr->unk + 4) = uVar3;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(*(uint *)(this_ptr->unk + 4),fVar1);
      sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40
                (*(uint *)(this_ptr->unk + 4),base_frequency);
    }
    core_lightgun_cpp_CLightGun_FUN_00505ac0(this_ptr);
    if (*(int *)this_ptr->unk == 0) {
      g_CDemonLightInstance.antialiasing_enabled = 0;
    }
    else {
      g_CDemonLightInstance.antialiasing_enabled = 1;
      filter_ptr = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                             (g_CFilterCachePtr,"lgunmask.raw",(char *)0x0,unaff_ESI);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_createLightningStrike_FUN_005eeeb0(g_CWeatherPtr,0.1,0);
    }
    core_set_cpp_CDemonSet_FUN_0056d090(g_CDemonSetPtr);
    this_ptr->unk[0] = '\0';
    this_ptr->unk[1] = '\0';
    this_ptr->unk[2] = '\0';
    this_ptr->unk[3] = '\0';
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 4));
  this_ptr->unk[0] = '\0';
  this_ptr->unk[1] = '\0';
  this_ptr->unk[2] = '\0';
  this_ptr->unk[3] = '\0';
  return;
}
