// Name: core_blundrbs.cpp_FUN_00410490
// Address: 00410490
// Address Range: [[00410490, 00411743]]
// Convention: unknown
// Signature: undefined4 core_blundrbs_cpp_FUN_00410490(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_blundrbs_cpp_FUN_00410490(CDemonActor *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CGlass *this_ptr;
  CTrigger *this_ptr_00;
  byte *rotation_matrix;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1460 [991];
  uint *puVar10;
  CDemonActor *pCVar11;
  CDemonSet *this_ptr_01;
  CMatrix3x3f *rotation_matrix_00;
  uint uStack_4b4;
  uint uStack_4b0;
  uint uStack_4ac;
  float fStack_4a8;
  uint uStack_4a4;
  uint uStack_4a0;
  float fStack_498;
  uint uStack_494;
  uint uStack_490;
  uint uStack_48c;
  uint uStack_488;
  uint uStack_484;
  CDemonActor *pCStack_480;
  uint uStack_47c;
  float fStack_478;
  float afStack_474 [5];
  uint uStack_460;
  uint uStack_45c;
  uint uStack_454;
  uint uStack_448;
  uint uStack_43c;
  uint uStack_430;
  CVector3f CStack_424;
  uint uStack_418;
  float afStack_414 [5];
  float afStack_400 [3];
  float fStack_3f4;
  float afStack_3f0 [5];
  CVector3f CStack_3dc;
  float fStack_3d0;
  float afStack_3cc [4];
  float fStack_3bc;
  uint uStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  uint uStack_3a0;
  uint auStack_39c [4];
  float fStack_38c;
  CVector3f CStack_388;
  uint uStack_37c;
  float afStack_378 [2];
  CVector3f CStack_370;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  uint uStack_358;
  uint auStack_354 [4];
  float fStack_344;
  uint uStack_340;
  float afStack_33c [4];
  float fStack_32c;
  uint uStack_328;
  CVector3f CStack_31c;
  float afStack_310 [3];
  uint uStack_304;
  float afStack_300 [4];
  float fStack_2f0;
  uint uStack_2ec;
  float fStack_2e4;
  CVector3f CStack_2e0;
  uint uStack_2d4;
  float afStack_2d0 [5];
  uint uStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  uint uStack_2b0;
  float afStack_2ac [4];
  float fStack_29c;
  float fStack_298;
  float afStack_294 [8];
  uint uStack_274;
  float afStack_270 [4];
  float fStack_260;
  uint uStack_25c;
  float afStack_258 [5];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_22c;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  uint uStack_214;
  float fStack_208;
  uint uStack_204;
  uint uStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  uint uStack_1f0;
  CVector3f CStack_1e4;
  float fStack_1d8;
  float afStack_1d4 [5];
  uint uStack_1c0;
  CVector3f CStack_1b4;
  CVector3f CStack_1a8;
  uint uStack_19c;
  float afStack_198 [4];
  float fStack_188;
  uint uStack_184;
  float fStack_180;
  float fStack_17c;
  uint uStack_178;
  float afStack_174 [4];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float afStack_154 [3];
  CVector3f CStack_148;
  uint uStack_13c;
  float afStack_138 [4];
  float fStack_128;
  uint uStack_124;
  float fStack_11c;
  float fStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f4;
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  uint uStack_b8;
  uint uStack_ac;
  uint uStack_a0;
  uint uStack_94;
  uint uStack_88;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [2];
  CVector3f CStack_70;
  uint uStack_64;
  float afStack_60 [7];
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  CTrigger *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  puVar10 = &uStack_2d4;
  uStack_2d4 = uStack_94;
  afStack_2d0[(uint)bVar7 * -2] = afStack_cc[(uint)bVar7 * -2 + 0xf];
  afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  core_actor_cpp_FUN_00408b80(param_1,puVar10);
  fStack_7c = fStack_22c;
  afStack_78[(uint)bVar7 * -2] = afStack_258[(uint)bVar7 * -2 + 0xc];
  pCVar11 = param_1;
  afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  iVar5 = core_weapon_cpp_FUN_0057b880(pCVar11);
  if (iVar5 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,param_1,"wp_noammo.wav",(CVector3f *)&fStack_7c);
    *(uint *)&param_1[2].field_0x50 = 0x3f800000;
    return 0;
  }
  fVar8 = (float10)fptan((float10)*(float *)&param_1[4].field_0x34 * (float10)_DAT_005b64e2 *
                         (float10)_DAT_005b64ea);
  fStack_38 = (float)(fVar8 * (float10)*(float *)&param_1[2].field_0x38);
  iStack_28 = 0;
  if (0 < *(int *)&param_1[4].field_0x2c) {
    do {
      fStack_44 = (float)core_actor_cpp_FUN_0040ce40(0,0x40c90fdb);
      fStack_14 = fStack_44;
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0,fStack_38);
      fVar8 = (float10)fcos((float10)fStack_44);
      fVar9 = (float10)fsin((float10)fStack_44);
      fStack_364 = (float)(fVar8 * (float10)fStack_14);
      fStack_360 = (float)(fVar9 * (float10)fStack_14);
      fStack_35c = *(float *)&param_1[2].field_0x38;
      core_actor_cpp_FUN_00408b00(param_1,&fStack_364);
      afStack_174[2] = fStack_3f4;
      afStack_174[(uint)bVar7 * -2 + 3] = afStack_3f0[(uint)bVar7 * -2];
      afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_3f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&fStack_364 != afStack_174 + 2) {
        fStack_364 = afStack_174[2];
        fStack_360 = afStack_174[3];
        fStack_35c = fStack_164;
      }
      fStack_478 = fStack_7c + fStack_364;
      afStack_474[0] = afStack_78[0] + fStack_360;
      afStack_474[1] = afStack_78[1] + fStack_35c;
      afStack_154[0] = fStack_7c + fStack_364;
      afStack_174[(uint)bVar7 * -2 + 9] = afStack_474[(uint)bVar7 * -2];
      fVar4 = afStack_78[1];
      fVar3 = afStack_78[0];
      fVar2 = fStack_7c;
      afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_20 = (float)_DAT_005b651a / *(float *)&param_1[2].field_0x38;
      fStack_220 = fStack_364 * fStack_20;
      fStack_21c = fStack_360 * fStack_20;
      fStack_218 = fStack_35c * fStack_20;
      fStack_3d0 = fStack_364 * fStack_20;
      afStack_3cc[(uint)bVar7 * -2] = afStack_258[(uint)bVar7 * -2 + 0xf];
      afStack_3cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      afStack_138[2] = fVar2 - fStack_3d0;
      afStack_138[3] = fVar3 - afStack_3cc[0];
      fStack_128 = fVar4 - afStack_3cc[1];
      afStack_300[2] = fVar2 - fStack_3d0;
      afStack_300[(uint)bVar7 * -2 + 3] = afStack_138[(uint)bVar7 * -2 + 3];
      this_ptr_01 = g_CDemonSetPtr;
      afStack_300[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_01);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
      core_setcolid_cpp_FUN_0053ebd0(g_CDemonSetPtr);
      if (*(CDemonActor **)&param_1[2].field_0x54 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1[2].field_0x54);
      }
      iStack_18 = 0;
      do {
        fStack_14 = (float)core_setcolid_cpp_FUN_0053ccc0
                                     (g_CDemonSetPtr,afStack_300 + 2,afStack_174 + 8);
        if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash);
        if ((iVar5 != 0) &&
           (iVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), 0 < iVar6)) {
          iVar5 = 0;
        }
        this_ptr = (CGlass *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                              g_CGlassClassInfo.name_hash);
        this_ptr_00 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                                 g_CTriggerClassInfo.name_hash);
        pCStack_1c = this_ptr_00;
        if (iVar5 != 0) {
          iVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe0))(iVar5);
          if (iVar6 == 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&uStack_4b4);
            uStack_4b4 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
            uStack_4b0 = 0x40a00000;
            uStack_4ac = 0x3ecccccd;
            fStack_d0 = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                        *(float *)&g_CDemonSetPtr->field_0x14d110;
            afStack_cc[0] =
                 *(float *)&g_CDemonSetPtr->field_0x14d120 -
                 *(float *)&g_CDemonSetPtr->field_0x14d114;
            afStack_cc[1] =
                 *(float *)&g_CDemonSetPtr->field_0x14d124 -
                 *(float *)&g_CDemonSetPtr->field_0x14d118;
            fStack_1d8 = fStack_d0;
            afStack_1d4[(uint)bVar7 * -2] = afStack_cc[(uint)bVar7 * -2];
            afStack_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            fStack_24 = (float)_DAT_005b6542 /
                        SQRT(afStack_1d4[1] * afStack_1d4[1] +
                             fStack_1d8 * fStack_1d8 + afStack_1d4[0] * afStack_1d4[0]);
            fStack_244 = fStack_1d8 * fStack_24;
            fStack_240 = afStack_1d4[0] * fStack_24;
            fStack_23c = afStack_1d4[1] * fStack_24;
            fStack_208 = fStack_1d8 * fStack_24;
            afStack_258[(uint)bVar7 * -2 + 0x15] = afStack_258[(uint)bVar7 * -2 + 6];
            afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
                 afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            if (&fStack_4a8 != afStack_258 + 0x14) {
              fStack_4a8 = fStack_208;
              uStack_4a4 = uStack_204;
              uStack_4a0 = uStack_200;
            }
            core_actor_cpp_FUN_00408bf0(iVar5,&g_CDemonSetPtr->field_0x14d138);
            fStack_118 = fStack_238;
            afStack_138[(uint)bVar7 * -2 + 9] = afStack_258[(uint)bVar7 * -2 + 9];
            afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            if (&fStack_498 != afStack_138 + 8) {
              fStack_498 = fStack_118;
              uStack_494 = uStack_114;
              uStack_490 = uStack_110;
            }
            uStack_48c = *(uint *)&param_1[4].field_0xc;
            uStack_484 = 0x65;
            uStack_488 = 0x3e19999a;
            pCStack_480 = param_1;
            uStack_47c = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
            (**(code **)(*(int *)(iVar5 + 0x154) + 0x108))(iVar5,&uStack_4b4);
            core_gore_cpp_FUN_004ce9c0
                      (g_CGorePtr,(CVector3f *)&g_CDemonSetPtr->field_0x14d138,(CVector3f *)0x0,2,
                       *(EBloodType *)(iVar5 + 0x27a0));
          }
          break;
        }
        if (this_ptr == (CGlass *)0x0) {
          if (this_ptr_00 == (CTrigger *)0x0) {
            core_fire_cpp_FUN_004a2090
                      (0x01C73654,&g_CDemonSetPtr->field_0x14d138,&g_CDemonSetPtr->field_0x14d128,
                       *(uint *)&g_CDemonSetPtr->field_0x14d134,
                       *(uint *)&g_CDemonSetPtr->field_0x14d144,0);
            fStack_1fc = *(float *)&g_CDemonSetPtr->field_0x14d138 - afStack_300[2];
            fStack_1f8 = *(float *)&g_CDemonSetPtr->field_0x14d13c - afStack_300[3];
            fStack_1f4 = *(float *)&g_CDemonSetPtr->field_0x14d140 - fStack_2f0;
            fStack_160 = fStack_1fc;
            afStack_174[(uint)bVar7 * -2 + 6] = afStack_258[(uint)bVar7 * -2 + 0x18];
            afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
            if (afStack_198 + 2 != afStack_174 + 5) {
              afStack_198[2] = fStack_160;
              afStack_198[3] = fStack_15c;
              fStack_188 = fStack_158;
            }
            if (_DAT_005b6522 <=
                SQRT(fStack_188 * fStack_188 +
                     afStack_198[2] * afStack_198[2] + afStack_198[3] * afStack_198[3])) break;
            fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
            uVar1 = *(uint *)&g_CDemonSetPtr->field_0x14d134;
            if (uVar1 < 7) {
              if (uVar1 != 2) {
LAB_004116f9:
                fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
                core_sound_cpp_FUN_00560a70
                          (0x02CF5680,param_1,"RIC-DT.WAV",(CVector3f *)&fStack_7c,
                           fStack_14);
                break;
              }
            }
            else {
              if (uVar1 < 8) {
                if ((float)_DAT_005b652a <= fStack_14) {
                  fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
                  core_sound_cpp_FUN_00560a70
                            (0x02CF5680,param_1,"RIC-WD0C.WAV",(CVector3f *)&fStack_7c,
                             fStack_14);
                }
                else {
                  fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
                  core_sound_cpp_FUN_00560a70
                            (0x02CF5680,param_1,"RIC-WD0B.WAV",(CVector3f *)&fStack_7c,
                             fStack_14);
                }
                break;
              }
              if (uVar1 != 8) goto LAB_004116f9;
            }
            if (fStack_14 < (float)_DAT_005b6532) {
              fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
              core_sound_cpp_FUN_00560a70
                        (0x02CF5680,param_1,"RIC-CT0A.WAV",(CVector3f *)&fStack_7c,
                         fStack_14);
            }
            else if (_DAT_005b653a <= (double)fStack_14) {
              fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
              core_sound_cpp_FUN_00560a70
                        (0x02CF5680,param_1,"RIC-CT0C.WAV",(CVector3f *)&fStack_7c,
                         fStack_14);
            }
            else {
              fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
              core_sound_cpp_FUN_00560a70
                        (0x02CF5680,param_1,"RIC-CT0B.WAV",(CVector3f *)&fStack_7c,
                         fStack_14);
            }
            break;
          }
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_00);
          iVar5 = core_trigger_cpp_FUN_0056ede0(this_ptr_00,param_1);
          if (iVar5 != 0) {
            core_trigger_cpp_FUN_0056ee20(this_ptr_00,5.0);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)pCStack_1c);
        }
        else {
          iVar5 = core_glass_cpp_FUN_004cc5d0(this_ptr);
          if (iVar5 == 0) break;
          core_glass_cpp_FUN_004cc040(this_ptr,&g_CDemonSetPtr->field_0x14d138);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 4);
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < *(int *)&param_1[4].field_0x2c);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  CStack_388._0_4_ = 0;
  CStack_388._4_4_ = 0;
  CStack_388._8_4_ = 0;
  fStack_298 = fStack_7c;
  afStack_294[(uint)bVar7 * -2] = afStack_78[(uint)bVar7 * -2];
  afStack_294[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  afStack_258[2] = (float)uStack_64;
  afStack_258[(uint)bVar7 * -2 + 3] = afStack_60[(uint)bVar7 * -2];
  afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  afStack_270[2] = afStack_258[2];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  afStack_3f0[2] = (float)uStack_ac;
  afStack_3f0[(uint)bVar7 * -2 + 3] = afStack_cc[(uint)bVar7 * -2 + 9];
  afStack_3f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  afStack_270[3] = afStack_3f0[3];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  afStack_3cc[2] = (float)uStack_304;
  afStack_3cc[(uint)bVar7 * -2 + 3] = afStack_300[(uint)bVar7 * -2];
  afStack_3cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_300[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_260 = fStack_3bc + (float)_DAT_005b64f2;
  core_actor_cpp_FUN_00408b80(param_1,afStack_270 + 2);
  CStack_2e0._0_4_ = CStack_dc._0_4_;
  *(uint *)((int)&CStack_2e0 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_dc + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_2e0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  afStack_1d4[2] = afStack_2d0[2];
  afStack_1d4[(uint)bVar7 * -2 + 3] = afStack_2d0[(uint)bVar7 * -2 + 3];
  afStack_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  auStack_39c[2] = afStack_1d4[2];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_460 = uStack_10c;
  afStack_474[(uint)bVar7 * -2 + 6] = afStack_138[(uint)bVar7 * -2 + 0xc];
  afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  auStack_39c[3] = uStack_45c;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  afStack_33c[2] = (float)uStack_f4;
  afStack_33c[(uint)bVar7 * -2 + 3] = afStack_138[(uint)bVar7 * -2 + 0x12];
  afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  fStack_38c = fStack_32c + (float)_DAT_005b64fa;
  core_actor_cpp_FUN_00408b80(param_1,auStack_39c + 2);
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_1c0 = afStack_414[2];
  afStack_1d4[(uint)bVar7 * -2 + 6] = afStack_414[(uint)bVar7 * -2 + 3];
  afStack_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_414[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  uStack_184 = uStack_1c0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_13c = uStack_178;
  afStack_138[(uint)bVar7 * -2] = afStack_174[(uint)bVar7 * -2];
  afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_180 = afStack_138[0];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_124 = uStack_b8;
  afStack_138[(uint)bVar7 * -2 + 6] = afStack_cc[(uint)bVar7 * -2 + 6];
  afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  fStack_17c = fStack_11c + _DAT_005b6502;
  core_actor_cpp_FUN_00408b80(param_1,&uStack_184);
  CStack_1e4._0_4_ = CStack_70._0_4_;
  *(uint *)((int)&CStack_1e4 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_1e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_19c = uStack_214;
  afStack_198[(uint)bVar7 * -2] = afStack_258[(uint)bVar7 * -2 + 0x12];
  afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  afStack_2ac[2] = (float)uStack_19c;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_25c = uStack_1f0;
  afStack_258[(uint)bVar7 * -2] = afStack_258[(uint)bVar7 * -2 + 0x1b];
  afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
  afStack_2ac[3] = afStack_258[0];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_3b8 = uStack_430;
  afStack_3cc[(uint)bVar7 * -2 + 6] = afStack_474[(uint)bVar7 * -2 + 0x12];
  afStack_3cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  fStack_29c = fStack_3b0 + _DAT_005b6506;
  core_actor_cpp_FUN_00408b80(param_1,afStack_2ac + 2);
  CStack_3dc._0_4_ = CStack_370._0_4_;
  *(uint *)((int)&CStack_3dc + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_370 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_3dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_370 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_3a0 = uStack_358;
  auStack_39c[(uint)bVar7 * -2] = auStack_354[(uint)bVar7 * -2];
  auStack_39c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       auStack_354[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_3ac = (float)uStack_3a0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_37c = uStack_340;
  afStack_378[(uint)bVar7 * -2] = afStack_33c[(uint)bVar7 * -2];
  afStack_378[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_3a8 = afStack_378[0];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_88 = afStack_474[2];
  afStack_cc[(uint)bVar7 * -2 + 0x12] = afStack_474[(uint)bVar7 * -2 + 3];
  afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  fStack_3a4 = fStack_80 + _DAT_005b650a;
  core_actor_cpp_FUN_00408b80(param_1,afStack_3cc + 8);
  CStack_1b4._0_4_ = CStack_31c._0_4_;
  *(uint *)((int)&CStack_1b4 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_31c + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_1b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_31c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_328 = uStack_2b0;
  afStack_33c[(uint)bVar7 * -2 + 6] = afStack_2ac[(uint)bVar7 * -2];
  afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  auStack_354[2] = uStack_328;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_100 = uStack_454;
  afStack_138[(uint)bVar7 * -2 + 0xf] = afStack_474[(uint)bVar7 * -2 + 9];
  afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  auStack_354[3] = uStack_fc;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_2ec = uStack_a0;
  afStack_300[(uint)bVar7 * -2 + 6] = afStack_cc[(uint)bVar7 * -2 + 0xc];
  afStack_300[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  fStack_344 = fStack_2e4 + _DAT_005b650e;
  core_actor_cpp_FUN_00408b80(param_1,auStack_354 + 2);
  CStack_1a8._0_4_ = CStack_148._0_4_;
  *(uint *)((int)&CStack_1a8 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_148 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_1a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_148 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  afStack_294[2] = (float)uStack_43c;
  afStack_294[(uint)bVar7 * -2 + 3] = afStack_474[(uint)bVar7 * -2 + 0xf];
  afStack_294[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  uStack_2bc = afStack_294[2];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_274 = uStack_448;
  afStack_270[(uint)bVar7 * -2] = afStack_474[(uint)bVar7 * -2 + 0xc];
  afStack_270[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  fStack_2b8 = afStack_270[0];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  afStack_cc[2] = (float)uStack_418;
  afStack_cc[(uint)bVar7 * -2 + 3] = afStack_414[(uint)bVar7 * -2];
  afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_414[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_2b4 = fStack_bc + _DAT_005b6512;
  rotation_matrix = &param_1->field_0x3c;
  core_actor_cpp_FUN_00408b80(param_1,afStack_2d0 + 5);
  CStack_e8._0_4_ = CStack_424._0_4_;
  *(uint *)((int)&CStack_e8 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_424 + (uint)bVar7 * -8 + 4);
  rotation_matrix_00 = (CMatrix3x3f *)rotation_matrix;
  *(uint *)((int)&CStack_e8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_424 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  afStack_294[0] = afStack_294[0] + _DAT_005b6516;
  afStack_270[3] = afStack_270[3] + _DAT_005b6516;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,(CVector3f *)&fStack_298,rotation_matrix_00);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,(CVector3f *)&fStack_298);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_1e4,(CMatrix3x3f *)rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_1e4);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_3dc,(CMatrix3x3f *)rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_3dc);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_1b4,(CMatrix3x3f *)rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_1b4);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_1a8,(CMatrix3x3f *)rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_1a8);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_e8,(CMatrix3x3f *)rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_e8);
  iVar5 = 0;
  core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
            (0x01C73654,(CVector3f *)&fStack_298,1.1,&CStack_388,0xffff);
  do {
    uStack_40 = core_actor_cpp_FUN_0040ce40(0xc0400000,0x40400000);
    uStack_3c = core_actor_cpp_FUN_0040ce40(0,0x41000000);
    afStack_400[0] = (float)core_actor_cpp_FUN_0040ce40(0xc0400000,0x40400000);
    uStack_30 = uStack_3c;
    uStack_34 = uStack_40;
    afStack_400[1] = (float)uStack_3c;
    afStack_400[2] = (float)uStack_40;
    if (afStack_310 != afStack_414 + 5) {
      afStack_310[1] = (float)uStack_3c;
      afStack_310[2] = (float)uStack_40;
      afStack_310[0] = afStack_400[0];
    }
    iVar5 = iVar5 + 1;
    fStack_2c = afStack_400[0];
    fStack_14 = afStack_400[0];
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (0x01C73654,&CStack_2e0,(CVector3f *)afStack_310,0x20000,0x10000,6,0xffff);
  } while (iVar5 < 8);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,param_1,"wp_blunderbus.wav",(CVector3f *)&fStack_7c);
  *(uint *)&param_1[2].field_0x50 = 0x40200000;
  return 1;
}
