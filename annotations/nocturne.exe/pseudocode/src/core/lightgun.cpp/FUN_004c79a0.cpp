// Name: core_lightgun.cpp_FUN_004c79a0
// Address: 004c79a0
// Address Range: [[004c79a0, 004c7c58]]
// Convention: unknown
// Signature: void core_lightgun_cpp_FUN_004c79a0(CLightGun *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lightgun_cpp_FUN_004c79a0(CLightGun *param_1,float param_2)

{
  float base_frequency;
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CDemonFilter *filter_ptr;
  uint uVar4;
  double dVar5;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(&param_1->base,param_2);
  fVar1 = core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20
                    ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),
                     30.0f);
  fVar1 = (30.0f / fVar1) * param_2 + param_1->charge_level;
  param_1->charge_level = fVar1;
  if (30.0f < fVar1) {
    param_1->charge_level = 30.0f;
  }
  fVar1 = param_1->charge_level / 30.0f;
  param_1->charge_ratio = fVar1;
  iVar2 = (param_1->base).weapon_state;
  dVar5 = round((double)(fVar1 * (float)100));
  (param_1->base).ammo_count = (int)ROUND(dVar5);
  if (iVar2 == 2) {
    fVar1 = (2.5f - 2.0f) * param_1->charge_ratio + 2.0f;
    base_frequency = 1.0f + (2.0f - 1.0f) * param_1->charge_ratio;
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handle);
    if (iVar2 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
                (&(param_1->base).base.location.position);
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(fVar1);
      sound_sndmain_cpp_FUN_00526120(base_frequency);
      uVar4 = sound_sndmain_cpp_startSfx_FUN_005265a0("cre-charge.wav");
      param_1->sfx_handle = uVar4;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
    else {
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0(param_1->sfx_handle,fVar1);
      sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(param_1->sfx_handle,base_frequency);
    }
    pCVar3 = (*((param_1->base).base.vtable._ub)->getCarrier)((CDemonActor *)param_1);
    if (pCVar3 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      xxx_unk_c_FUN_004940d0
                (INT_005b9284,
                 1.0f + (1.58f - 1.0f) * param_1->charge_ratio,
                 (0.45f - 0.3f) * param_1->charge_ratio + 0.3f);
    }
    core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(param_1);
    if (param_1->fire_flash_pending == 0) {
      _DAT_01c76310 = 0;
    }
    else {
      _DAT_01c76310 = 1;
      filter_ptr = (CDemonFilter *)
                   core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20
                             (0x014B8DE8,"lgunmask.raw",0);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
                ((CDemonLight *)&DAT_01c74640,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(0x02DDF9F0,0.1,0);
    }
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(0x01E57284,(CDemonLight *)&DAT_01c74640);
    param_1->fire_flash_pending = 0;
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handle);
  pCVar3 = (*((param_1->base).base.vtable._ub)->getCarrier)((CDemonActor *)param_1);
  if (pCVar3 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    xxx_unk_c_FUN_004940d0(INT_005b9284);
  }
  param_1->fire_flash_pending = 0;
  return;
}
