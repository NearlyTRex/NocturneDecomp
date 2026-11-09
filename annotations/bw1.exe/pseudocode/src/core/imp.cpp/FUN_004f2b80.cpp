// Name: core_imp.cpp_FUN_004f2b80
// Address: 004f2b80
// Address Range: [[004f2b80, 004f3a1e]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004f2b80(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_FUN_004f2b80(CEnemy *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  SMotion *pSVar3;
  int iVar4;
  CEnemy *pCVar5;
  CPathMap *path_map;
  uint uVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_11f0 [982];
  CGore *this_ptr;
  float *pfVar9;
  CVector3f *pCVar10;
  float fVar11;
  float fVar12;
  EBloodType EVar13;
  SDamageInfo *pSVar14;
  float max_distance;
  SDamageInfo aSStack_280 [4];
  float fStack_27c;
  CEnemy *pCStack_24c;
  CEnemy *pCStack_248;
  SDamageInfo aSStack_244 [4];
  float fStack_240;
  CEnemy *pCStack_210;
  CEnemy *pCStack_20c;
  CVector3f CStack_208;
  float fStack_1fc;
  float afStack_1f8 [5];
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  float fStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  float fStack_1b8;
  CVector3f CStack_1b4;
  byte auStack_1a8 [12];
  CVector3f CStack_19c;
  uint uStack_190;
  float afStack_18c [5];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float afStack_13c [3];
  uint uStack_130;
  CVector3f CStack_124;
  CVector3f CStack_118;
  float fStack_10c;
  float afStack_108 [5];
  uint uStack_f4;
  float afStack_f0 [5];
  float fStack_dc;
  float afStack_d8 [5];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [3];
  CVector3f CStack_ac;
  uint uStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float fStack_6c;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [2];
  int iStack_4c;
  float fStack_44;
  float fStack_40;
  float afStack_3c [2];
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x30 * 4) == 0) &&
     (iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar1 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,6,1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_3c[0] = param_2 * *(float *)&param_1->field_0xc1d0;
  pCStack_1c = (CMotionController *)&param_1->field_0x158;
LAB_004f2bec:
  if (0.0 < afStack_3c[0]) {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_1c,afStack_3c);
    if (uVar2 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar2);
    }
    else {
      if (uVar2 < 0x29b) {
        iVar1 = *(int *)&param_1->field_0xc1e8;
        iStack_18 = 1;
        if ((((iVar1 != 0) &&
             (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1), iVar1 == 0)) &&
            ((iStack_18 == 0 ||
             (iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                                (*(int *)&param_1->field_0xc1e8), iVar1 == 0)))) &&
           ((iStack_18 == 0 ||
            (iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xe8))
                               (*(int *)&param_1->field_0xc1e8,param_1,0), iVar1 != 0)))) {
          if (iStack_18 != 0) {
            afStack_108[4] = 0x40000000;
            afStack_108[2] = 0.0;
            afStack_108[3] = 0.0;
            core_actor_cpp_FUN_00408b40(param_1,afStack_108 + 2);
            fStack_154 = fStack_16c;
            afStack_18c[(uint)bVar7 * -2 + 0xf] = afStack_18c[(uint)bVar7 * -2 + 9];
            afStack_18c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                 afStack_18c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            fVar11 = fStack_154 - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x20);
            fVar12 = fStack_14c - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x28);
            if ((float)_DAT_005e566a < SQRT(fVar12 * fVar12 + fVar11 * fVar11)) {
              iStack_18 = 0;
            }
            if ((float)_DAT_005e5672 <
                ABS(fStack_150 - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x24)))
            goto LAB_004f2c63;
          }
          if (((iStack_18 == 0) ||
              (iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xec))
                                 (*(int *)&param_1->field_0xc1e8,param_1,0), iVar1 != 0)) &&
             (iStack_18 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,9,1);
            goto LAB_004f2bec;
          }
        }
