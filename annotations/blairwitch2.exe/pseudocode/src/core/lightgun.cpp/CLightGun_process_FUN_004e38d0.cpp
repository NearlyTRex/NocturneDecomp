// Name: core_lightgun.cpp_CLightGun_process_FUN_004e38d0
// Address: 004e38d0
// Address Range: [[004e38d0, 004e3ac3]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_process_FUN_004e38d0(CLightGun *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lightgun_cpp_CLightGun_process_FUN_004e38d0(CLightGun *this_ptr,float delta_time)

{
  EWeaponState EVar1;
  float base_frequency;
  float fVar2;
  int iVar3;
  CDemonFilter *filter_ptr;
  uint uVar4;
  float in_stack_00000018;
  
  core_weapon_cpp_CWeapon_process_FUN_00589c80(&this_ptr->base,delta_time);
  fVar2 = core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004dcfb0
                    ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),_DAT_005f95d0
                    );
  fVar2 = (_DAT_005f95d0 / fVar2) * in_stack_00000018 + this_ptr->charge_level;
  this_ptr->charge_level = fVar2;
  if (_DAT_005f95d0 < fVar2) {
    this_ptr->charge_level = _DAT_005f95d0;
  }
  EVar1 = (this_ptr->base).weapon_state;
  this_ptr->charge_ratio = this_ptr->charge_level / _DAT_005f95d0;
  if (EVar1 == WEAPON_STATE_IN_HAND) {
    fVar2 = (_DAT_005f95dc - 0x40000000) * this_ptr->charge_ratio + 0x40000000;
    base_frequency = _DAT_005f95e0 + (_DAT_005f95e4 - _DAT_005f95e0) * this_ptr->charge_ratio;
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handle);
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170
                (&(this_ptr->base).base.location.position);
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(fVar2);
      sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00550290(base_frequency);
      uVar4 = sound_sndmain_cpp_startSfx_FUN_005506b0("@cre-charge.wav" + 1);
      this_ptr->sfx_handle = uVar4;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
    else {
      sound_sndmain_cpp_setSfxVolume_FUN_00550f20(this_ptr->sfx_handle,fVar2);
      sound_sndmain_cpp_setSfxBaseFrequency_FUN_00550f50(this_ptr->sfx_handle,base_frequency);
    }
    core_lightgun_cpp_FUN_004e2bf0(this_ptr);
    if (this_ptr->fire_flash_pending != 0) {
      g_CDemonLightInstance.antialiasing_enabled = 1;
      filter_ptr = core_dfilter_cpp_CFilterCache_getFilter_FUN_00447660
                             (g_CFilterCachePtr,"spark2.raw",0);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_createLightningStrike_FUN_0058aa30(0x02661F80,0.1,0);
    }
    core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(g_CDemonSetPtr,&g_CDemonLightInstance);
    this_ptr->fire_flash_pending = 0;
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  this_ptr->fire_flash_pending = 0;
  return;
}
