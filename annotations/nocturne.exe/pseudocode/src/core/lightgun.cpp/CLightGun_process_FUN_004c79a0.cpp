// Name: core_lightgun.cpp_CLightGun_process_FUN_004c79a0
// Address: 004c79a0
// Address Range: [[004c79a0, 004c7c58]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_process_FUN_004c79a0(CLightGun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_process_FUN_004c79a0(CLightGun *this_ptr,float delta_time)

{
  EWeaponState EVar1;
  float base_frequency;
  float fVar2;
  int iVar3;
  CHero *pCVar4;
  CDemonFilter *filter_ptr;
  uint uVar5;
  double dVar6;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(&this_ptr->base,delta_time);
  fVar2 = core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,30.0f);
  fVar2 = (30.0f / fVar2) * delta_time + this_ptr->charge_level;
  this_ptr->charge_level = fVar2;
  if (30.0f < fVar2) {
    this_ptr->charge_level = 30.0f;
  }
  fVar2 = this_ptr->charge_level / 30.0f;
  this_ptr->charge_ratio = fVar2;
  EVar1 = (this_ptr->base).weapon_state;
  dVar6 = round((double)(fVar2 * (float)100));
  (this_ptr->base).ammo_count = (int)ROUND(dVar6);
  if (EVar1 == WEAPON_STATE_IN_HAND) {
    fVar2 = (2.5f - 2.0f) * this_ptr->charge_ratio + 2.0f;
    base_frequency = 1.0f + (2.0f - 1.0f) * this_ptr->charge_ratio;
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handle);
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
                (&(this_ptr->base).base.location.position);
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(fVar2);
      sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00526120(base_frequency);
      uVar5 = sound_sndmain_cpp_startSfx_FUN_005265a0("cre-charge.wav");
      this_ptr->sfx_handle = uVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
    else {
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0(this_ptr->sfx_handle,fVar2);
      sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(this_ptr->sfx_handle,base_frequency);
    }
    pCVar4 = (CHero *)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
    if (pCVar4 == g_HeroActors[g_LocalHeroIndex]) {
      engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0
                (g_CForceFeedback_PTR_005b9284,
                 1.0f + (1.58f - 1.0f) * this_ptr->charge_ratio,
                 (0.45f - 0.3f) * this_ptr->charge_ratio + 0.3f);
    }
    core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(this_ptr);
    if (this_ptr->fire_flash_pending == 0) {
      g_CDemonLight_01c74640.antialiasing_enabled = 0;
    }
    else {
      g_CDemonLight_01c74640.antialiasing_enabled = 1;
      filter_ptr = core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20
                             (0x014B8DE8,"lgunmask.raw",0);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0(&g_CDemonLight_01c74640,filter_ptr,0,0,0)
      ;
      core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(0x02DDF9F0,0.1,0);
    }
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970
              (g_CDemonSet_PTR_005be368,&g_CDemonLight_01c74640);
    this_ptr->fire_flash_pending = 0;
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
  pCVar4 = (CHero *)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 == g_HeroActors[g_LocalHeroIndex]) {
    engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
  }
  this_ptr->fire_flash_pending = 0;
  return;
}