LAB_004f2c63:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
        goto LAB_004f2bec;
      }
      if (uVar2 == 0x29b) {
        if (*(int *)&param_1->field_0xc1e8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
        }
        else {
          core_skeleton_cpp_FUN_00569040(pCStack_1c,_DAT_01d06cf8);
          pfVar9 = afStack_d8 + 2;
          afStack_d8[2] = (float)uStack_130;
          afStack_d8[(uint)bVar7 * -2 + 3] = afStack_18c[(uint)bVar7 * -2 + 0x18];
          afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_18c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
          core_actor_cpp_FUN_00408b40(param_1,pfVar9);
          pSVar14 = aSStack_244;
          CStack_19c._0_4_ = CStack_118._0_4_;
          *(uint *)((int)&CStack_19c + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&CStack_118 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&CStack_19c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&CStack_118 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          CStack_1b4._0_4_ = CStack_19c._0_4_;
          *(uint *)(auStack_1a8 + (uint)bVar7 * -8 + -8) =
               *(uint *)((int)&CStack_19c + (uint)bVar7 * -8 + 4);
          *(uint *)(auStack_1a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4) =
               *(uint *)((int)&CStack_19c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(pSVar14);
          fStack_240 = (float)core_actor_cpp_FUN_0040cc00(0x40a00000,0x41200000);
          pCStack_210 = param_1;
          pCStack_20c = param_1;
          fStack_14 = fStack_240;
          (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x108))
                    (*(int *)&param_1->field_0xc1e8,aSStack_244);
          fVar8 = (float10)fStack_240 * (float10)_DAT_005e565a * (float10)_DAT_005e5662;
          EVar13 = BLOOD_TYPE_RED;
          round();
          iStack_4c = (int)ROUND(fVar8);
          core_gore_cpp_FUN_004e6060(g_CGorePtr,&CStack_1b4,(CVector3f *)0x0,iStack_4c,EVar13);
          iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                            (*(int *)&param_1->field_0xc1e8);
          if (iVar1 < 1) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ghoul-eat-?.wav");
          }
          else {
            (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf0))
                      (*(int *)&param_1->field_0xc1e8);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar2);
      }
    }
    goto LAB_004f2bec;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  pCStack_20 = (CMotionController *)&param_1->field_0x158;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_20);
  iVar1 = *(int *)(pSVar3 + 0x24);
  iStack_2c = iVar1;
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    switch(iVar1) {
    case 0:
      iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
      if (iVar1 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar1 = *(int *)&param_1->field_0xc1e8;
        if (iVar1 == 0) {
          iVar1 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
          if (iVar1 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,1,1);
          }
        }
        else if (*(int *)(iVar1 + 0x26fc) == 0) {
          fStack_c4 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_c0 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_bc = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_88 = fStack_c4;
          afStack_9c[(uint)bVar7 * -2 + 6] = afStack_d8[(uint)bVar7 * -2 + 6];
          afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          fStack_44 = SQRT(fStack_80 * fStack_80 + fStack_88 * fStack_88 + fStack_84 * fStack_84);
          fStack_34 = fStack_44;
          if (fStack_44 < 0x40000000) {
            core_vecdir_cpp_FUN_005a7520(afStack_9c + 5);
            uStack_f4 = afStack_f0[2];
            afStack_f0[(uint)bVar7 * -2] = afStack_f0[(uint)bVar7 * -2 + 3];
            afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                         (afStack_f0[0] - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005e5652) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,4,1);
            }
          }
          if (fStack_34 < *(float *)&param_1->field_0xc1e0) {
            if (_DAT_006027e8 <= fStack_34) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,3,1);
        }
      }
      else {
        iVar1 = core_actor_cpp_FUN_0040cd00(0.1);
        if (iVar1 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      fVar11 = 0x40000000;
      pCStack_24 = (CMotionController *)&param_1->field_0x158;
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar1 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar1 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,1,1);
        }
      }
      else {
        iVar1 = *(int *)(*(int *)&param_1->field_0xc1e8 + 0x26fc);
        if (iVar1 == 0) {
          fStack_30 = 0x40000000;
          max_distance = 0.17453292;
          *(uint *)&param_1->field_0x24a4 = 0;
          fVar12 = 0.5;
          *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
          *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
          auStack_1a8._8_4_ = fVar11;
          pCVar10 = (CVector3f *)auStack_1a8;
          auStack_1a8._0_4_ = iVar1;
          auStack_1a8._4_4_ = iVar1;
          path_map = (CPathMap *)
                     (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                               (*(int *)&param_1->field_0xc1e8);
          iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),path_map,pCVar10,
                             fVar12,max_distance);
          if (-1 < iVar1) {
            iVar1 = *(int *)&param_1->field_0xc1e8;
            fStack_10c = *(float *)&param_1->field_0x20 - *(float *)(iVar1 + 0x20);
            afStack_108[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar1 + 0x24);
            afStack_108[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar1 + 0x28);
            fStack_1c0 = fStack_10c;
            afStack_1f8[(uint)bVar7 * -2 + 0xf] = afStack_108[(uint)bVar7 * -2];
            afStack_1f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                 afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            fStack_40 = SQRT(fStack_1b8 * fStack_1b8 + fStack_1c0 * fStack_1c0);
            uStack_1bc = 0;
            fStack_28 = fStack_40;
            if ((_DAT_006027e8 < fStack_40) && (iStack_2c == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,2,1);
            }
            if (((fStack_28 < _DAT_006027ec) &&
                (iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                                   (*(int *)&param_1->field_0xc1e8), iVar1 == 0)) &&
               (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x34 * 4) != 0)) {
              iVar1 = *(int *)&param_1->field_0xc1e8;
              fStack_148 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
              fStack_144 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
              fStack_140 = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
              afStack_b8[0] = fStack_148;
              afStack_d8[(uint)bVar7 * -2 + 9] = afStack_18c[(uint)bVar7 * -2 + 0x12];
              afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                   afStack_18c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
              core_vecdir_cpp_FUN_005a7520(afStack_b8);
              uStack_1d8 = afStack_9c[2];
              afStack_1f8[(uint)bVar7 * -2 + 9] = afStack_9c[(uint)bVar7 * -2 + 3];
              afStack_1f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                   afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                           (fStack_1d4 - *(float *)&param_1->field_0x34);
              if ((ABS(fStack_14) < (float)_DAT_005e5652) &&
                 (iVar1 = core_actor_cpp_FUN_0040cd00(0.1), iVar1 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,8,1);
                iVar1 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 1));
                if (iVar1 == 0) {
                  uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                    (param_1,"imp-jump?.wav");
                  *(uint *)(param_1 + 1) = uVar6;
                }
              }
            }
            if ((fStack_28 <= fStack_30) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
              iVar1 = *(int *)&param_1->field_0xc1e8;
              fStack_7c = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
              fStack_78 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
              fStack_74 = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
              fStack_58 = fStack_7c;
              afStack_54[(uint)bVar7 * -2] = afStack_9c[(uint)bVar7 * -2 + 9];
              afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                   afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
              core_vecdir_cpp_FUN_005a7520(&fStack_58);
              uStack_70 = afStack_1f8[2];
              afStack_9c[(uint)bVar7 * -2 + 0xc] = afStack_1f8[(uint)bVar7 * -2 + 3];
              afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                   afStack_1f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                           (fStack_6c - *(float *)&param_1->field_0x34);
              if (ABS(fStack_14) < (float)_DAT_005e5652) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,4,1);
                *(uint *)&param_1->field_0xc1e4 = 0x40800000;
              }
            }
            if (*(float *)&param_1->field_0xc1e0 < fStack_28) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,0,1);
            }
            fVar11 = *(float *)&param_1[1].field_0x8 - param_2;
            *(float *)&param_1[1].field_0x8 = fVar11;
            if (fVar11 < 0.0) {
              uVar2 = *(uint *)(param_1 + 1);
              *(uint *)&param_1[1].field_0x8 = 0;
              iVar1 = sound_sndmain_cpp_FUN_005735a0(uVar2);
              if ((iVar1 == 0) &&
                 (iVar1 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x4), iVar1 == 0
                 )) {
                uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                  (param_1,"imp-laugh?.wav");
                *(uint *)(param_1 + 1) = uVar6;
                fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x41200000,0x41a00000);
                *(float *)&param_1[1].field_0x8 = fStack_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,3,1);
        }
      }
      break;
    case 3:
      fVar11 = *(float *)&param_1[1].field_0x8 - param_2 * _DAT_005e564a;
      *(float *)&param_1[1].field_0x8 = fVar11;
      if (fVar11 < 0.0) {
        uVar2 = *(uint *)(param_1 + 1);
        *(uint *)&param_1[1].field_0x8 = 0;
        iVar1 = sound_sndmain_cpp_FUN_005735a0(uVar2);
        if ((iVar1 == 0) &&
           (iVar1 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x4), iVar1 == 0)) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"imp-laugh?.wav");
          *(uint *)(param_1 + 1) = uVar6;
          fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x41200000,0x41a00000);
          *(float *)&param_1[1].field_0x8 = fStack_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_280);
      fStack_27c = (float)core_actor_cpp_FUN_0040cc00(0x40400000,0x40a00000);
      pSVar14 = aSStack_280;
      pCStack_24c = param_1;
      pCStack_248 = param_1;
      fVar11 = 0.4;
      fStack_14 = fStack_27c;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01d06d00 * 0x30);
      pfVar9 = afStack_18c + 2;
      afStack_18c[2] = (float)uStack_190;
      afStack_18c[(uint)bVar7 * -2 + 3] = afStack_18c[(uint)bVar7 * -2];
      afStack_18c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_18c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1,pfVar9);
      pCVar10 = &CStack_208;
      CStack_208._0_4_ = CStack_124._0_4_;
      *(uint *)((int)&CStack_208 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_124 + (uint)bVar7 * -8 + 4);
      pCVar5 = param_1;
      *(uint *)((int)&CStack_208 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_124 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      iVar1 = core_enemy_cpp_FUN_004a0770(pCVar5,pCVar10,fVar11,pSVar14);
      if (iVar1 != 0) {
        iVar4 = 0;
        iVar1 = 0;
        while (iVar1 < *(int *)&g_CDemonSetPtr->field_0x150fec) {
          pCVar5 = (CEnemy *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar4),
                              g_CImpClassInfo.name_hash);
          if (((pCVar5 == (CEnemy *)0x0) || (pCVar5 == param_1)) ||
             (*(int *)&param_1->field_0xc1e8 != *(int *)&pCVar5->field_0xc1e8)) {
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&pCVar5->field_0x158,3,1);
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + 4;
          }
        }
      }
      break;
    case 7:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(pCStack_20,0);
        pfVar9 = afStack_18c + 0x14;
        afStack_13c[0] = (float)uStack_a0;
        afStack_18c[(uint)bVar7 * -2 + 0x15] = afStack_9c[(uint)bVar7 * -2];
        afStack_18c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
             afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        core_actor_cpp_FUN_00408b40(param_1,pfVar9);
        EVar13 = BLOOD_TYPE_RED;
        pCVar10 = &CStack_ac;
        CStack_ac._0_4_ = CStack_64._0_4_;
        *(uint *)((int)&CStack_ac + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_64 + (uint)bVar7 * -8 + 4);
        this_ptr = g_CGorePtr;
        *(uint *)((int)&CStack_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_64 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr,pCVar10,EVar13);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
      break;
    case 9:
      iVar1 = *(int *)&param_1->field_0xc1e8;
      if (iVar1 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,5,1);
      }
      else {
        iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
        if (iVar1 == 0) {
          pCVar5 = *(CEnemy **)(*(int *)&param_1->field_0xc1e8 + 0x26fc);
          if (param_1 == pCVar5) {
            fVar11 = (float)_DAT_005e5642;
            *(float *)&pCVar5->field_0x20 =
                 *(float *)(*(int *)&param_1->field_0xc1e8 + 0x20) -
                 *(float *)&pCVar5->field_0x44 * fVar11;
            *(float *)&pCVar5->field_0x28 =
                 *(float *)(*(int *)&pCVar5->field_0xc1e8 + 0x28) -
                 *(float *)&pCVar5->field_0x5c * fVar11;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,5,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,5,1);
        }
      }
    }
    goto switchD_004f3a18_caseD_5;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_004f2f91:
      iVar1 = 1;
    }
    else {
LAB_004f3173:
      iVar1 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar1,1);
  }
  else {
    if (uVar2 < 3) goto LAB_004f2f91;
    if (uVar2 != 3) goto LAB_004f3173;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004f3a18_caseD_5:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar1 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if ((iVar1 != 0) && (iStack_2c != 9)) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_178 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_174 = *(float *)&param_1->field_0x251c * param_2;
    fStack_170 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_160 = fStack_178;
    afStack_18c[(uint)bVar7 * -2 + 0xc] = afStack_18c[(uint)bVar7 * -2 + 6];
    afStack_18c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_18c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    fStack_1cc = fStack_160 + *(float *)&param_1->field_0x250c;
    fStack_1c8 = fStack_15c + *(float *)&param_1->field_0x2510;
    fStack_1c4 = fStack_158 + *(float *)&param_1->field_0x2514;
    fStack_1e4 = fStack_1cc;
    afStack_1f8[(uint)bVar7 * -2 + 6] = afStack_1f8[(uint)bVar7 * -2 + 0xc];
    afStack_1f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_1f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    fStack_1fc = fStack_1e4 + *(float *)&param_1->field_0x249c;
    afStack_1f8[0] = fStack_1e0 + *(float *)&param_1->field_0x24a0;
    afStack_1f8[1] = fStack_1dc + *(float *)&param_1->field_0x24a4;
    fStack_dc = fStack_1fc;
    afStack_d8[(uint)bVar7 * -2] = afStack_1f8[(uint)bVar7 * -2];
    afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_1f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_dc);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
