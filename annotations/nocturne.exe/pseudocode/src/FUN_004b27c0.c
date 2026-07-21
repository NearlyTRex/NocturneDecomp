// Name: FUN_004b27c0
// Address: 004b27c0
// Address Range: [[004b27c0, 004b2fb1]]
// Convention: unknown
// Signature: undefined4 FUN_004b27c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b27c0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uStack_148;
  float fStack_144;
  uint uStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  int iStack_114;
  uint uStack_110;
  byte auStack_10c [40];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  byte auStack_d8 [12];
  byte auStack_cc [12];
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  byte auStack_84 [12];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  byte local_60 [12];
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_60);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_9c,uVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_00554600(param_1);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0052ea60
              (0x02DC9450,param_1,"45-dry-!.wav",&fStack_9c);
    return 0;
  }
  uStack_b8 = *(uint *)(param_1 + 0x2e0);
  uStack_c0 = 0;
  uStack_bc = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_3c,&uStack_c0);
  fStack_90 = fStack_9c + fStack_3c;
  fStack_8c = fStack_98 + fStack_38;
  fStack_88 = fStack_94 + fStack_34;
  fStack_30 = (float)_DAT_0058542d / *(float *)(param_1 + 0x2e0);
  fStack_78 = fStack_3c * fStack_30;
  fStack_74 = fStack_38 * fStack_30;
  fStack_70 = fStack_34 * fStack_30;
  fStack_6c = fStack_9c - fStack_78;
  fStack_68 = fStack_98 - fStack_74;
  fStack_64 = fStack_94 - fStack_70;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  if (*(int *)(param_1 + 0x2fc) != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,*(int *)(param_1 + 0x2fc));
  }
  iStack_24 = 0;
  do {
    fStack_18 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                 (0x01E57284,&fStack_6c,&fStack_90);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),DAT_00765a98);
    if ((iVar2 != 0) && (iVar4 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x104))(iVar2), 0 < iVar4))
    {
      iVar2 = 0;
    }
    iStack_20 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c78c78);
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_02dd10bc);
    iStack_2c = iVar4;
    iStack_28 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + 0x14cd5c),DAT_0077bd78);
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c7068c);
    if (iVar2 == 0) {
      if (iStack_20 == 0) {
        if (iVar4 == 0) {
          if (iStack_28 == 0) {
            if (iVar5 == 0) {
              FUN_0048ab60(0x01C08D04,0x01E57284 + 0x14cd50,0x01E57284 + 0x14cd40,
                           *(uint *)(0x01E57284 + 0x14cd4c),
                           *(uint *)(0x01E57284 + 0x14cd5c));
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(iVar5);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_0043cdb0(iStack_28);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(iVar4);
          iVar2 = FUN_005485a0(iVar4,param_1);
          if (iVar2 != 0) {
            fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(iVar4,fStack_18);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,iStack_2c);
        }
      }
      else {
        iVar2 = FUN_004aded0(iStack_20);
        if (iVar2 == 0) break;
        FUN_004ada20(iStack_20,0x01E57284 + 0x14cd50);
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0xd8))(iVar2);
      iVar4 = 0x01E57284;
      if (iVar5 != 0) {
        if (iStack_24 == 0) {
          *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(iVar4);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&uStack_148);
      uStack_148 = *(uint *)(0x01E57284 + 0x14cd60);
      fStack_144 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
      uStack_140 = 0x3ecccccd;
      fStack_48 = *(float *)(0x01E57284 + 0x14cd34) - *(float *)(0x01E57284 + 0x14cd28);
      fStack_44 = *(float *)(0x01E57284 + 0x14cd38) - *(float *)(0x01E57284 + 0x14cd2c);
      fStack_40 = *(float *)(0x01E57284 + 0x14cd3c) - *(float *)(0x01E57284 + 0x14cd30);
      fStack_1c = (float)_DAT_0058543d /
                  SQRT(fStack_40 * fStack_40 + fStack_48 * fStack_48 + fStack_44 * fStack_44);
      fStack_b4 = fStack_48 * fStack_1c;
      fStack_b0 = fStack_44 * fStack_1c;
      fStack_ac = fStack_40 * fStack_1c;
      if (&fStack_13c != &fStack_b4) {
        fStack_13c = fStack_b4;
        fStack_138 = fStack_b0;
        fStack_134 = fStack_ac;
      }
      fStack_18 = fStack_144;
      puVar3 = (uint *)
               core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (iVar2,auStack_84,0x01E57284 + 0x14cd50);
      if (&uStack_12c != puVar3) {
        uStack_12c = *puVar3;
        uStack_128 = puVar3[1];
        uStack_124 = puVar3[2];
      }
      uStack_120 = *(uint *)(param_1 + 0x564);
      uStack_11c = 0x3e19999a;
      iStack_114 = param_1;
      uStack_118 = 0x65;
      uStack_110 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
      (**(code **)(*(int *)(iVar2 + 0x14c) + 0x100))(iVar2,&uStack_148);
      if (*(int *)(param_1 + 0x2dc) == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(uint *)(0x01E57284 + 0x14cd5c));
    }
    iStack_24 = iStack_24 + 1;
  } while (iStack_24 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  fStack_e4 = fStack_9c;
  fStack_dc = fStack_94;
  fStack_e0 = fStack_98 + _DAT_00585435;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(0x01C08D04,&fStack_e4,param_1 + 0x3c);
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,param_1,"45.wav",&fStack_9c);
  *(uint *)(param_1 + 0x2f8) = 0x3eaa7efa;
  uStack_54 = 0x40400000;
  uStack_50 = 0x40400000;
  uStack_4c = 0xc0800000;
  uStack_a8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  fStack_18 = (float)uStack_a8;
  uStack_a4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  uStack_a0 = 0;
  fStack_18 = (float)uStack_a4;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(auStack_10c,&uStack_a8);
  uVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                    (auStack_10c,auStack_d8,&uStack_54);
  puVar3 = (uint *)
           core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,auStack_cc,uVar1);
  if (&uStack_54 != puVar3) {
    uStack_54 = *puVar3;
    uStack_50 = puVar3[1];
    uStack_4c = puVar3[2];
  }
  uVar1 = core_dmodel_cpp_loadModel_FUN_004543b0("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0
            (0x01C08D04,param_1 + 0x20,param_1 + 0x30,&uStack_54,uVar1);
  iVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if (iVar2 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    FUN_004940d0(0x01C70F74);
  }
  return 1;
}
