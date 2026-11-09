// Name: core_turret.cpp_FUN_005a3870
// Address: 005a3870
// Address Range: [[005a3870, 005a3e2b]]
// Convention: unknown
// Signature: undefined4 core_turret_cpp_FUN_005a3870(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_turret_cpp_FUN_005a3870(CDemonActor *param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  CGlass *this_ptr;
  CTrigger *this_ptr_00;
  CFlameCan *this_ptr_01;
  byte bVar4;
  float afStackY_10dc [996];
  float *pfVar5;
  CTrigger *actor;
  CMatrix3x3f *rotation_matrix;
  uint uStack_130;
  float fStack_12c;
  uint uStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  CDemonActor *pCStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float afStack_f0 [5];
  uint uStack_dc;
  float afStack_d0 [3];
  float afStack_c4 [3];
  float fStack_b8;
  float afStack_b4 [4];
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float afStack_88 [3];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float afStack_6c [4];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CTrigger *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  pfVar5 = afStack_f0 + 8;
  afStack_d0[0] = (float)uStack_dc;
  afStack_f0[(uint)bVar4 * -2 + 9] = afStack_f0[(uint)bVar4 * -2 + 6];
  afStack_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_FUN_00408b40(param_1,pfVar5);
  fStack_94 = fStack_4c;
  afStack_b4[(uint)bVar4 * -2 + 9] = afStack_6c[(uint)bVar4 * -2 + 9];
  afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  afStack_c4[2] = *(float *)&param_1[2].field_0x38;
  afStack_c4[0] = 0.0;
  afStack_c4[1] = 0.0;
  core_actor_cpp_FUN_00408ac0(param_1,afStack_f0 + 0xb);
  fVar2 = fStack_94;
  fStack_a0 = afStack_f0[2];
  afStack_b4[(uint)bVar4 * -2 + 6] = afStack_f0[(uint)bVar4 * -2 + 3];
  afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_34 = fVar2 + fStack_a0;
  fStack_30 = fStack_90 + fStack_9c;
  fStack_2c = fStack_8c + fStack_98;
  fStack_f4 = fVar2 + fStack_a0;
  afStack_f0[(uint)bVar4 * -2] = afStack_6c[(uint)bVar4 * -2 + 0xf];
  afStack_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  afStack_88[0] = fStack_94;
  afStack_b4[(uint)bVar4 * -2 + 0xc] = afStack_b4[(uint)bVar4 * -2 + 9];
  afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,param_1);
  iStack_20 = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,afStack_b4 + 0xb,&fStack_f4);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    this_ptr = (CGlass *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(uint *)&g_CDemonSetPtr->field_0x14d144,g_CGlassClassInfo.name_hash
                         );
    this_ptr_00 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_00;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                            g_CCrateClassInfo.name_hash);
    this_ptr_01 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CFlameCanClassInfo.name_hash);
    if (iStack_18 == 0) {
      if (this_ptr == (CGlass *)0x0) {
        if (this_ptr_00 != (CTrigger *)0x0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(this_ptr_00);
          iVar3 = core_trigger_cpp_FUN_0059bdf0(this_ptr_00,param_1);
          actor = pCStack_28;
          if (iVar3 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
            core_trigger_cpp_FUN_0059be30(this_ptr_00,fStack_14);
            actor = pCStack_28;
          }
          goto LAB_005a3cc2;
        }
        if (pCStack_24 == (CCrate *)0x0) {
          if (this_ptr_01 == (CFlameCan *)0x0) {
            core_fire_cpp_FUN_004b56a0
                      (0x01C57074,(CVector3f *)&g_CDemonSetPtr->field_0x14d138,
                       (CVector3f *)&g_CDemonSetPtr->field_0x14d128,
                       *(int *)&g_CDemonSetPtr->field_0x14d134,
                       *(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
            break;
          }
          core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr_01);
        }
        else {
          core_crate_cpp_FUN_00449600(pCStack_24);
        }
      }
      else {
        iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr);
        if (iVar3 == 0) break;
        core_glass_cpp_FUN_004e34b0(this_ptr,&g_CDemonSetPtr->field_0x14d138);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&uStack_130);
      uStack_130 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
      fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
      uStack_128 = 0x3ecccccd;
      fStack_12c = fStack_14;
      fStack_7c = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                  *(float *)&g_CDemonSetPtr->field_0x14d110;
      fStack_78 = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                  *(float *)&g_CDemonSetPtr->field_0x14d114;
      fStack_74 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                  *(float *)&g_CDemonSetPtr->field_0x14d118;
      afStack_6c[2] = fStack_7c;
      afStack_6c[(uint)bVar4 * -2 + 3] = afStack_b4[(uint)bVar4 * -2 + 0xf];
      afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
      fStack_1c = (float)_DAT_005f8b88 /
                  SQRT(fStack_5c * fStack_5c +
                       afStack_6c[2] * afStack_6c[2] + afStack_6c[3] * afStack_6c[3]);
      fStack_58 = afStack_6c[2] * fStack_1c;
      fStack_54 = afStack_6c[3] * fStack_1c;
      fStack_50 = fStack_5c * fStack_1c;
      fStack_b8 = afStack_6c[2] * fStack_1c;
      afStack_b4[(uint)bVar4 * -2] = afStack_6c[(uint)bVar4 * -2 + 6];
      afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      if (&fStack_124 != &fStack_b8) {
        fStack_124 = fStack_b8;
        fStack_120 = afStack_b4[0];
        uStack_11c = afStack_b4[1];
      }
      core_actor_cpp_FUN_00408bb0(iStack_18,&g_CDemonSetPtr->field_0x14d138);
      afStack_b4[2] = fStack_40;
      afStack_b4[(uint)bVar4 * -2 + 3] = afStack_6c[(uint)bVar4 * -2 + 0xc];
      afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      if (&fStack_114 != afStack_b4 + 2) {
        fStack_114 = afStack_b4[2];
        uStack_110 = afStack_b4[3];
        uStack_10c = uStack_a4;
      }
      uStack_108 = *(uint *)&param_1[4].field_0xc;
      uStack_100 = 0x65;
      uStack_104 = 0x3f800000;
      pCStack_fc = param_1;
      uStack_f8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&uStack_130);
      if (*(int *)&param_1[2].field_0x34 == 0) break;
      actor = *(CTrigger **)&g_CDemonSetPtr->field_0x14d144;
LAB_005a3cc2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)actor);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  rotation_matrix = (CMatrix3x3f *)&param_1->field_0x3c;
  fStack_70 = fStack_94;
  afStack_6c[(uint)bVar4 * -2] = afStack_b4[(uint)bVar4 * -2 + 9];
  afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  afStack_6c[0] = afStack_6c[0] + _DAT_005f8b84;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
            (0x01C57074,(CVector3f *)&fStack_70,rotation_matrix);
  uVar1 = *(uint *)&param_1[5].field_0xbc;
  *(uint *)&param_1[6].field_0xa0 = 2;
  *(uint *)&param_1[2].field_0x50 = uVar1;
  return 1;
}
