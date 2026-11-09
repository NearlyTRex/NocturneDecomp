// Name: core_gun.cpp_FUN_004d0fc0
// Address: 004d0fc0
// Address Range: [[004d0fc0, 004d1871]]
// Convention: unknown
// Signature: undefined4 core_gun_cpp_FUN_004d0fc0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_gun_cpp_FUN_004d0fc0(CDemonActor *param_1)

{
  CDemonSet *this_ptr;
  byte auVar1 [4];
  float fVar2;
  int iVar3;
  CKeyFramedModel *model_ptr;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  CFlameCan *this_ptr_02;
  byte bVar4;
  float afStackY_114c [985];
  float *pfVar5;
  CDemonActor *pCVar6;
  CMatrix3x3f *rotation_matrix;
  uint *puVar7;
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
  CDemonActor *pCStack_194;
  uint uStack_190;
  CMatrix3x3f aCStack_18c [40];
  float fStack_164;
  float afStack_160 [5];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  CVector3f CStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  byte auStack_11c [4];
  float afStack_118 [5];
  float afStack_104 [3];
  float fStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  float afStack_d4 [3];
  float afStack_c8 [3];
  float fStack_bc;
  float afStack_b8 [2];
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
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
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  pfVar5 = afStack_118 + 2;
  afStack_118[2] = afStack_160[2];
  afStack_118[(uint)bVar4 * -2 + 3] = afStack_160[(uint)bVar4 * -2 + 3];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_actor_cpp_FUN_00408b80(param_1,pfVar5);
  auStack_11c = (byte  [4])fStack_8c;
  afStack_118[(uint)bVar4 * -2] = afStack_a0[(uint)bVar4 * -2 + 6];
  pCVar6 = param_1;
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  iVar3 = core_weapon_cpp_FUN_0057b880(pCVar6);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,param_1,"45-dry-!.wav",(CVector3f *)auStack_11c);
    return 0;
  }
  afStack_104[2] = *(float *)&param_1[2].field_0x38;
  afStack_104[0] = 0.0;
  afStack_104[1] = 0.0;
  core_actor_cpp_FUN_00408b00(param_1,afStack_118 + 5);
  fVar2 = afStack_118[0];
  auVar1 = auStack_11c;
  afStack_a0[2] = fStack_a4;
  afStack_a0[(uint)bVar4 * -2 + 3] = afStack_a0[(uint)bVar4 * -2];
  afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_164 = (float)auVar1 + afStack_a0[2];
  afStack_160[0] = fVar2 + afStack_a0[3];
  afStack_160[1] = afStack_118[1] + fStack_90;
  afStack_d4[0] = (float)auVar1 + afStack_a0[2];
  afStack_f4[(uint)bVar4 * -2 + 9] = afStack_160[(uint)bVar4 * -2];
  afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  auVar1 = auStack_11c;
  afStack_34[2] = (float)_DAT_005c49f7 / *(float *)&param_1[2].field_0x38;
  fStack_f8 = afStack_a0[2] * afStack_34[2];
  afStack_f4[0] = afStack_a0[3] * afStack_34[2];
  afStack_f4[1] = fStack_90 * afStack_34[2];
  fStack_50 = afStack_a0[2] * afStack_34[2];
  afStack_a0[(uint)bVar4 * -2 + 0x15] = afStack_f4[(uint)bVar4 * -2];
  afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
       afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_80 = (float)auVar1 - fStack_50;
  fStack_7c = afStack_118[0] - fStack_4c;
  fStack_78 = afStack_118[1] - fStack_48;
  afStack_c8[0] = (float)auVar1 - fStack_50;
  afStack_f4[(uint)bVar4 * -2 + 0xc] = afStack_a0[(uint)bVar4 * -2 + 9];
  afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
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
                                 (g_CDemonSetPtr,afStack_f4 + 0xb,afStack_f4 + 8);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
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
              break;
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
        if (iVar3 == 0) break;
        core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->field_0x14d138);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18);
      this_ptr = g_CDemonSetPtr;
      if (iVar3 != 0) {
        if (iStack_20 == 0) {
          *(int *)&param_1[4].field_0x8 = *(int *)&param_1[4].field_0x8 + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&uStack_1c8);
      uStack_1c8 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
      fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
      uStack_1c0 = 0x3ecccccd;
      fStack_1c4 = fStack_14;
      fStack_14c = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                   *(float *)&g_CDemonSetPtr->field_0x14d110;
      fStack_148 = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                   *(float *)&g_CDemonSetPtr->field_0x14d114;
      fStack_144 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                   *(float *)&g_CDemonSetPtr->field_0x14d118;
      afStack_f4[2] = fStack_14c;
      afStack_f4[(uint)bVar4 * -2 + 3] = afStack_160[(uint)bVar4 * -2 + 6];
      afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_160[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      fStack_1c = (float)_DAT_005c4a07 /
                  SQRT(fStack_e4 * fStack_e4 +
                       afStack_f4[2] * afStack_f4[2] + afStack_f4[3] * afStack_f4[3]);
      fStack_128 = afStack_f4[2] * fStack_1c;
      afStack_124[0] = afStack_f4[3] * fStack_1c;
      afStack_124[1] = fStack_e4 * fStack_1c;
      fStack_68 = afStack_f4[2] * fStack_1c;
      afStack_a0[(uint)bVar4 * -2 + 0xf] = afStack_124[(uint)bVar4 * -2];
      afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
           afStack_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&fStack_1bc != afStack_a0 + 0xe) {
        fStack_1bc = fStack_68;
        uStack_1b8 = uStack_64;
        uStack_1b4 = uStack_60;
      }
      core_actor_cpp_FUN_00408bf0(iStack_18,&g_CDemonSetPtr->field_0x14d138);
      fStack_e0 = fStack_74;
      afStack_f4[(uint)bVar4 * -2 + 6] = afStack_a0[(uint)bVar4 * -2 + 0xc];
      afStack_f4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      if (&fStack_1ac != afStack_f4 + 5) {
        fStack_1ac = fStack_e0;
        uStack_1a8 = uStack_dc;
        uStack_1a4 = uStack_d8;
      }
      uStack_1a0 = *(uint *)&param_1[4].field_0xc;
      uStack_198 = 0x65;
      pCStack_194 = param_1;
      uStack_19c = 0x3e19999a;
      uStack_190 = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&uStack_1c8);
      if (*(int *)&param_1[2].field_0x34 == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  rotation_matrix = (CMatrix3x3f *)&param_1->field_0x3c;
  fStack_bc = (float)auStack_11c;
  afStack_b8[(uint)bVar4 * -2] = afStack_118[(uint)bVar4 * -2];
  afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  afStack_b8[0] = afStack_b8[0] + _DAT_005c49ff;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,(CVector3f *)&fStack_bc,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,param_1,"45.wav",(CVector3f *)auStack_11c);
  *(uint *)&param_1[2].field_0x50 = 0x3eaa7efa;
  CStack_44._0_4_ = 0x40400000;
  CStack_44._4_4_ = 0x40400000;
  CStack_44._8_4_ = 0xc0800000;
  CStack_b0._0_4_ = core_actor_cpp_FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  fStack_14 = (float)CStack_b0._0_4_;
  CStack_b0._4_4_ = core_actor_cpp_FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  CStack_b0._8_4_ = 0;
  fStack_14 = (float)CStack_b0._4_4_;
  core_dirmat_cpp_FUN_0045b550(aCStack_18c,&CStack_b0);
  core_dirmat_cpp_FUN_0045b800(aCStack_18c,&CStack_44);
  puVar7 = &uStack_38;
  uStack_38 = uStack_5c;
  afStack_34[(uint)bVar4 * -2] = afStack_a0[(uint)bVar4 * -2 + 0x12];
  afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  core_actor_cpp_FUN_00408b00(param_1,puVar7);
  CStack_134._0_4_ = CStack_140._0_4_;
  *(uint *)((int)&CStack_134 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_140 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_134 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_140 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (&CStack_44 != &CStack_134) {
    CStack_44._0_4_ = CStack_134._0_4_;
    CStack_44._4_4_ = CStack_134._4_4_;
    CStack_44._8_4_ = CStack_134._8_4_;
  }
  model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_00462420("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004a3e70
            (0x01C73654,(CVector3f *)&param_1->field_0x20,(CVector3f *)&param_1->field_0x30,
             &CStack_44,model_ptr);
  return 1;
}
