// Name: core_sentinel.cpp_FUN_0054bc90
// Address: 0054bc90
// Address Range: [[0054bc90, 0054c9b2]]
// Convention: unknown
// Signature: void core_sentinel_cpp_FUN_0054bc90(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sentinel_cpp_FUN_0054bc90(CEnemy *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  int iVar4;
  CPathMap *pCVar5;
  byte bVar6;
  float afStackY_1200 [982];
  CEnemy *pCVar7;
  CGore *this_ptr;
  float *pfVar8;
  uint *puVar9;
  CVector3f *pCVar10;
  float fVar11;
  EBloodType blood_type;
  SDamageInfo *pSVar12;
  float max_distance;
  float fVar13;
  SDamageInfo aSStack_290 [4];
  float fStack_28c;
  CEnemy *pCStack_25c;
  CEnemy *pCStack_258;
  SDamageInfo aSStack_254 [4];
  float fStack_250;
  uint uStack_218;
  float afStack_214 [5];
  float fStack_200;
  float afStack_1fc [5];
  float fStack_1e8;
  float afStack_1e4 [4];
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  uint uStack_1c4;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  uint uStack_1a0;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  byte auStack_188 [12];
  CVector3f CStack_17c;
  uint uStack_170;
  float afStack_16c [4];
  float fStack_15c;
  uint uStack_158;
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [4];
  float fStack_12c;
  float afStack_128 [3];
  float fStack_11c;
  float afStack_110 [3];
  byte auStack_104 [12];
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_bc;
  float afStack_b0 [3];
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [2];
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [4];
  float fStack_6c;
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [2];
  CVector3f CStack_50;
  byte *puStack_44;
  float afStack_40 [3];
  float fStack_34;
  float fStack_30;
  CMotionController *pCStack_2c;
  CMotionController *pCStack_28;
  CMotionController *pCStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_40[0] = param_2 * *(float *)&param_1->field_0xc1d0;
  pCStack_24 = (CMotionController *)&param_1->field_0x158;
LAB_0054bcec:
  if (0.0 < afStack_40[0]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_24,afStack_40);
    switch(iVar2) {
    case 100:
      iVar2 = *(int *)&param_1->field_0xc1e8;
      iStack_20 = 1;
      if ((((iVar2 != 0) &&
           (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar2 == 0)) &&
          (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                             (*(int *)&param_1->field_0xc1e8), iVar2 == 0)) &&
         (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xe8))
                            (*(int *)&param_1->field_0xc1e8,param_1,0), iVar2 != 0)) {
        afStack_214[4] = 0x40800000;
        afStack_214[2] = 0.0;
        afStack_214[3] = 0.0;
        core_actor_cpp_FUN_00408b40(param_1,afStack_214 + 2);
        fStack_200 = fStack_11c;
        afStack_1fc[(uint)bVar6 * -2] = afStack_13c[(uint)bVar6 * -2 + 9];
        afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        fVar11 = fStack_200 - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x20);
        fVar13 = afStack_1fc[1] - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x28);
        if ((float)_DAT_005f0411 < SQRT(fVar13 * fVar13 + fVar11 * fVar11)) {
          iStack_20 = 0;
        }
        iVar2 = *(int *)&param_1->field_0xc1e8;
        if (((ABS(afStack_1fc[0] - *(float *)(iVar2 + 0x24)) <= (float)_DAT_005f0419) &&
            ((iStack_20 == 0 ||
             (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xec))(iVar2,param_1,0), iVar2 != 0))))
           && (iStack_20 != 0)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,0,1);
      break;
    case 0x65:
      (**(code **)(*(int *)&param_1->field_0x154 + 0xf8))(param_1);
      break;
    case 0x66:
      if (*(int *)&param_1->field_0xc1e8 != 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_254);
        fStack_250 = (float)core_actor_cpp_FUN_0040cc00(0x3f800000,0x40a00000);
        fStack_14 = fStack_250;
        (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x108))
                  (*(int *)&param_1->field_0xc1e8,aSStack_254);
      }
      break;
    case 0x67:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"wing?.wav");
      break;
    case 0x68:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"sentinel-fall.wav");
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar2);
    }
    goto LAB_0054bcec;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_24);
  iVar2 = *(int *)(pSVar3 + 0x24);
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    if ((iVar2 == 10) || (iVar2 == 0xb)) {
      *(uint *)&param_1->field_0x2ff0 = 0x3f000000;
      switch(iVar2) {
      case 0:
        goto switchD_0054c14a_caseD_0;
      case 1:
        goto switchD_0054c14a_caseD_1;
      case 2:
        goto switchD_0054c14a_caseD_2;
      case 3:
        goto switchD_0054c14a_caseD_3;
      case 4:
        goto switchD_0054c14a_caseD_4;
      default:
        goto switchD_0054c14a_caseD_5;
      case 9:
        goto switchD_0054c14a_caseD_9;
      case 10:
        goto switchD_0054c14a_caseD_a;
      case 0xe:
      case 0xf:
        goto switchD_0054c14a_caseD_e;
      }
    }
    *(uint *)&param_1->field_0x2ff0 = 0x40000000;
    switch(iVar2) {
    case 0:
switchD_0054c14a_caseD_0:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xc1e8;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,2,1);
        }
      }
      else {
        fStack_1d0 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_1cc = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_1c8 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_c8 = fStack_1d0;
        afStack_f4[(uint)bVar6 * -2 + 0xc] = afStack_1e4[(uint)bVar6 * -2 + 6];
        afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             afStack_1e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        fStack_e0 = fStack_c8;
        afStack_f4[(uint)bVar6 * -2 + 6] = afStack_f4[(uint)bVar6 * -2 + 0xc];
        afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        fStack_d4 = fStack_e0;
        afStack_f4[(uint)bVar6 * -2 + 9] = afStack_f4[(uint)bVar6 * -2 + 6];
        afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        fStack_34 = fStack_cc * fStack_cc + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0;
        if (SQRT(fStack_34) <= _DAT_00604e54) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,2,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,3,1);
        }
      }
      break;
    case 1:
