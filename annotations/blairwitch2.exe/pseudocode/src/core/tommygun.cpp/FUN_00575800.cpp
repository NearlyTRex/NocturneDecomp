// Name: core_tommygun.cpp_FUN_00575800
// Address: 00575800
// Address Range: [[00575800, 005760f5]]
// Convention: unknown
// Signature: undefined4 core_tommygun_cpp_FUN_00575800(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_tommygun_cpp_FUN_00575800(CWeapon *param_1)

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
  uint *puVar5;
  CWeapon *this_ptr_03;
  float *pfVar6;
  uint uStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1ac;
  float fStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  CWeapon *pCStack_194;
  uint uStack_190;
  CMatrix3x3f aCStack_18c [40];
  uint uStack_164;
  float afStack_160 [4];
  uint uStack_150;
  float afStack_14c [3];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float afStack_130 [5];
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  float afStack_104 [3];
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [2];
  CVector3f CStack_e0;
  uint uStack_d4;
  float afStack_d0 [5];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float afStack_8c [3];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  uint uStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  uint uStack_38;
  float afStack_34 [3];
  CTrigger *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  *(uint *)(param_1 + 1) = 2;
  if (0.0 < *(float *)&param_1->field_0x45c) {
    return 0;
  }
  *(float *)&param_1->field_0x45c = *(float *)&param_1->field_0x45c + _DAT_005ecc90;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0xe8))(param_1);
  puVar5 = &uStack_68;
  uStack_68 = uStack_d4;
  afStack_64[(uint)bVar4 * -2] = afStack_d0[(uint)bVar4 * -2];
  afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408d70(param_1,puVar5);
  fStack_bc = afStack_d0[2];
  afStack_d0[(uint)bVar4 * -2 + 6] = afStack_d0[(uint)bVar4 * -2 + 3];
  this_ptr_03 = param_1;
  afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(this_ptr_03);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 1) = 0;
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x4);
    *(uint *)&param_1[1].field_0x4 = 0;
    return 0;
  }
  afStack_130[4] = *(float *)&param_1->field_0x444;
  afStack_130[2] = 0.0;
  afStack_130[3] = 0.0;
  core_actor_cpp_FUN_00408cf0(param_1,afStack_130 + 2);
  fVar2 = fStack_b8;
  fVar1 = fStack_bc;
  fStack_50 = fStack_ec;
  afStack_64[(uint)bVar4 * -2 + 6] = afStack_e8[(uint)bVar4 * -2];
  afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  afStack_64[2] = fVar1 + fStack_50;
  afStack_64[3] = fVar2 + fStack_4c;
  fStack_54 = fStack_b4 + fStack_48;
  afStack_104[0] = fVar1 + fStack_50;
  afStack_118[(uint)bVar4 * -2 + 6] = afStack_64[(uint)bVar4 * -2 + 3];
  fVar1 = fStack_bc;
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  afStack_34[2] = (float)_DAT_005ecc94 / *(float *)&param_1->field_0x444;
  fStack_11c = fStack_50 * afStack_34[2];
  afStack_118[0] = fStack_4c * afStack_34[2];
  afStack_118[1] = fStack_48 * afStack_34[2];
  afStack_118[2] = fStack_50 * afStack_34[2];
  afStack_118[(uint)bVar4 * -2 + 3] = afStack_118[(uint)bVar4 * -2];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_a4 = fVar1 - afStack_118[2];
  fStack_a0 = fStack_b8 - afStack_118[3];
  fStack_9c = fStack_b4 - fStack_108;
  afStack_14c[0] = fVar1 - afStack_118[2];
  afStack_160[(uint)bVar4 * -2 + 6] = afStack_d0[(uint)bVar4 * -2 + 0xc];
  afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)param_1);
  if (*(CDemonActor **)&param_1->field_0x460 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x460);
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_FUN_00535ee0
                                 (g_CDemonSetPtr,afStack_160 + 5,afStack_118 + 5);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) goto LAB_00575a8f;
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
    pCStack_28 = this_ptr_01;
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
              goto LAB_00575a8f;
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
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)pCStack_28);
        }
      }
      else {
        iVar3 = core_glass_cpp_FUN_004c72d0(this_ptr_00);
        if (iVar3 == 0) goto LAB_00575a8f;
        core_glass_cpp_FUN_004c6d40(this_ptr_00,&g_CDemonSetPtr->field_0x14d138);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0xe8))(iStack_18);
      if ((iVar3 != 0) &&
         (iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)&param_1->field_0x460,g_CHeroClassInfo.name_hash),
         this_ptr = g_CDemonSetPtr, iVar3 != 0)) {
        if (iStack_20 == 0) {
          *(int *)&param_1->field_0x6c4 = *(int *)&param_1->field_0x6c4 + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(this_ptr);
          return 0;
        }
        goto LAB_00575a8f;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&uStack_1c8);
      uStack_1c8 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
      fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x2b0 + 0xf4))(param_1);
      uStack_1c0 = 0x3ecccccd;
      fStack_1c4 = fStack_14;
      fStack_140 = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                   *(float *)&g_CDemonSetPtr->field_0x14d110;
      fStack_13c = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                   *(float *)&g_CDemonSetPtr->field_0x14d114;
      fStack_138 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                   *(float *)&g_CDemonSetPtr->field_0x14d118;
      fStack_98 = fStack_140;
      afStack_d0[(uint)bVar4 * -2 + 0xf] = afStack_160[(uint)bVar4 * -2 + 9];
      afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
           afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      fStack_1c = (float)_DAT_005ecca4 /
                  SQRT(fStack_90 * fStack_90 + fStack_98 * fStack_98 + fStack_94 * fStack_94);
      fStack_80 = fStack_98 * fStack_1c;
      fStack_7c = fStack_94 * fStack_1c;
      fStack_78 = fStack_90 * fStack_1c;
      afStack_160[2] = fStack_98 * fStack_1c;
      afStack_160[(uint)bVar4 * -2 + 3] = afStack_d0[(uint)bVar4 * -2 + 0x15];
      afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
      if (&fStack_1bc != afStack_160 + 2) {
        fStack_1bc = afStack_160[2];
        uStack_1b8 = afStack_160[3];
        uStack_1b4 = uStack_150;
      }
      core_actor_cpp_FUN_00408de0(iStack_18,&g_CDemonSetPtr->field_0x14d138);
      uStack_164 = uStack_b0;
      afStack_160[(uint)bVar4 * -2] = afStack_d0[(uint)bVar4 * -2 + 9];
      afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      if (&uStack_1ac != &uStack_164) {
        uStack_1ac = uStack_164;
        fStack_1a8 = afStack_160[0];
        uStack_1a4 = afStack_160[1];
      }
      uStack_1a0 = *(uint *)&param_1->field_0x6c8;
      uStack_198 = 0x65;
      uStack_19c = 0x3e19999a;
      pCStack_194 = param_1;
      uStack_190 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x9c))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,&uStack_1c8);
      if (*(int *)&param_1->field_0x440 == 0) goto LAB_00575a8f;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
    }
    iStack_20 = iStack_20 + 1;
    if (3 < iStack_20) {
LAB_00575a8f:
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      if (*(int *)&param_1->field_0x6d0 != 0) {
        fStack_134 = fStack_bc;
        afStack_130[(uint)bVar4 * -2] = afStack_d0[(uint)bVar4 * -2 + 6];
        afStack_130[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
        afStack_130[0] = afStack_130[0] + _DAT_005ecc9c;
        core_fire_cpp_FUN_0049d120
                  (0x01C3DEB4,(CVector3f *)&fStack_134,(CMatrix3x3f *)&param_1->field_0x3c);
        CStack_f8._0_4_ = 0x40a00000;
        CStack_f8._4_4_ = 0x40c00000;
        CStack_f8._8_4_ = 0xc0c00000;
        CStack_e0._0_4_ = core_actor_cpp_FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
        fStack_14 = (float)CStack_e0._0_4_;
        CStack_e0._4_4_ = core_actor_cpp_FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
        CStack_e0._8_4_ = 0;
        fStack_14 = (float)CStack_e0._4_4_;
        core_dirmat_cpp_FUN_00449280(aCStack_18c,&CStack_e0);
        core_dirmat_cpp_FUN_00449530(aCStack_18c,&CStack_f8);
        pfVar6 = afStack_d0 + 0x11;
        afStack_8c[0] = (float)uStack_38;
        afStack_d0[(uint)bVar4 * -2 + 0x12] = afStack_34[(uint)bVar4 * -2];
        afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
             afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        core_actor_cpp_FUN_00408cf0(param_1,pfVar6);
        CStack_44._0_4_ = CStack_74._0_4_;
        *(uint *)((int)&CStack_44 + (uint)bVar4 * -8 + 4) =
             *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + 4);
        *(uint *)((int)&CStack_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        if (&CStack_f8 != &CStack_44) {
          CStack_f8._0_4_ = CStack_44._0_4_;
          CStack_f8._4_4_ = CStack_44._4_4_;
          CStack_f8._8_4_ = CStack_44._8_4_;
        }
        model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_0044fba0("bullet.kfm")
        ;
        core_fire_cpp_FUN_0049e970
                  (0x01C3DEB4,(CVector3f *)&param_1->field_0x20,(CVector3f *)&param_1->field_0x30,
                   &CStack_f8,model_ptr);
      }
      return 1;
    }
  } while( true );
}
