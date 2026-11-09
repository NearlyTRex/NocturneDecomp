// Name: core_gun.cpp_FUN_004cbdc0
// Address: 004cbdc0
// Address Range: [[004cbdc0, 004cc676]]
// Convention: unknown
// Signature: undefined4 core_gun_cpp_FUN_004cbdc0(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_gun_cpp_FUN_004cbdc0(CWeapon *param_1)

{
  CDemonSet *this_ptr;
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *model_ptr;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  CFlameCan *this_ptr_02;
  byte bVar4;
  float afStackY_114c [986];
  float *pfVar5;
  CWeapon *this_ptr_03;
  CMatrix3x3f *rotation_matrix;
  uint *puVar6;
  uint uStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  float fStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  CWeapon *pCStack_194;
  uint uStack_190;
  CMatrix3x3f aCStack_18c [40];
  uint uStack_164;
  float afStack_160 [5];
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [5];
  float fStack_128;
  float afStack_124 [5];
  float fStack_110;
  uint uStack_10c;
  uint uStack_108;
  float afStack_104 [3];
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float afStack_e0 [3];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float afStack_c4 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [2];
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [5];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [4];
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CTrigger *pCStack_2c;
  float fStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0xe8))(param_1);
  pfVar5 = afStack_124 + 2;
  afStack_124[2] = (float)uStack_98;
  afStack_124[(uint)bVar4 * -2 + 3] = afStack_94[(uint)bVar4 * -2];
  afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_94[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408d70(param_1,pfVar5);
  fStack_128 = afStack_160[2];
  afStack_124[(uint)bVar4 * -2] = afStack_160[(uint)bVar4 * -2 + 3];
  this_ptr_03 = param_1;
  afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(this_ptr_03);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)param_1,"45-dry-!.wav",(CVector3f *)&fStack_128)
    ;
    return 0;
  }
  afStack_104[2] = *(float *)&param_1->field_0x444;
  afStack_104[0] = 0.0;
  afStack_104[1] = 0.0;
  core_actor_cpp_FUN_00408cf0(param_1,afStack_124 + 8);
  fVar2 = afStack_124[0];
  fVar1 = fStack_128;
  fStack_b0 = afStack_7c[2];
  afStack_c4[(uint)bVar4 * -2 + 6] = afStack_7c[(uint)bVar4 * -2 + 3];
  afStack_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_d4 = fVar1 + fStack_b0;
  fStack_d0 = fVar2 + fStack_ac;
  fStack_cc = afStack_124[1] + fStack_a8;
  afStack_e0[0] = fVar1 + fStack_b0;
  afStack_f4[(uint)bVar4 * -2 + 6] = afStack_f4[(uint)bVar4 * -2 + 9];
  afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  fVar1 = fStack_128;
  fStack_28 = (float)_DAT_005d97e6 / *(float *)&param_1->field_0x444;
  fStack_50 = fStack_b0 * fStack_28;
  afStack_4c[0] = fStack_ac * fStack_28;
  afStack_4c[1] = fStack_a8 * fStack_28;
  afStack_c4[2] = fStack_b0 * fStack_28;
  afStack_c4[(uint)bVar4 * -2 + 3] = afStack_4c[(uint)bVar4 * -2];
  afStack_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_38 = fVar1 - afStack_c4[2];
  fStack_34 = afStack_124[0] - afStack_c4[3];
  fStack_30 = afStack_124[1] - fStack_b4;
  afStack_13c[2] = fVar1 - afStack_c4[2];
  afStack_13c[(uint)bVar4 * -2 + 3] = afStack_4c[(uint)bVar4 * -2 + 6];
  afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)param_1);
  if (*(CDemonActor **)&param_1->field_0x460 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x460);
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,afStack_13c + 2,afStack_f4 + 5)
    ;
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CTriggerClassInfo.name_hash);
    pCStack_2c = this_ptr_01;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                            g_CCrateClassInfo.name_hash);
    this_ptr_02 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CFlameCanClassInfo.name_hash);
    if (iStack_18 == 0) {
      if (this_ptr_00 == (CGlass *)0x0) {
        if (this_ptr_01 == (CTrigger *)0x0) {
          if (pCStack_24 == (CCrate *)0x0) {
            if (this_ptr_02 == (CFlameCan *)0x0) {
              core_fire_cpp_FUN_0049cd50
                        (0x01C3DEB4,(CVector3f *)&g_CDemonSetPtr->field_0x14d138,
                         (CVector3f *)&g_CDemonSetPtr->field_0x14d128,
                         *(int *)&g_CDemonSetPtr->field_0x14d134,
                         *(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(this_ptr_02);
          }
          else {
            core_crate_cpp_FUN_0043a350(pCStack_24);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_01);
          iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                            (this_ptr_01,(CDemonActor *)param_1);
          if (iVar3 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x2b0 + 0xf4))(param_1);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_01,fStack_14);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)pCStack_2c);
        }
      }
      else {
        iVar3 = core_glass_cpp_FUN_004c72d0(this_ptr_00);
        if (iVar3 == 0) break;
        core_glass_cpp_FUN_004c6d40(this_ptr_00,&g_CDemonSetPtr->field_0x14d138);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0xe8))(iStack_18);
      this_ptr = g_CDemonSetPtr;
      if (iVar3 != 0) {
        if (iStack_20 == 0) {
          *(int *)&param_1->field_0x6c4 = *(int *)&param_1->field_0x6c4 + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&uStack_1c8);
      uStack_1c8 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
      fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x2b0 + 0xf4))(param_1);
      uStack_1c0 = 0x3ecccccd;
      fStack_1c4 = fStack_14;
      fStack_140 = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                   *(float *)&g_CDemonSetPtr->field_0x14d110;
      afStack_13c[0] =
           *(float *)&g_CDemonSetPtr->field_0x14d120 - *(float *)&g_CDemonSetPtr->field_0x14d114;
      afStack_13c[1] =
           *(float *)&g_CDemonSetPtr->field_0x14d124 - *(float *)&g_CDemonSetPtr->field_0x14d118;
      afStack_f4[2] = fStack_140;
      afStack_f4[(uint)bVar4 * -2 + 3] = afStack_13c[(uint)bVar4 * -2];
      afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fStack_1c = (float)_DAT_005d97f6 /
                  SQRT(fStack_e4 * fStack_e4 +
                       afStack_f4[2] * afStack_f4[2] + afStack_f4[3] * afStack_f4[3]);
      fStack_68 = afStack_f4[2] * fStack_1c;
      fStack_64 = afStack_f4[3] * fStack_1c;
      fStack_60 = fStack_e4 * fStack_1c;
      fStack_110 = afStack_f4[2] * fStack_1c;
      afStack_124[(uint)bVar4 * -2 + 6] = afStack_7c[(uint)bVar4 * -2 + 6];
      afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      if (&fStack_1bc != afStack_124 + 5) {
        fStack_1bc = fStack_110;
        uStack_1b8 = uStack_10c;
        uStack_1b4 = uStack_108;
      }
      core_actor_cpp_FUN_00408de0(iStack_18,&g_CDemonSetPtr->field_0x14d138);
      afStack_4c[2] = fStack_80;
      afStack_4c[(uint)bVar4 * -2 + 3] = afStack_7c[(uint)bVar4 * -2];
      afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&fStack_1ac != afStack_4c + 2) {
        fStack_1ac = afStack_4c[2];
        uStack_1a8 = afStack_4c[3];
        uStack_1a4 = uStack_3c;
      }
      uStack_1a0 = *(uint *)&param_1->field_0x6c8;
      uStack_198 = 0x65;
      pCStack_194 = param_1;
      uStack_19c = 0;
      uStack_190 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x9c))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,&uStack_1c8);
      if (*(int *)&param_1->field_0x440 == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  rotation_matrix = (CMatrix3x3f *)&param_1->field_0x3c;
  fStack_c8 = fStack_128;
  afStack_c4[(uint)bVar4 * -2] = afStack_124[(uint)bVar4 * -2];
  afStack_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  afStack_c4[0] = afStack_c4[0] + _DAT_005d97ee;
  core_fire_cpp_FUN_0049d120(0x01C3DEB4,(CVector3f *)&fStack_c8,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)param_1,"45.wav",(CVector3f *)&fStack_128);
  *(uint *)&param_1->field_0x45c = 0x3eaa7efa;
  CStack_8c._0_4_ = 0x40400000;
  CStack_8c._4_4_ = 0x40400000;
  CStack_8c._8_4_ = 0xc0800000;
  CStack_a4._0_4_ = core_actor_cpp_FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
  fStack_14 = (float)CStack_a4._0_4_;
  CStack_a4._4_4_ = core_actor_cpp_FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
  CStack_a4._8_4_ = 0;
  fStack_14 = (float)CStack_a4._4_4_;
  core_dirmat_cpp_FUN_00449280(aCStack_18c,&CStack_a4);
  core_dirmat_cpp_FUN_00449530(aCStack_18c,&CStack_8c);
  puVar6 = &uStack_f8;
  uStack_f8 = uStack_164;
  afStack_f4[(uint)bVar4 * -2] = afStack_160[(uint)bVar4 * -2];
  afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408cf0(param_1,puVar6);
  CStack_14c._0_4_ = CStack_5c._0_4_;
  *(uint *)((int)&CStack_14c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_14c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (&CStack_8c != &CStack_14c) {
    CStack_8c._0_4_ = CStack_14c._0_4_;
    CStack_8c._4_4_ = CStack_14c._4_4_;
    CStack_8c._8_4_ = CStack_14c._8_4_;
  }
  model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_0044fba0("gatbullet.kfm");
  core_fire_cpp_FUN_0049e970
            (0x01C3DEB4,(CVector3f *)&param_1->field_0x20,(CVector3f *)&param_1->field_0x30,
             &CStack_8c,model_ptr);
  return 1;
}