switchD_0054c14a_caseD_1:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if (*(int *)&param_1->field_0xc1e8 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      break;
    case 2:
switchD_0054c14a_caseD_2:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      fVar11 = 0x40800000;
      pCStack_2c = (CMotionController *)&param_1->field_0x158;
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,2,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_1c = 0x40800000;
        fVar13 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_104._0_4_ = 0;
        auStack_104._8_4_ = fVar11;
        pCVar10 = (CVector3f *)auStack_104;
        auStack_104._4_4_ = 0;
        pCVar5 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xc1e8);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar5,pCVar10,
                           fVar13,max_distance);
        if (-1 < iVar2) {
          iVar2 = *(int *)&param_1->field_0xc1e8;
          fStack_5c = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
          afStack_58[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
          afStack_58[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
          fStack_80 = fStack_5c;
          afStack_7c[(uint)bVar6 * -2] = afStack_58[(uint)bVar6 * -2];
          afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fStack_30 = SQRT(afStack_7c[1] * afStack_7c[1] + fStack_80 * fStack_80);
          afStack_7c[0] = 0.0;
          fStack_18 = fStack_30;
          if (_DAT_00604e54 < fStack_30) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,3,1);
          }
          if ((fStack_18 <= fStack_1c) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
            iVar2 = *(int *)&param_1->field_0xc1e8;
            fStack_1ac = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_1a8 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_1a4 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_128[0] = fStack_1ac;
            afStack_13c[(uint)bVar6 * -2 + 6] = afStack_1e4[(uint)bVar6 * -2 + 0xf];
            afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                 afStack_1e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
            core_vecdir_cpp_FUN_005a7520(afStack_13c + 5);
            uStack_218 = afStack_1fc[2];
            afStack_214[(uint)bVar6 * -2] = afStack_1fc[(uint)bVar6 * -2 + 3];
            afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_1fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                         (afStack_214[0] - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005f0409) {
              iVar2 = core_actor_cpp_FUN_0040cd00(0.5);
              if (iVar2 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,10,1);
                *(uint *)&param_1[1].field_0x4 = 0x40a00000;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,4,1);
              }
              *(uint *)&param_1->field_0xc1e4 = 0x3f800000;
            }
          }
          if (*(float *)&param_1->field_0xc1e0 < fStack_18) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,0,1);
          }
        }
      }
      break;
    case 3:
switchD_0054c14a_caseD_3:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      pCStack_28 = (CMotionController *)&param_1->field_0x158;
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0,1);
      }
      else {
        fVar13 = 0.17453292;
        fVar11 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_188._0_4_ = 0;
        auStack_188._8_4_ = 0x40800000;
        pCVar10 = (CVector3f *)auStack_188;
        auStack_188._4_4_ = 0;
        pCVar5 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xc1e8);
        core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                  ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar5
                   ,pCVar10,fVar11,fVar13);
        iVar2 = *(int *)&param_1->field_0xc1e8;
        fStack_140 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
        afStack_13c[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
        afStack_13c[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
        afStack_13c[2] = fStack_140;
        afStack_13c[(uint)bVar6 * -2 + 3] = afStack_13c[(uint)bVar6 * -2];
        afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if (_DAT_00604e54 <=
            SQRT(fStack_12c * fStack_12c +
                 afStack_13c[2] * afStack_13c[2] + afStack_13c[3] * afStack_13c[3])) {
          iVar2 = core_actor_cpp_FUN_0040cd00(0.1);
          if (iVar2 != 0) {
            iVar2 = core_actor_cpp_FUN_0040cd00(0.5);
            if (iVar2 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0xe,1);
            }
          }
        }
        else {
          iVar2 = core_actor_cpp_FUN_0040cd00(0.5);
          if (iVar2 == 0) {
            iVar2 = core_actor_cpp_FUN_0040cd00(0.5);
            if (iVar2 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,4,1);
            }
          }
          else {
            iVar2 = core_actor_cpp_FUN_0040cd00(0.5);
            if (iVar2 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0xe,1);
            }
          }
        }
      }
      break;
    case 4:
