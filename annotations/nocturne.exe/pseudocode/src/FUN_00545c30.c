// Name: FUN_00545c30
// Address: 00545c30
// Address Range: [[00545c30, 0054646b]]
// Convention: unknown
// Signature: undefined4 FUN_00545c30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00545c30(int param_1)

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
  byte auStack_e4 [12];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  byte auStack_b4 [12];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  byte local_60 [12];
  byte auStack_54 [12];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  *(uint *)(param_1 + 0x570) = 2;
  if (0.0 < *(float *)(param_1 + 0x2f8)) {
    return 0;
  }
  *(float *)(param_1 + 0x2f8) = *(float *)(param_1 + 0x2f8) + _DAT_005968b5;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_60);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_9c,uVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_00554600(param_1);
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x570) = 0;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0x574));
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
    if (iVar2 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      FUN_004940d0(0x01C70F74);
    }
    *(uint *)(param_1 + 0x574) = 0;
    return 0;
  }
  uStack_a0 = *(uint *)(param_1 + 0x2e0);
  uStack_a8 = 0;
  uStack_a4 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_78,&uStack_a8);
  fStack_c0 = fStack_9c + fStack_78;
  fStack_bc = fStack_98 + fStack_74;
  fStack_b8 = fStack_94 + fStack_70;
  fStack_2c = (float)_DAT_005968b9 / *(float *)(param_1 + 0x2e0);
  fStack_cc = fStack_78 * fStack_2c;
  fStack_c8 = fStack_74 * fStack_2c;
  fStack_c4 = fStack_70 * fStack_2c;
  fStack_3c = fStack_9c - fStack_cc;
  fStack_38 = fStack_98 - fStack_c8;
  fStack_34 = fStack_94 - fStack_c4;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  if (*(int *)(param_1 + 0x2fc) != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,*(int *)(param_1 + 0x2fc));
  }
  iStack_20 = 0;
  do {
    fStack_18 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                 (0x01E57284,&fStack_3c,&fStack_c0);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) goto LAB_00545ebe;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),DAT_00765a98);
    if ((iVar2 != 0) && (iVar4 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x104))(iVar2), 0 < iVar4))
    {
      iVar2 = 0;
    }
    iStack_1c = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c78c78);
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_02dd10bc);
    iStack_28 = iVar4;
    iStack_24 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + 0x14cd5c),DAT_0077bd78);
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c7068c);
    if (iVar2 == 0) {
      if (iStack_1c == 0) {
        if (iVar4 == 0) {
          if (iStack_24 == 0) {
            if (iVar5 == 0) {
              FUN_0048ab60(0x01C08D04,0x01E57284 + 0x14cd50,0x01E57284 + 0x14cd40,
                           *(uint *)(0x01E57284 + 0x14cd4c),
                           *(uint *)(0x01E57284 + 0x14cd5c));
              goto LAB_00545ebe;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(iVar5);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_0043cdb0(iStack_24);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(iVar4);
          iVar2 = FUN_005485a0(iVar4,param_1);
          if (iVar2 != 0) {
            fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(iVar4,fStack_18);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,iStack_28);
        }
      }
      else {
        iVar2 = FUN_004aded0(iStack_1c);
        if (iVar2 == 0) goto LAB_00545ebe;
        FUN_004ada20(iStack_1c,0x01E57284 + 0x14cd50);
      }
    }
    else {
      iVar4 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0xd8))(iVar2);
      if ((iVar4 != 0) &&
         (iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(uint *)(param_1 + 0x2fc),_DAT_01cae124), iVar4 = 0x01E57284,
         iVar5 != 0)) {
        if (iStack_20 == 0) {
          *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(iVar4);
          return 0;
        }
        goto LAB_00545ebe;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&uStack_148);
      uStack_148 = *(uint *)(0x01E57284 + 0x14cd60);
      fStack_144 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
      uStack_140 = 0x3ecccccd;
      fStack_d8 = *(float *)(0x01E57284 + 0x14cd34) - *(float *)(0x01E57284 + 0x14cd28);
      fStack_d4 = *(float *)(0x01E57284 + 0x14cd38) - *(float *)(0x01E57284 + 0x14cd2c);
      fStack_d0 = *(float *)(0x01E57284 + 0x14cd3c) - *(float *)(0x01E57284 + 0x14cd30);
      fStack_30 = (float)_DAT_005968c9 /
                  SQRT(fStack_d0 * fStack_d0 + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4);
      fStack_48 = fStack_d8 * fStack_30;
      fStack_44 = fStack_d4 * fStack_30;
      fStack_40 = fStack_d0 * fStack_30;
      if (&fStack_13c != &fStack_48) {
        fStack_13c = fStack_48;
        fStack_138 = fStack_44;
        fStack_134 = fStack_40;
      }
      fStack_18 = fStack_144;
      puVar3 = (uint *)
               core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (iVar2,auStack_e4,0x01E57284 + 0x14cd50);
      if (&uStack_12c != puVar3) {
        uStack_12c = *puVar3;
        uStack_128 = puVar3[1];
        uStack_124 = puVar3[2];
      }
      uStack_120 = *(uint *)(param_1 + 0x564);
      uStack_118 = 0x65;
      uStack_11c = 0x3e19999a;
      iStack_114 = param_1;
      uStack_110 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
      (**(code **)(*(int *)(iVar2 + 0x14c) + 0x100))(iVar2,&uStack_148);
      if (*(int *)(param_1 + 0x2dc) == 0) goto LAB_00545ebe;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(uint *)(0x01E57284 + 0x14cd5c));
    }
    iStack_20 = iStack_20 + 1;
    if (3 < iStack_20) {
LAB_00545ebe:
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      if (*(int *)(param_1 + 0x56c) != 0) {
        fStack_6c = fStack_9c;
        fStack_64 = fStack_94;
        fStack_68 = fStack_98 + _DAT_005968c1;
        core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
                  (0x01C08D04,&fStack_6c,param_1 + 0x3c);
        uStack_84 = 0x40a00000;
        uStack_80 = 0x40c00000;
        uStack_7c = 0xc0c00000;
        uStack_90 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
        fStack_18 = (float)uStack_90;
        uStack_8c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
        uStack_88 = 0;
        fStack_18 = (float)uStack_8c;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(auStack_10c,&uStack_90);
        uVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                          (auStack_10c,auStack_b4,&uStack_84);
        puVar3 = (uint *)
                 core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,auStack_54,uVar1);
        if (&uStack_84 != puVar3) {
          uStack_84 = *puVar3;
          uStack_80 = puVar3[1];
          uStack_7c = puVar3[2];
        }
        uVar1 = core_dmodel_cpp_loadModel_FUN_004543b0("bullet.kfm");
        core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0
                  (0x01C08D04,param_1 + 0x20,param_1 + 0x30,&uStack_84,uVar1);
      }
      return 1;
    }
  } while( true );
}
