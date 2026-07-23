// Name: FUN_004c79a0
// Address: 004c79a0
// Address Range: [[004c79a0, 004c7c58]]
// Convention: unknown
// Signature: void FUN_004c79a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c79a0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  fVar2 = (float)core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20
                           (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,30.0f);
  fVar2 = (30.0f / fVar2) * param_2 + *(float *)(param_1 + 0x578);
  *(float *)(param_1 + 0x578) = fVar2;
  if (30.0f < fVar2) {
    *(float *)(param_1 + 0x578) = 30.0f;
  }
  fVar4 = (float10)*(float *)(param_1 + 0x578) / (float10)30.0f;
  *(float *)(param_1 + 0x57c) = (float)fVar4;
  iVar3 = *(int *)(param_1 + 0x2cc);
  uVar5 = 0x4c7a27;
  fVar4 = (float10)round(fVar4 * (float10)100);
  *(int *)(param_1 + 0x560) = (int)ROUND(fVar4);
  if (iVar3 == 2) {
    fVar2 = (2.5f - 2.0f) * *(float *)(param_1 + 0x57c) + 2.0f;
    fVar1 = 1.0f + (2.0f - 1.0f) * *(float *)(param_1 + 0x57c);
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0x574));
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(param_1 + 0x20);
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(fVar2);
      FUN_00526120(fVar1);
      uVar5 = sound_sndmain_cpp_startSfx_FUN_005265a0("cre-charge.wav");
      *(uint *)(param_1 + 0x574) = uVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
    else {
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0(*(uint *)(param_1 + 0x574),fVar2);
      sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(*(uint *)(param_1 + 0x574),fVar1);
    }
    iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
    if (iVar3 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      FUN_004940d0(0x01C70F74,
                   1.0f + (1.58f - 1.0f) * *(float *)(param_1 + 0x57c),
                   (0.45f - 0.3f) * *(float *)(param_1 + 0x57c) + 0.3f)
      ;
    }
    core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(param_1);
    if (*(int *)(param_1 + 0x570) == 0) {
      _DAT_01c76310 = 0;
    }
    else {
      _DAT_01c76310 = 1;
      uVar5 = core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20
                        (0x014B8DE8,"lgunmask.raw",0);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0(&DAT_01c74640,uVar5,0,0,0);
      core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(0x02DDF9F0,0x3dcccccd,0);
    }
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(0x01E57284,&DAT_01c74640);
    *(uint *)(param_1 + 0x570) = 0;
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0x574),uVar5);
  iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if (iVar3 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    FUN_004940d0(0x01C70F74);
  }
  *(uint *)(param_1 + 0x570) = 0;
  return;
}