switchD_0054c14a_caseD_4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_290);
      fStack_28c = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      pSVar12 = aSStack_290;
      pCStack_25c = param_1;
      pCStack_258 = param_1;
      puStack_44 = &param_1->field_0xfd8;
      fVar11 = 1.0;
      fStack_14 = fStack_28c;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,puStack_44 + _DAT_01e82104 * 0x30);
      pfVar8 = afStack_13c + 0xb;
      afStack_110[0] = (float)uStack_bc;
      afStack_13c[(uint)bVar6 * -2 + 0xc] = afStack_f4[(uint)bVar6 * -2 + 0xf];
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      core_actor_cpp_FUN_00408b40(param_1,pfVar8);
      pCVar10 = &CStack_68;
      CStack_68._0_4_ = CStack_a4._0_4_;
      *(uint *)((int)&CStack_68 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_a4 + (uint)bVar6 * -8 + 4);
      pCVar7 = param_1;
      *(uint *)((int)&CStack_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(pCVar7,pCVar10,fVar11,pSVar12);
      fStack_28c = (float)core_actor_cpp_FUN_0040cc00(0x41700000,0x41f00000);
      pSVar12 = aSStack_290;
      pCStack_25c = param_1;
      fVar11 = 1.0;
      pCStack_258 = param_1;
      fStack_14 = fStack_28c;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,puStack_44 + _DAT_01e820fc * 0x30);
      puVar9 = &uStack_f8;
      uStack_f8 = uStack_1a0;
      afStack_f4[(uint)bVar6 * -2] = afStack_1e4[(uint)bVar6 * -2 + 0x12];
      afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_1e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      core_actor_cpp_FUN_00408b40(param_1,puVar9);
      pCVar10 = &CStack_50;
      CStack_50._0_4_ = CStack_8c._0_4_;
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + 4);
      pCVar7 = param_1;
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(pCVar7,pCVar10,fVar11,pSVar12);
    default:
      break;
    case 9:
switchD_0054c14a_caseD_9:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,0);
        pfVar8 = afStack_f4 + 0x11;
        afStack_b0[0] = (float)uStack_158;
        afStack_f4[(uint)bVar6 * -2 + 0x12] = afStack_16c[(uint)bVar6 * -2 + 6];
        afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             afStack_16c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        core_actor_cpp_FUN_00408b40(param_1,pfVar8);
        blood_type = BLOOD_TYPE_RED;
        pCVar10 = &CStack_17c;
        CStack_17c._0_4_ = CStack_14c._0_4_;
        *(uint *)((int)&CStack_17c + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_14c + (uint)bVar6 * -8 + 4);
        this_ptr = g_CGorePtr;
        *(uint *)((int)&CStack_17c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr,pCVar10,blood_type);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
      break;
    case 10:
switchD_0054c14a_caseD_a:
      fVar11 = *(float *)&param_1[1].field_0x4 - param_2;
      *(float *)&param_1[1].field_0x4 = fVar11;
      if (fVar11 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
switchD_0054c14a_caseD_e:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xc1e8;
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      else {
        afStack_1e4[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        afStack_1e4[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_1d4 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_98 = afStack_1e4[2];
        afStack_94[(uint)bVar6 * -2] = afStack_1e4[(uint)bVar6 * -2 + 3];
        afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_1e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_vecdir_cpp_FUN_005a7520(&fStack_98);
        uStack_170 = uStack_1c4;
        afStack_16c[(uint)bVar6 * -2] = afStack_1e4[(uint)bVar6 * -2 + 9];
        afStack_16c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_1e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        *(float *)&param_1->field_0x34 = afStack_16c[0];
      }
    }
    goto switchD_0054c14a_caseD_5;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0054bd63:
      iVar2 = 2;
    }
    else {
LAB_0054c125:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0054bd63;
    if (uVar1 != 3) goto LAB_0054c125;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_0054c14a_caseD_5:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_1b8 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_1b4 = *(float *)&param_1->field_0x251c * param_2;
    fStack_1b0 = *(float *)&param_1->field_0x2520 * param_2;
    afStack_16c[2] = fStack_1b8;
    afStack_16c[(uint)bVar6 * -2 + 3] = afStack_1e4[(uint)bVar6 * -2 + 0xc];
    afStack_16c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_1e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    afStack_f4[2] = afStack_16c[2] + *(float *)&param_1->field_0x250c;
    afStack_f4[3] = afStack_16c[3] + *(float *)&param_1->field_0x2510;
    fStack_e4 = fStack_15c + *(float *)&param_1->field_0x2514;
    fStack_194 = afStack_f4[2];
    afStack_1e4[(uint)bVar6 * -2 + 0x15] = afStack_f4[(uint)bVar6 * -2 + 3];
    afStack_1e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
         afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    afStack_7c[2] = fStack_194 + *(float *)&param_1->field_0x249c;
    afStack_7c[3] = fStack_190 + *(float *)&param_1->field_0x24a0;
    fStack_6c = fStack_18c + *(float *)&param_1->field_0x24a4;
    fStack_1e8 = afStack_7c[2];
    afStack_1e4[(uint)bVar6 * -2] = afStack_7c[(uint)bVar6 * -2 + 3];
    afStack_1e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_1e8);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
