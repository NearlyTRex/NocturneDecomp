// Name: FUN_0048ab60
// Address: 0048ab60
// Address Range: [[0048ab60, 0048acb1] [0048acc0, 0048ae81]]
// Convention: unknown
// Signature: void FUN_0048ab60(undefined4 param_1,float *param_2,int param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ab60(uint param_1,float *param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint *puVar5;
  char *pcVar6;
  byte bVar7;
  char acStack_60 [52];
  float local_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar7 = 0;
  if ((*(float *)(param_3 + 4) < (float)_DAT_005814a4) &&
     (_DAT_005814ac < (double)*(float *)(param_3 + 4))) {
    pfVar4 = (float *)&DAT_01c20148;
    local_14 = 1;
    if ((param_5 == 0) ||
       (iVar1 = (**(code **)(*(int *)(param_5 + 0x14c) + 0x44))(param_5), iVar1 != 0)) {
      if ((local_14 != 0) && (iVar1 = 0, 0 < _DAT_01c20140)) {
        do {
          local_20 = *param_2 - *pfVar4;
          local_1c = param_2[1] - pfVar4[1];
          local_18 = param_2[2] - pfVar4[2];
          if (&local_2c != &local_20) {
            local_2c = local_20;
            fStack_28 = local_1c;
            fStack_24 = local_18;
          }
          if (fStack_24 * fStack_24 + local_2c * local_2c + fStack_28 * fStack_28 <
              (float)_DAT_005814b4) goto LAB_0048ac45;
          iVar1 = iVar1 + 1;
          pfVar4 = pfVar4 + 0xf;
        } while (iVar1 < _DAT_01c20140);
      }
      if (local_14 != 0) {
        uVar3 = core_fire_cpp_allocateBulletHole_FUN_0048a0e0();
        core_fire_cpp_CBulletHole_init_FUN_00482c80(uVar3,param_2,param_3,param_5);
      }
    }
  }
LAB_0048ac45:
  iVar1 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00446590(0x1fb8508,param_2,0x3f000000);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = _DAT_01c0a13c * 0x2c;
      _DAT_01c0a13c = _DAT_01c0a13c + 1;
      if (0x7ff < _DAT_01c0a13c) {
        _DAT_01c0a13c = 0;
      }
      iVar1 = iVar1 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_00482780
                (&DAT_01c0a140 + iVar2,param_2,0x3e99999a,0,0xffff);
    } while (iVar1 < 8);
    switch(param_4) {
    case 2:
    case 5:
    case 8:
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                  (param_1,param_2,0,0x20000,0x10000,0,0xffff);
      } while (iVar1 < 8);
    }
  }
  puVar5 = &DAT_005b8bd8;
  pcVar6 = acStack_60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  *(ushort *)pcVar6 = *(ushort *)puVar5;
  switch(param_4) {
  case 2:
  case 8:
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(2);
      _sprintf(acStack_60,"ric-%s!?.wav",uVar3);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_0048ae60;
    }
    break;
  case 3:
  case 4:
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(3);
      _sprintf(acStack_60,"ric-%s.wav",uVar3);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_0048ae60;
    }
    break;
  case 5:
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(5);
      _sprintf(acStack_60,"ric-%s!?.wav",uVar3);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_0048ae60;
    }
    break;
  case 7:
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(7);
      _sprintf(acStack_60,"ric-%s!?.wav",uVar3);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_0048ae60;
    }
  }
  if (acStack_60[0] == '\0') {
    return;
  }
LAB_0048ae60:
  core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
            (0x02DC9450,0,acStack_60,param_2,0x3e2e147b);
  return;
}
