// Name: core_mobster.cpp_FUN_0051ce40
// Address: 0051ce40
// Address Range: [[0051ce40, 0051dee5]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_0051ce40(CMobster *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mobster_cpp_FUN_0051ce40(CMobster *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  SMotion *pSVar5;
  CMobster *pCVar6;
  int iVar7;
  CPathMap *pCVar8;
  byte bVar9;
  float afStackY_11d8 [982];
  float *pfVar10;
  CGore *this_ptr;
  CVector3f *pCVar11;
  float fVar12;
  SDamageInfo *pSVar13;
  uint uVar14;
  uint *puVar15;
  EBloodType blood_type;
  float fVar16;
  SDamageInfo aSStack_268 [4];
  uint uStack_264;
  CMobster *pCStack_234;
  CMobster *pCStack_230;
  SDamageInfo aSStack_22c [4];
  float fStack_228;
  CMobster *pCStack_1f8;
  CMobster *pCStack_1f4;
  float fStack_1f0;
  float afStack_1ec [5];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  CVector3f CStack_1cc;
  uint uStack_1c0;
  float afStack_1bc [2];
  CVector3f CStack_1b4;
  float fStack_1a8;
  float afStack_1a4 [5];
  CVector3f CStack_190;
  float fStack_184;
  float afStack_180 [5];
  CVector3f CStack_16c;
  uint uStack_160;
  float afStack_15c [2];
  CVector3f CStack_154;
  uint uStack_148;
  float afStack_144 [4];
  float fStack_134;
  uint uStack_130;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  float fStack_114;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  byte auStack_f4 [12];
  float fStack_e8;
  float afStack_e4 [5];
  byte auStack_d0 [12];
  float fStack_c4;
  float afStack_c0 [5];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_a0;
  uint uStack_94;
  float afStack_90 [4];
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float afStack_70 [3];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CMotionController *pCStack_2c;
  uint uStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    if (*(int *)&param_1->field_0xc28c != 0) {
      core_mobster_cpp_FUN_0051cc20(param_1);
      core_charactr_cpp_FUN_004328f0((CCharacter *)param_1,param_2);
    }
    return;
  }
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc334 * 4) == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_268);
    pCStack_234 = param_1;
    pCStack_230 = param_1;
    uStack_264 = 0x4479f99a;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_268);
  }
  if (*(int *)&param_1->field_0xb9e8 != 0) {
    *(uint *)&param_1->field_0xb9ec = 0;
  }
  if (0 < *(int *)&param_1->field_0x3120) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0,0);
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc300);
    iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
    if (((iVar3 == 0) &&
        (iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc308), iVar3 == 0)) &&
       (iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc2fc), iVar3 == 0)) {
      uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"mob-scream?.wav")
      ;
      *(uint *)&param_1->field_0xc308 = uVar4;
    }
  }
  fVar12 = *(float *)&param_1->field_0xc33c - param_2;
  *(float *)&param_1->field_0xc33c = fVar12;
  if (fVar12 < 0.0) {
    *(uint *)&param_1->field_0xc33c = 0;
  }
  fVar12 = *(float *)&param_1->field_0xc280 - param_2;
  *(float *)&param_1->field_0xc280 = fVar12;
  if (fVar12 < 0.0) {
    *(uint *)&param_1->field_0xc280 = 0;
  }
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc318 * 4) == 0) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
  }
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc310 * 4) == 0) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0,0);
  }
  if ((*(int *)&param_1->field_0xc294 == 0) &&
     (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&param_1->field_0xc298), iVar3 != 0)) {
    *(uint *)&param_1->field_0xc294 = 1;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_40 = param_2 * *(float *)&param_1->field_0xc1d0;
  pCStack_20 = (CMotionController *)&param_1->field_0x158;
  while (0.0 < fStack_40) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&param_1->field_0x158,afStack_90 + 0x14);
    if (iVar3 == 100) {
      iVar3 = *(int *)&param_1->field_0xc274;
      if (iVar3 != 0) {
        *(uint *)&param_1->field_0xc274 = 0;
        core_charactr_cpp_FUN_004325b0(param_1,1,iVar3,0x3e4ccccd,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar3);
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_20);
  uVar4 = *(uint *)(pSVar5 + 0x24);
  iVar3 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    switch(uVar4) {
    case 0:
      if (*(int *)&param_1->field_0xc294 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        if (*(int *)&param_1->field_0xc1e8 == 0) {
          iVar3 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
          if (iVar3 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,1,1);
          }
          break;
        }
        iVar3 = *(int *)&param_1->field_0xc288;
        if (iVar3 != 0) {
          if (*(int *)&param_1->field_0xc284 == 0) {
            fStack_1d8 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
            fStack_1d4 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
            fStack_1d0 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
            fStack_124 = fStack_1d8;
            afStack_144[(uint)bVar9 * -2 + 9] = afStack_1ec[(uint)bVar9 * -2 + 6];
            afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
                 afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
            if ((float)_DAT_005e9e12 <
                SQRT(fStack_11c * fStack_11c + fStack_124 * fStack_124 + fStack_120 * fStack_120)) {
              *(uint *)&param_1->field_0xc284 = 1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,8,1);
              break;
            }
          }
          else {
            *(uint *)&param_1->field_0xc284 = 0;
          }
        }
        if (*(int *)&param_1->field_0xc28c == 0) {
          iVar3 = *(int *)&param_1->field_0xc1e8;
          fStack_4c = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_48 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_44 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_64 = fStack_4c;
          afStack_90[(uint)bVar9 * -2 + 0xc] = afStack_90[(uint)bVar9 * -2 + 0x12];
          afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
               afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
          fStack_30 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
          fStack_1c = fStack_30;
          if (fStack_30 < 0x40400000 + 1.0) {
            core_vecdir_cpp_FUN_005a7520(afStack_90 + 0xb);
            uStack_7c = uStack_130;
            afStack_90[(uint)bVar9 * -2 + 6] = afStack_144[(uint)bVar9 * -2 + 6];
            afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                 afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                         (fStack_78 - *(float *)&param_1->field_0x34);
            if ((ABS(fStack_14) < (float)_DAT_005e9e0a) && (*(float *)&param_1->field_0xc1e4 <= 0.0)
               ) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,9,1);
              *(uint *)&param_1->field_0xc1e4 = 0x40000000;
            }
          }
          if (fStack_30 < *(float *)&param_1->field_0xc1e0) {
            if (_DAT_00603d68 <= fStack_30) {
              iVar3 = 8;
            }
            else {
              iVar3 = 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,iVar3,1);
          }
          if ((*(int *)&param_1->field_0xc278 == 0) &&
             (iVar3 = core_actor_cpp_FUN_0040cd00(0.7), iVar3 != 0)) {
            core_mobster_cpp_FUN_0051f330(param_1,1);
            *(uint *)&param_1->field_0xc278 = 1;
          }
          else {
            *(uint *)&param_1->field_0xc278 = 1;
          }
          break;
        }
        if (*(float *)&param_1->field_0xc338 <= (float)_DAT_005e9e02) break;
        iVar3 = core_actor_cpp_FUN_0040cd00(0.25);
        if (iVar3 != 0) {
          core_mobster_cpp_FUN_0051cd10(param_1);
          break;
        }
      }
      else {
        *(uint *)&param_1->field_0xc1e8 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        if (*(float *)&param_1->field_0xc338 <= (float)_DAT_005e9e02) break;
      }
      core_mobster_cpp_FUN_0051eac0(param_1);
      break;
    case 1:
    case 8:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      puVar1 = &param_1->field_0x158;
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar3 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar1,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar1,1,1);
        }
      }
      else if (*(int *)&param_1->field_0xc284 == 0) {
        iVar3 = core_mobster_cpp_FUN_0051e5d0(param_1,param_2);
        if (iVar3 == 0) {
          fStack_38 = 0x40400000 + 1.0;
          if (*(int *)&param_1->field_0x2628 != 0) {
            fStack_38 = 0x41F00000;
          }
          fVar16 = 0.17453292;
          fVar12 = 0.5;
          *(uint *)&param_1->field_0x24a4 = 0;
          *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
          *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
          auStack_d0._0_4_ = 0;
          fStack_34 = 0x40400000;
          auStack_d0._8_4_ = 0x40400000;
          pCVar11 = (CVector3f *)auStack_d0;
          auStack_d0._4_4_ = 0;
          pCVar8 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xc1e8);
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar8,pCVar11,
                             fVar12,fVar16);
          if (-1 < iVar3) {
            puVar1 = &param_1->field_0x20;
            iVar3 = *(int *)&param_1->field_0xc1e8;
            afStack_144[2] = *(float *)puVar1 - *(float *)(iVar3 + 0x20);
            afStack_144[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
            fStack_134 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
            fStack_c4 = afStack_144[2];
            afStack_c0[(uint)bVar9 * -2] = afStack_144[(uint)bVar9 * -2 + 3];
            afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
            fStack_24 = SQRT(afStack_c0[1] * afStack_c0[1] + fStack_c4 * fStack_c4);
            afStack_c0[0] = 0.0;
            fStack_3c = fStack_24;
            if ((fStack_24 <= fStack_38) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
              pCStack_2c = (CMotionController *)&param_1->field_0x158;
              if (*(int *)&param_1->field_0x2628 == 0) {
                fStack_100 = *(float *)(iVar3 + 0x20) - *(float *)puVar1;
                fStack_fc = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
                fStack_f8 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
                afStack_e4[2] = fStack_100;
                afStack_e4[(uint)bVar9 * -2 + 3] = afStack_144[(uint)bVar9 * -2 + 0x12];
                afStack_e4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                     afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
                core_vecdir_cpp_FUN_005a7520(afStack_e4 + 2);
                uStack_118 = afStack_c0[2];
                afStack_144[(uint)bVar9 * -2 + 0xc] = afStack_c0[(uint)bVar9 * -2 + 3];
                afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
                     afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
                fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                             (fStack_114 - *(float *)&param_1->field_0x34);
                if (ABS(fStack_14) < (float)_DAT_005e9e0a) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,9,1);
                }
              }
              else if (fStack_34 + 1.0 <= fStack_24) {
                if (((float)_DAT_005e9e02 < *(float *)&param_1->field_0xc338) &&
                   (*(float *)&param_1->field_0xc33c <= 0.0)) {
                  *(uint *)&param_1->field_0xc280 = 0;
                  iVar3 = core_actor_cpp_FUN_0040cd00(0.3);
                  if (iVar3 != 0) {
                    core_mobster_cpp_FUN_0051f330(param_1,2);
                  }
                  if (*(float *)&param_1->field_0xc280 <= 0.0) {
                    core_mobster_cpp_FUN_0051eac0(param_1);
                  }
                  else if (*(int *)&param_1->field_0x25b0 == 0) {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              ((CMotionController *)&param_1->field_0x158,10,1);
                  }
                  else {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              ((CMotionController *)&param_1->field_0x158,0xb,1);
                  }
                }
              }
              else {
                fStack_e8 = *(float *)(iVar3 + 0x20) - *(float *)puVar1;
                afStack_e4[0] = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
                afStack_e4[1] = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
                afStack_180[2] = fStack_e8;
                afStack_180[(uint)bVar9 * -2 + 3] = afStack_e4[(uint)bVar9 * -2];
                afStack_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                     afStack_e4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
                core_vecdir_cpp_FUN_005a7520(afStack_180 + 2);
                uStack_160 = uStack_148;
                afStack_15c[(uint)bVar9 * -2] = afStack_144[(uint)bVar9 * -2];
                afStack_15c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                     afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
                fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                             (afStack_15c[0] - *(float *)&param_1->field_0x34);
                if ((ABS(fStack_14) < (float)_DAT_005e9e0a) &&
                   (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,9,1);
                  *(uint *)&param_1->field_0xc1e4 = 0x40000000;
                }
              }
              *(uint *)&param_1->field_0xc1e4 = 0x3f800000;
            }
            if (*(float *)&param_1->field_0xc1e0 < fStack_3c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,0,1);
            }
          }
        }
      }
      else {
        fVar16 = 0.17453292;
        fVar12 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_f4._0_4_ = 0;
        auStack_f4._8_4_ = 0x40400000;
        pCVar11 = (CVector3f *)auStack_f4;
        auStack_f4._4_4_ = 0;
        pCVar8 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc288 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xc288);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xc288 + 0x20),pCVar8,pCVar11,
                           fVar12,fVar16);
        if (iVar3 < 1) {
          if (iVar3 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,0,1);
            *(uint *)&param_1->field_0xc288 = 0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar1,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if (*(int *)&param_1->field_0xc1e8 != 0) {
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
        if (iVar3 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          uStack_28 = *(uint *)(iVar3 + 0x568);
          *(uint *)(iVar3 + 0x568) = 100;
          iVar7 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar7 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
          }
          *(uint *)(iVar3 + 0x568) = uStack_28;
        }
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)&param_1->field_0x25b0,g_CWeaponClassInfo.name_hash);
        iStack_18 = iVar3;
        if (iVar3 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          uVar4 = *(uint *)(iVar3 + 0x568);
          *(uint *)(iVar3 + 0x568) = 100;
          iVar7 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar7 == 0) {
            *(uint *)(iStack_18 + 0x568) = uVar4;
          }
          else {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
            *(uint *)(iStack_18 + 0x568) = uVar4;
          }
        }
      }
      if ((*(float *)&param_1->field_0xc338 < (float)_DAT_005e9e02) ||
         (*(float *)&param_1->field_0xc33c <= 0.0)) {
        if (*(int *)&param_1->field_0xc294 == 0) {
          uVar14 = 0x40800000;
          uVar4 = 0x40000000;
        }
        else {
          uVar14 = 0x40a00000;
          uVar4 = 0x40800000;
        }
        fStack_14 = (float)core_actor_cpp_FUN_0040cc00(uVar4,uVar14);
        *(float *)&param_1->field_0xc33c = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
        iVar3 = core_actor_cpp_FUN_0040cd00(0.3);
        if (iVar3 != 0) {
          core_mobster_cpp_FUN_0051f330(param_1,3);
        }
      }
      break;
    case 5:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(pCStack_20,0);
        puVar15 = &uStack_94;
        uStack_94 = uStack_1c0;
        afStack_90[(uint)bVar9 * -2] = afStack_1bc[(uint)bVar9 * -2];
        afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_1bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        core_actor_cpp_FUN_00408b40(param_1,puVar15);
        blood_type = BLOOD_TYPE_RED;
        pCVar11 = &CStack_a0;
        CStack_a0._0_4_ = CStack_1b4._0_4_;
        *(uint *)((int)&CStack_a0 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_1b4 + (uint)bVar9 * -8 + 4);
        this_ptr = g_CGorePtr;
        *(uint *)((int)&CStack_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_1b4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr,pCVar11,blood_type);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_22c);
      fStack_228 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      pCStack_1f8 = param_1;
      pCStack_1f4 = param_1;
      fStack_14 = fStack_228;
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc310 * 4) != 0) {
        pSVar13 = aSStack_22c;
        fVar12 = 0.4;
        core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01d33c04 * 0x30);
        pfVar10 = afStack_90 + 8;
        afStack_70[0] = afStack_1ec[2];
        afStack_90[(uint)bVar9 * -2 + 9] = afStack_1ec[(uint)bVar9 * -2 + 3];
        afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_FUN_00408b40(param_1,pfVar10);
        pCVar11 = &CStack_16c;
        CStack_16c._0_4_ = CStack_1cc._0_4_;
        *(uint *)((int)&CStack_16c + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_1cc + (uint)bVar9 * -8 + 4);
        pCVar6 = param_1;
        *(uint *)((int)&CStack_16c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_1cc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar6,pCVar11,fVar12,pSVar13);
      }
      fStack_228 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      fStack_14 = fStack_228;
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc318 * 4) != 0) {
        pSVar13 = aSStack_22c;
        fVar12 = 0.4;
        core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01d33c08 * 0x30);
        pfVar10 = afStack_1a4 + 2;
        afStack_1a4[2] = (float)uStack_58;
        afStack_1a4[(uint)bVar9 * -2 + 3] = afStack_90[(uint)bVar9 * -2 + 0xf];
        afStack_1a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
        core_actor_cpp_FUN_00408b40(param_1,pfVar10);
        pCVar11 = &CStack_190;
        CStack_190._0_4_ = CStack_154._0_4_;
        *(uint *)((int)&CStack_190 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_154 + (uint)bVar9 * -8 + 4);
        pCVar6 = param_1;
        *(uint *)((int)&CStack_190 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_154 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar6,pCVar11,fVar12,pSVar13);
      }
      break;
    case 10:
    case 0xb:
      if (*(float *)&param_1->field_0xc280 <= 0.0) {
        core_mobster_cpp_FUN_0051eac0(param_1);
      }
    }
    goto switchD_0051ded1_caseD_3;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0051d176:
      iVar3 = 1;
    }
    else {
LAB_0051d3eb:
      iVar3 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar3,1);
  }
  else {
    if (uVar2 < 3) goto LAB_0051d176;
    if (uVar2 != 3) goto LAB_0051d3eb;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_0051ded1_caseD_3:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  if (*(int *)&param_1->field_0xc28c == 0) {
    iVar3 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
    if (iVar3 != 0) {
      iVar3 = *(int *)&param_1->field_0xc1e8;
      if ((iVar3 != 0) &&
         (pCVar6 = (CMobster *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3),
         pCVar6 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
      }
      core_charactr_cpp_FUN_0042d700(param_1,param_2);
      fStack_1f0 = *(float *)&param_1->field_0x2518 * param_2;
      afStack_1ec[0] = *(float *)&param_1->field_0x251c * param_2;
      afStack_1ec[1] = *(float *)&param_1->field_0x2520 * param_2;
      fStack_1a8 = fStack_1f0;
      afStack_1a4[(uint)bVar9 * -2] = afStack_1ec[(uint)bVar9 * -2];
      afStack_1a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      fStack_ac = fStack_1a8 + *(float *)&param_1->field_0x250c;
      fStack_a8 = afStack_1a4[0] + *(float *)&param_1->field_0x2510;
      fStack_a4 = afStack_1a4[1] + *(float *)&param_1->field_0x2514;
      fStack_10c = fStack_ac;
      afStack_144[(uint)bVar9 * -2 + 0xf] = afStack_c0[(uint)bVar9 * -2 + 6];
      afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      afStack_90[2] = fStack_10c + *(float *)&param_1->field_0x249c;
      afStack_90[3] = fStack_108 + *(float *)&param_1->field_0x24a0;
      fStack_80 = fStack_104 + *(float *)&param_1->field_0x24a4;
      fStack_184 = afStack_90[2];
      afStack_180[(uint)bVar9 * -2] = afStack_90[(uint)bVar9 * -2 + 3];
      afStack_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      *(uint *)&param_1->field_0x2514 = 0;
      *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
      core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_184);
    }
  }
  else {
    core_mobster_cpp_FUN_0051cc20(param_1);
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)&param_1->field_0x25b0,g_CWeaponClassInfo.name_hash);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if (iVar3 == 0) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_0051def0(param_1,param_2);
  }
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
