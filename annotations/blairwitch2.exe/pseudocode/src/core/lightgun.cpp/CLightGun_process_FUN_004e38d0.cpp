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
  fVar2 = (_DAT_005f95d0 / fVar2) * in_stack_00000018 + *(float *)&this_ptr->field_0x6dc;
  *(float *)&this_ptr->field_0x6dc = fVar2;
  if (_DAT_005f95d0 < fVar2) {
    *(float *)&this_ptr->field_0x6dc = _DAT_005f95d0;
  }
  EVar1 = (this_ptr->base).weapon_state;
  *(float *)&this_ptr->field_0x6e0 = *(float *)&this_ptr->field_0x6dc / _DAT_005f95d0;
  if (EVar1 == WEAPON_STATE_IN_HAND) {
    fVar2 = (_DAT_005f95dc - 0x40000000) * *(float *)&this_ptr->field_0x6e0 + 0x40000000;
    base_frequency =
         _DAT_005f95e0 + (_DAT_005f95e4 - _DAT_005f95e0) * *(float *)&this_ptr->field_0x6e0;
    iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x6d8);
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170
                ((CVector3f *)&(this_ptr->base).base.field_0x20);
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(fVar2);
      sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00550290(base_frequency);
      uVar4 = sound_sndmain_cpp_FUN_005506b0("@cre-charge.wav" + 1);
      *(uint *)&this_ptr->field_0x6d8 = uVar4;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
    else {
      sound_sndmain_cpp_FUN_00550f20(*(uint *)&this_ptr->field_0x6d8,fVar2);
      sound_sndmain_cpp_FUN_00550f50(*(uint *)&this_ptr->field_0x6d8,base_frequency);
    }
    core_lightgun_cpp_FUN_004e2bf0(this_ptr);
    if (*(int *)&this_ptr->field_0x6d4 != 0) {
      g_CDemonLightInstance.antialiasing_enabled = 1;
      filter_ptr = (CDemonFilter *)
                   core_dfilter_cpp_FUN_00447660(g_CFilterCachePtr,"spark2.raw",0);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_createLightningStrike_FUN_0058aa30(0x02661F80,0.1,0);
    }
    core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(g_CDemonSetPtr,&g_CDemonLightInstance);
    *(uint *)&this_ptr->field_0x6d4 = 0;
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x6d8);
  *(uint *)&this_ptr->field_0x6d4 = 0;
  return;
}
