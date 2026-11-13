// Name: core_lightgun.cpp_CLightGun_process_FUN_00500d20
// Address: 00500d20
// Address Range: [[00500d20, 00500f13]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_process_FUN_00500d20(CLightGun *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lightgun_cpp_CLightGun_process_FUN_00500d20(CLightGun *this_ptr,float delta_time)

{
  EWeaponState EVar1;
  float base_frequency;
  float fVar2;
  int iVar3;
  CDemonFilter *filter_ptr;
  uint uVar4;
  float in_stack_00000018;
  
  core_weapon_cpp_CWeapon_process_FUN_005ad770(&this_ptr->base,delta_time);
  fVar2 = core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004fa470
                    ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),_DAT_00603010
                    );
  fVar2 = (_DAT_00603010 / fVar2) * in_stack_00000018 + this_ptr->charge_level;
  this_ptr->charge_level = fVar2;
  if (_DAT_00603010 < fVar2) {
    this_ptr->charge_level = _DAT_00603010;
  }
  EVar1 = (this_ptr->base).weapon_state;
  this_ptr->charge_ratio = this_ptr->charge_level / _DAT_00603010;
  if (EVar1 == WEAPON_STATE_IN_HAND) {
    fVar2 = (_DAT_0060301c - 0x40000000) * this_ptr->charge_ratio + 0x40000000;
    base_frequency = _DAT_00603020 + (_DAT_00603024 - _DAT_00603020) * this_ptr->charge_ratio;
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handle);
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005727e0
                (&(this_ptr->base).base.location.position);
      sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(fVar2);
      sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00572900(base_frequency);
      uVar4 = sound_sndmain_cpp_startSfx_FUN_00572d20("cre-charge.wav");
      this_ptr->sfx_handle = uVar4;
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    }
    else {
      sound_sndmain_cpp_setSfxVolume_FUN_00573950(this_ptr->sfx_handle,fVar2);
      sound_sndmain_cpp_setSfxBaseFrequency_FUN_00573980(this_ptr->sfx_handle,base_frequency);
    }
    core_lightgun_cpp_FUN_00500090(this_ptr);
    if (this_ptr->fire_flash_pending != 0) {
      g_CDemonLightInstance.antialiasing_enabled = 1;
      filter_ptr = core_dfilter_cpp_CFilterCache_getFilter_FUN_0045d7c0
                             (g_CFilterCachePtr,"spark2.raw",0);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_createLightningStrike_FUN_005ae580(0x02C997C0,0.1,0);
    }
    core_set_cpp_CDemonSet_addDynamicLight_FUN_005518e0(g_CDemonSetPtr,&g_CDemonLightInstance);
    this_ptr->fire_flash_pending = 0;
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
  this_ptr->fire_flash_pending = 0;
  return;
}
