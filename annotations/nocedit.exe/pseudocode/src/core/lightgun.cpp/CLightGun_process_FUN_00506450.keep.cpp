// Name: core_lightgun.cpp_CLightGun_process_FUN_00506450
// Address: 00506450
// MANUAL RECONSTRUCTION
// Address Range: [[00506450, 00506663]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_process_FUN_00506450(CLightGun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_process_FUN_00506450(CLightGun *this_ptr,float delta_time)

{
  CHero *sim_target;
  float fVar2;
  float fVar1;
  int iVar2;
  CDemonFilter *filter_ptr;
  uint uVar3;
  float base_frequency;

#if NOCTURNE_AUTHENTIC_NETPLAY
  sim_target = g_HeroActors[g_LocalHeroIndex];
#else
  sim_target = nocturne_net_sim_target_for((CDemonActor *)this_ptr);
#endif
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  fVar1 = core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
                    (&sim_target->inventory,30.0f);
  fVar2 = (30.0f / fVar1) * delta_time + this_ptr->charge_level;
  this_ptr->charge_level = fVar2;
  if (30.0f < fVar2) {
    this_ptr->charge_level = 30.0f;
  }
  fVar2 = this_ptr->charge_level / 30.0f;
  this_ptr->charge_ratio = fVar2;
  (this_ptr->base).ammo_count = (int)ROUND(ROUND(fVar2 * (float)100));
  if ((this_ptr->base).weapon_state == 2) {
    fVar2 = (2.5f - 2.0f) * this_ptr->charge_ratio + 2.0f;
    base_frequency = 1.0f + (2.0f - 1.0f) * this_ptr->charge_ratio;
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
    if (iVar2 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
                (&(this_ptr->base).base.location.position);
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(fVar2);
      sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(base_frequency);
      uVar3 = sound_sndmain_cpp_startSfx_FUN_005a8e90("cre-charge.wav");
      this_ptr->sfx_handle = uVar3;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(this_ptr->sfx_handle,fVar2);
      sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(this_ptr->sfx_handle,base_frequency);
    }
    core_lightgun_cpp_CLightGun_updateBeamLight_FUN_00505ac0(this_ptr);
    if (this_ptr->fire_flash_pending == 0) {
      g_CDemonLightInstance.antialiasing_enabled = 0;
    }
    else {
      g_CDemonLightInstance.antialiasing_enabled = 1;
      filter_ptr = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                             (g_CFilterCachePtr,"lgunmask.raw",0);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_createLightningStrike_FUN_005eeeb0(g_CWeatherPtr,0.1,0);
    }
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(g_CDemonSetPtr,&g_CDemonLightInstance);
    this_ptr->fire_flash_pending = 0;
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  this_ptr->fire_flash_pending = 0;
  return;
}
