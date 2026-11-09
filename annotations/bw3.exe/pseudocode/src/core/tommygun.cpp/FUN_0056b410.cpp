// Name: core_tommygun.cpp_FUN_0056b410
// Address: 0056b410
// Address Range: [[0056b410, 0056bd06]]
// Convention: unknown
// Signature: undefined4 core_tommygun_cpp_FUN_0056b410(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_tommygun_cpp_FUN_0056b410(CDemonActor *param_1)

{
  float fVar1;
  CDemonSet *this_ptr;
  float fVar2;
  int iVar3;
  CKeyFramedModel *model_ptr;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  CFlameCan *this_ptr_02;
  byte bVar4;
  float afStackY_114c [985];
  uint *puVar5;
  CDemonActor *pCVar6;
  float *pfVar7;
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
  CDemonActor *pCStack_194;
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
  fVar1 = *(float *)&param_1[2].field_0x50;
  *(uint *)&param_1[4].field_0x34 = 2;
  if (0.0 < fVar1) {
    return 0;
  }
  iVar3 = *(int *)&param_1->field_0x154;
  *(float *)&param_1[2].field_0x50 = *(float *)&param_1[2].field_0x50 + _DAT_005d6473;
  (**(code **)(iVar3 + 0xe0))(param_1);
  puVar5 = &uStack_68;
  uStack_68 = uStack_d4;
  afStack_64[(uint)bVar4 * -2] = afStack_d0[(uint)bVar4 * -2];
  afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408b80(param_1,puVar5);
  fStack_bc = afStack_d0[2];
  afStack_d0[(uint)bVar4 * -2 + 6] = afStack_d0[(uint)bVar4 * -2 + 3];
  pCVar6 = param_1;
  afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar3 = core_weapon_cpp_FUN_0057b880(pCVar6);
  if (iVar3 == 0) {
    *(uint *)&param_1[4].field_0x34 = 0;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[4].field_0x38);
    *(uint *)&param_1[4].field_0x38 = 0;
    return 0;
  }
  afStack_130[4] = *(float *)&param_1[2].field_0x38;
  afStack_130[2] = 0.0;
  afStack_130[3] = 0.0;
  core_actor_cpp_FUN_00408b00(param_1,afStack_130 + 2);
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
  afStack_34[2] = (float)_DAT_005d6477 / *(float *)&param_1[2].field_0x38;
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
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
  if (*(CDemonActor **)&param_1[2].field_0x54 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)&param_1[2].field_0x54);
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_FUN_0053ccc0
                                 (g_CDemonSetPtr,afStack_160 + 5,afStack_118 + 5);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) goto LAB_0056b69f;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_01;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                            g_CCrateClassInfo.name_hash);
    this_ptr_02 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CFlameCanClassInfo.name_hash);
    if (iStack_18 == 0) {
      if (this_ptr_00 == (CGlass *)0x0) {
        if (this_ptr_01 == (CTrigger *)0x0) {
          if (pCStack_24 == (CCrate *)0x0) {
            if (this_ptr_02 == (CFlameCan *)0x0) {
              core_fire_cpp_FUN_004a2090
                        (0x01C73654,&g_CDemonSetPtr->field_0x14d138,
                         &g_CDemonSetPtr->field_0x14d128,
                         *(uint *)&g_CDemonSetPtr->field_0x14d134,
                         *(uint *)&g_CDemonSetPtr->field_0x14d144,0);
              goto LAB_0056b69f;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_02);
          }
          else {
            core_crate_cpp_FUN_004461c0(pCStack_24);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
          iVar3 = core_trigger_cpp_FUN_0056ede0(this_ptr_01,param_1);
          if (iVar3 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
            core_trigger_cpp_FUN_0056ee20(this_ptr_01,fStack_14);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)pCStack_28);
        }
      }
      else {
        iVar3 = core_glass_cpp_FUN_004cc5d0(this_ptr_00);
        if (iVar3 == 0) goto LAB_0056b69f;
        core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->field_0x14d138);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18);
      if ((iVar3 != 0) &&
         (iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&param_1[2].field_0x54,g_CHeroClassInfo.name_hash),
         this_ptr = g_CDemonSetPtr, iVar3 != 0)) {
        if (iStack_20 == 0) {
          *(int *)&param_1[4].field_0x8 = *(int *)&param_1[4].field_0x8 + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr);
          return 0;
        }
        goto LAB_0056b69f;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&uStack_1c8);
      uStack_1c8 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
      fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
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
      fStack_1c = (float)_DAT_005d6487 /
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
      core_actor_cpp_FUN_00408bf0(iStack_18,&g_CDemonSetPtr->field_0x14d138);
      uStack_164 = uStack_b0;
      afStack_160[(uint)bVar4 * -2] = afStack_d0[(uint)bVar4 * -2 + 9];
      afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      if (&uStack_1ac != &uStack_164) {
        uStack_1ac = uStack_164;
        fStack_1a8 = afStack_160[0];
        uStack_1a4 = afStack_160[1];
      }
      uStack_1a0 = *(uint *)&param_1[4].field_0xc;
      uStack_198 = 0x65;
      uStack_19c = 0x3e19999a;
      pCStack_194 = param_1;
      uStack_190 = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&uStack_1c8);
      if (*(int *)&param_1[2].field_0x34 == 0) goto LAB_0056b69f;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
    }
    iStack_20 = iStack_20 + 1;
    if (3 < iStack_20) {
LAB_0056b69f:
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      if (*(int *)&param_1[4].field_0x24 != 0) {
        fStack_134 = fStack_bc;
        afStack_130[(uint)bVar4 * -2] = afStack_d0[(uint)bVar4 * -2 + 6];
        afStack_130[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
        afStack_130[0] = afStack_130[0] + _DAT_005d647f;
        core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
                  (0x01C73654,(CVector3f *)&fStack_134,(CMatrix3x3f *)&param_1->field_0x3c);
        CStack_f8._0_4_ = 0x40a00000;
        CStack_f8._4_4_ = 0x40c00000;
        CStack_f8._8_4_ = 0xc0c00000;
        CStack_e0._0_4_ = core_actor_cpp_FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
        fStack_14 = (float)CStack_e0._0_4_;
        CStack_e0._4_4_ = core_actor_cpp_FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
        CStack_e0._8_4_ = 0;
        fStack_14 = (float)CStack_e0._4_4_;
        core_dirmat_cpp_FUN_0045b550(aCStack_18c,&CStack_e0);
        core_dirmat_cpp_FUN_0045b800(aCStack_18c,&CStack_f8);
        pfVar7 = afStack_d0 + 0x11;
        afStack_8c[0] = (float)uStack_38;
        afStack_d0[(uint)bVar4 * -2 + 0x12] = afStack_34[(uint)bVar4 * -2];
        afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
             afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        core_actor_cpp_FUN_00408b00(param_1,pfVar7);
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
        model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_00462420("bullet.kfm")
        ;
        core_fire_cpp_CFireEffect_createShell_FUN_004a3e70
                  (0x01C73654,(CVector3f *)&param_1->field_0x20,(CVector3f *)&param_1->field_0x30,
                   &CStack_f8,model_ptr);
      }
      return 1;
    }
  } while( true );
}
