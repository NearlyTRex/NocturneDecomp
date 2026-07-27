// Name: core_turret.cpp_CTurret_fire_FUN_0054ab10
// Address: 0054ab10
// Address Range: [[0054ab10, 0054b02a]]
// Convention: unknown
// Signature: undefined4 core_turret_cpp_CTurret_fire_FUN_0054ab10(int param_1)

#include "nocturne.h"

uint core_turret_cpp_CTurret_fire_FUN_0054ab10(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  int iStack_ac;
  uint uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  byte auStack_80 [12];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  byte local_5c [12];
  float fStack_50;
  float fStack_4c;
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
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_5c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_a4,uVar1);
  uStack_60 = *(uint *)(param_1 + 0x2e0);
  uStack_68 = 0;
  uStack_64 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_38,&uStack_68);
  fStack_98 = fStack_a4 + fStack_38;
  fStack_94 = fStack_a0 + fStack_34;
  fStack_90 = fStack_9c + fStack_30;
  fStack_74 = fStack_a4;
  fStack_70 = fStack_a0;
  fStack_6c = fStack_9c;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  iStack_24 = 0;
  do {
    fStack_18 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                 (0x01E57284,&fStack_74,&fStack_98);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),
                       g_CCharacterActorType_00765a60.name_hash);
    if ((iVar2 != 0) && (iVar3 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x104))(iVar2), 0 < iVar3))
    {
      iVar2 = 0;
    }
    iStack_20 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + 0x14cd5c),
                           g_CGlassActorType_01c78c40.name_hash);
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),
                       g_CTriggerActorType_02dd1084.name_hash);
    iStack_2c = iVar3;
    iStack_28 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + 0x14cd5c),
                           g_CCrateActorType_0077bd40.name_hash);
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),
                       g_CFlameCanActorType_01c70654.name_hash);
    if (iVar2 == 0) {
      if (iStack_20 == 0) {
        if (iVar3 != 0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(iVar3);
          iVar4 = core_trigger_cpp_FUN_005485a0(iVar3,param_1);
          iVar2 = iStack_2c;
          if (iVar4 != 0) {
            fStack_18 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(iVar3,fStack_18);
            iVar2 = iStack_2c;
          }
          goto LAB_0054aea2;
        }
        if (iStack_28 == 0) {
          if (iVar4 == 0) {
            core_fire_cpp_FUN_0048ab60
                      (0x01C08D04,0x01E57284 + 0x14cd50,0x01E57284 + 0x14cd40,
                       *(uint *)(0x01E57284 + 0x14cd4c),
                       *(uint *)(0x01E57284 + 0x14cd5c));
            break;
          }
          core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(iVar4);
        }
        else {
          core_crate_cpp_CCrate_explode_FUN_0043cdb0(iStack_28);
        }
      }
      else {
        iVar2 = core_glass_cpp_FUN_004aded0(iStack_20);
        if (iVar2 == 0) break;
        core_glass_cpp_FUN_004ada20(iStack_20,0x01E57284 + 0x14cd50);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&uStack_e0);
      uStack_e0 = *(uint *)(0x01E57284 + 0x14cd60);
      fStack_dc = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
      uStack_d8 = 0x3ecccccd;
      fStack_8c = *(float *)(0x01E57284 + 0x14cd34) - *(float *)(0x01E57284 + 0x14cd28);
      fStack_88 = *(float *)(0x01E57284 + 0x14cd38) - *(float *)(0x01E57284 + 0x14cd2c);
      fStack_84 = *(float *)(0x01E57284 + 0x14cd3c) - *(float *)(0x01E57284 + 0x14cd30);
      fStack_1c = (float)10 /
                  SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88);
      fStack_50 = fStack_8c * fStack_1c;
      fStack_4c = fStack_88 * fStack_1c;
      fStack_48 = fStack_84 * fStack_1c;
      if (&fStack_d4 != &fStack_50) {
        fStack_d4 = fStack_50;
        fStack_d0 = fStack_4c;
        fStack_cc = fStack_48;
      }
      fStack_18 = fStack_dc;
      puVar5 = (uint *)
               core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (iVar2,auStack_80,0x01E57284 + 0x14cd50);
      if (&uStack_c4 != puVar5) {
        uStack_c4 = *puVar5;
        uStack_c0 = puVar5[1];
        uStack_bc = puVar5[2];
      }
      uStack_b8 = *(uint *)(param_1 + 0x564);
      uStack_b4 = 0x3f800000;
      iStack_ac = param_1;
      uStack_b0 = 0x65;
      uStack_a8 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
      (**(code **)(*(int *)(iVar2 + 0x14c) + 0x100))(iVar2,&uStack_e0);
      if (*(int *)(param_1 + 0x2dc) == 0) break;
      iVar2 = *(int *)(0x01E57284 + 0x14cd5c);
LAB_0054aea2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,iVar2);
    }
    iStack_24 = iStack_24 + 1;
  } while (iStack_24 < 4);
  fStack_44 = fStack_a4;
  fStack_3c = fStack_9c;
  fStack_40 = fStack_a0 + -0.125f;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(0x01C08D04,&fStack_44,param_1 + 0x3c);
  *(uint *)(param_1 + 0x8a8) = 2;
  *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x76c);
  return 1;
}
