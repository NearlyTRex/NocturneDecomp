// Name: core_imp.cpp_FUN_004d6a90
// Address: 004d6a90
// Address Range: [[004d6a90, 004d793e]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004d6a90(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_FUN_004d6a90(CEnemy *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  SMotion *pSVar4;
  int iVar5;
  CEnemy *pCVar6;
  CPathMap *path_map;
  uint uVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_11f4 [982];
  CGore *this_ptr;
  float *pfVar10;
  CVector3f *pCVar11;
  float fVar12;
  SDamageInfo *this_ptr_00;
  EBloodType EVar13;
  float max_distance;
  SDamageInfo aSStack_284 [4];
  float fStack_280;
  CEnemy *pCStack_250;
  CEnemy *pCStack_24c;
  SDamageInfo aSStack_248 [4];
  float fStack_244;
  CEnemy *pCStack_214;
  CEnemy *pCStack_210;
  float fStack_20c;
  float afStack_208 [4];
  float fStack_1f8;
  uint uStack_1f4;
  float fStack_1f0;
  uint uStack_1e8;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  uint uStack_1d0;
  float fStack_1cc;
  uint uStack_1c4;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint uStack_1a8;
  float fStack_1a4;
  byte auStack_1a0 [12];
  CVector3f CStack_194;
  uint uStack_188;
  float afStack_184 [4];
  float fStack_174;
  float afStack_170 [3];
  float afStack_164 [3];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  CVector3f CStack_140;
  uint uStack_134;
  float afStack_130 [5];
  uint uStack_11c;
  CVector3f CStack_110;
  float fStack_104;
  float afStack_100 [5];
  uint uStack_ec;
  float fStack_e8;
  uint uStack_e0;
  float fStack_d4;
  float afStack_d0 [5];
  float afStack_bc [3];
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [4];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [3];
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [3];
  int iStack_4c;
  float afStack_48 [2];
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x30 * 4) == 0) &&
     (iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar2 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,6,1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_48[0] = param_2 * *(float *)&param_1->field_0xcdcc;
  pCStack_1c = (CMotionController *)&param_1->field_0x158;
LAB_004d6b03:
  if (0.0 < afStack_48[0]) {
    uVar3 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_1c,afStack_48);
    if (uVar3 < 0x29a) {
      core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar3);
    }
    else {
      if (uVar3 < 0x29b) {
        iVar2 = *(int *)&param_1->field_0xcde4;
        iStack_18 = 1;
        if ((((iVar2 != 0) &&
             (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar2 == 0)) &&
            ((iStack_18 == 0 ||
             (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                                (*(int *)&param_1->field_0xcde4), iVar2 == 0)))) &&
           ((iStack_18 == 0 ||
            (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xe8))
                               (*(int *)&param_1->field_0xcde4,param_1,0), iVar2 != 0)))) {
          if (iStack_18 != 0) {
            afStack_58[2] = 0x40000000;
            afStack_bc[0] = 0.0;
            afStack_bc[1] = 0.0;
            afStack_bc[2] = 0x40000000;
            core_actor_cpp_FUN_00408b80(param_1,afStack_d0 + 5);
            fStack_14c = afStack_d0[2];
            afStack_184[(uint)bVar8 * -2 + 0xf] = afStack_d0[(uint)bVar8 * -2 + 3];
            afStack_184[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
                 afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            fVar1 = fStack_14c - *(float *)(*(int *)&param_1->field_0xcde4 + 0x20);
            fVar12 = fStack_144 - *(float *)(*(int *)&param_1->field_0xcde4 + 0x28);
            if ((float)_DAT_005c5630 < SQRT(fVar12 * fVar12 + fVar1 * fVar1)) {
              iStack_18 = 0;
            }
            if ((float)_DAT_005c5638 <
                ABS(fStack_148 - *(float *)(*(int *)&param_1->field_0xcde4 + 0x24)))
            goto LAB_004d6b7a;
          }
          if (((iStack_18 == 0) ||
              (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xec))
                                 (*(int *)&param_1->field_0xcde4,param_1,0), iVar2 != 0)) &&
             (iStack_18 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,9,1);
            goto LAB_004d6b03;
          }
        }
LAB_004d6b7a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
        goto LAB_004d6b03;
      }
      if (uVar3 == 0x29b) {
        if (*(int *)&param_1->field_0xcde4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
        }
        else {
          core_skeleton_cpp_FUN_0054dbd0(pCStack_1c,_DAT_01d5bc0c);
          pfVar10 = afStack_94 + 8;
          afStack_74[0] = (float)uStack_1c4;
          afStack_94[(uint)bVar8 * -2 + 9] = afStack_208[(uint)bVar8 * -2 + 0x12];
          afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
               afStack_208[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
          core_actor_cpp_FUN_00408b80(param_1,pfVar10);
          this_ptr_00 = aSStack_284;
          CStack_194._0_4_ = CStack_110._0_4_;
          *(uint *)((int)&CStack_194 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_110 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_194 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&CStack_110 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          CStack_a4._0_4_ = CStack_194._0_4_;
          *(uint *)((int)&CStack_a4 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_194 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&CStack_194 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(this_ptr_00);
          fStack_280 = (float)core_actor_cpp_FUN_0040ce40(0x40a00000,0x41200000);
          pCStack_250 = param_1;
          pCStack_24c = param_1;
          fStack_14 = fStack_280;
          (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x108))
                    (*(int *)&param_1->field_0xcde4,aSStack_284);
          fVar9 = (float10)fStack_280 * (float10)_DAT_005c5620 * (float10)_DAT_005c5628;
          EVar13 = BLOOD_TYPE_RED;
          round();
          iStack_4c = (int)ROUND(fVar9);
          core_gore_cpp_FUN_004ce9c0(g_CGorePtr,&CStack_a4,(CVector3f *)0x0,iStack_4c,EVar13);
          iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                            (*(int *)&param_1->field_0xcde4);
          if (iVar2 < 1) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ghoul-eat-?.wav");
          }
          else {
            (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf0))
                      (*(int *)&param_1->field_0xcde4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
          }
        }
      }
      else {
        core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar3);
      }
    }
    goto LAB_004d6b03;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  pCStack_20 = (CMotionController *)&param_1->field_0x158;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_20);
  iVar2 = *(int *)(pSVar4 + 0x24);
  iStack_2c = iVar2;
  iVar5 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar2) {
    case 0:
      iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar2 = *(int *)&param_1->field_0xcde4;
        if (iVar2 == 0) {
          iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
          if (iVar2 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,1,1);
          }
        }
        else if (*(int *)(iVar2 + 0x26fc) == 0) {
          fStack_80 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_7c = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_78 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_1b8 = fStack_80;
          afStack_208[(uint)bVar8 * -2 + 0x15] = afStack_94[(uint)bVar8 * -2 + 6];
          afStack_208[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
               afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
          fStack_40 = SQRT(fStack_1b0 * fStack_1b0 +
                           fStack_1b8 * fStack_1b8 + fStack_1b4 * fStack_1b4);
          fStack_34 = fStack_40;
          if (fStack_40 < 0x40000000) {
            core_vecdir_cpp_FUN_00576250(afStack_208 + 0x14);
            uStack_ec = uStack_e0;
            afStack_100[(uint)bVar8 * -2 + 6] = afStack_100[(uint)bVar8 * -2 + 9];
            afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                 afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
            fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                         (fStack_e8 - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005c5618) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,4,1);
            }
          }
          if (fStack_34 < *(float *)&param_1->field_0xcddc) {
            if (_DAT_005e1ef8 <= fStack_34) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,3,1);
        }
      }
      else {
        iVar2 = core_actor_cpp_FUN_0040cf40(0.1);
        if (iVar2 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      fVar1 = 0x40000000;
      pCStack_24 = (CMotionController *)&param_1->field_0x158;
      if (*(int *)&param_1->field_0xcde4 == 0) {
        iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,1,1);
        }
      }
      else {
        iVar2 = *(int *)(*(int *)&param_1->field_0xcde4 + 0x26fc);
        if (iVar2 == 0) {
          fStack_30 = 0x40000000;
          max_distance = 0.17453292;
          *(uint *)&param_1->field_0x24a4 = 0;
          fVar12 = 0.5;
          *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
          *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
          auStack_1a0._8_4_ = fVar1;
          pCVar11 = (CVector3f *)auStack_1a0;
          auStack_1a0._0_4_ = iVar2;
          auStack_1a0._4_4_ = iVar2;
          path_map = (CPathMap *)
                     (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                               (*(int *)&param_1->field_0xcde4);
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),path_map,pCVar11,
                             fVar12,max_distance);
          if (-1 < iVar2) {
            iVar2 = *(int *)&param_1->field_0xcde4;
            afStack_94[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
            afStack_94[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
            fStack_84 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
            fStack_1ac = afStack_94[2];
            afStack_208[(uint)bVar8 * -2 + 0x18] = afStack_94[(uint)bVar8 * -2 + 3];
            afStack_208[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
                 afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            fStack_3c = SQRT(fStack_1a4 * fStack_1a4 + fStack_1ac * fStack_1ac);
            uStack_1a8 = 0;
            fStack_28 = fStack_3c;
            if ((_DAT_005e1ef8 < fStack_3c) && (iStack_2c == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,2,1);
            }
            if (((fStack_28 < _DAT_005e1efc) &&
                (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                                   (*(int *)&param_1->field_0xcde4), iVar2 == 0)) &&
               (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x34 * 4) != 0)) {
              iVar2 = *(int *)&param_1->field_0xcde4;
              afStack_208[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
              afStack_208[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
              fStack_1f8 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
              fStack_b0 = afStack_208[2];
              afStack_ac[(uint)bVar8 * -2] = afStack_208[(uint)bVar8 * -2 + 3];
              afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                   afStack_208[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
              core_vecdir_cpp_FUN_00576250(&fStack_b0);
              uStack_1d0 = uStack_98;
              afStack_208[(uint)bVar8 * -2 + 0xf] = afStack_94[(uint)bVar8 * -2];
              afStack_208[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
                   afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                           (fStack_1cc - *(float *)&param_1->field_0x34);
              if ((ABS(fStack_14) < (float)_DAT_005c5618) &&
                 (iVar2 = core_actor_cpp_FUN_0040cf40(0.1), iVar2 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,8,1);
                iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1 + 1));
                if (iVar2 == 0) {
                  uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                    (param_1,"imp-jump?.wav");
                  *(uint *)(param_1 + 1) = uVar7;
                }
              }
            }
            if ((fStack_28 <= fStack_30) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
              iVar2 = *(int *)&param_1->field_0xcde4;
              fStack_5c = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
              afStack_58[0] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
              afStack_58[1] = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
              afStack_100[2] = fStack_5c;
              afStack_100[(uint)bVar8 * -2 + 3] = afStack_58[(uint)bVar8 * -2];
              afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                   afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              core_vecdir_cpp_FUN_00576250(afStack_100 + 2);
              uStack_1f4 = uStack_1e8;
              afStack_208[(uint)bVar8 * -2 + 6] = afStack_208[(uint)bVar8 * -2 + 9];
              afStack_208[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                   afStack_208[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
              fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                           (fStack_1f0 - *(float *)&param_1->field_0x34);
              if (ABS(fStack_14) < (float)_DAT_005c5618) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,4,1);
                *(uint *)&param_1->field_0xcde0 = 0x40800000;
              }
            }
            if (*(float *)&param_1->field_0xcddc < fStack_28) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0,1);
            }
            fVar1 = *(float *)&param_1[1].field_0x8 - param_2;
            *(float *)&param_1[1].field_0x8 = fVar1;
            if (fVar1 < 0.0) {
              uVar3 = *(uint *)(param_1 + 1);
              *(uint *)&param_1[1].field_0x8 = 0;
              iVar2 = sound_sndmain_cpp_FUN_00556700(uVar3);
              if ((iVar2 == 0) &&
                 (iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x4), iVar2 == 0
                 )) {
                uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                  (param_1,"imp-laugh?.wav");
                *(uint *)(param_1 + 1) = uVar7;
                fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x41200000,0x41a00000);
                *(float *)&param_1[1].field_0x8 = fStack_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,3,1);
        }
      }
      break;
    case 3:
      fVar1 = *(float *)&param_1[1].field_0x8 - param_2 * _DAT_005c5610;
      *(float *)&param_1[1].field_0x8 = fVar1;
      if (fVar1 < 0.0) {
        uVar3 = *(uint *)(param_1 + 1);
        *(uint *)&param_1[1].field_0x8 = 0;
        iVar2 = sound_sndmain_cpp_FUN_00556700(uVar3);
        if ((iVar2 == 0) &&
           (iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x4), iVar2 == 0)) {
          uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"imp-laugh?.wav");
          *(uint *)(param_1 + 1) = uVar7;
          fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x41200000,0x41a00000);
          *(float *)&param_1[1].field_0x8 = fStack_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_248);
      fStack_244 = (float)core_actor_cpp_FUN_0040ce40(0x40400000,0x40a00000);
      pCStack_214 = param_1;
      pCStack_210 = param_1;
      fStack_14 = fStack_244;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&param_1->field_0xfd8 + _DAT_01d5bc14 * 0x30,0x3ecccccd,aSStack_248);
      pfVar10 = afStack_184 + 5;
      afStack_170[0] = (float)uStack_188;
      afStack_184[(uint)bVar8 * -2 + 6] = afStack_184[(uint)bVar8 * -2];
      afStack_184[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_184[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_actor_cpp_FUN_00408b80(param_1,pfVar10);
      pfVar10 = afStack_184 + 8;
      afStack_164[0] = (float)uStack_11c;
      afStack_184[(uint)bVar8 * -2 + 9] = afStack_130[(uint)bVar8 * -2 + 6];
      pCVar6 = param_1;
      afStack_184[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
           afStack_130[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      iVar2 = core_enemy_cpp_FUN_004893f0(pCVar6,pfVar10);
      if (iVar2 != 0) {
        iVar5 = 0;
        iVar2 = 0;
        while (iVar2 < *(int *)&g_CDemonSetPtr->field_0x150fec) {
          pCVar6 = (CEnemy *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar5),
                              g_CImpClassInfo.name_hash);
          if (((pCVar6 == (CEnemy *)0x0) || (pCVar6 == param_1)) ||
             (*(int *)&param_1->field_0xcde4 != *(int *)&pCVar6->field_0xcde4)) {
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&pCVar6->field_0x158,3,1);
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 4;
          }
        }
      }
      break;
    case 7:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_20,0);
        pfVar10 = afStack_130 + 2;
        afStack_130[2] = (float)uStack_134;
        afStack_130[(uint)bVar8 * -2 + 3] = afStack_130[(uint)bVar8 * -2];
        afStack_130[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_130[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        core_actor_cpp_FUN_00408b80(param_1,pfVar10);
        EVar13 = BLOOD_TYPE_RED;
        pCVar11 = &CStack_140;
        CStack_140._0_4_ = CStack_68._0_4_;
        *(uint *)((int)&CStack_140 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_68 + (uint)bVar8 * -8 + 4);
        this_ptr = g_CGorePtr;
        *(uint *)((int)&CStack_140 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_gore_cpp_FUN_004cec40(this_ptr,pCVar11,EVar13);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
      break;
    case 9:
      iVar2 = *(int *)&param_1->field_0xcde4;
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,5,1);
      }
      else {
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
        if (iVar2 == 0) {
          pCVar6 = *(CEnemy **)(*(int *)&param_1->field_0xcde4 + 0x26fc);
          if (param_1 == pCVar6) {
            fVar1 = (float)_DAT_005c5608;
            *(float *)&pCVar6->field_0x20 =
                 *(float *)(*(int *)&param_1->field_0xcde4 + 0x20) -
                 *(float *)&pCVar6->field_0x44 * fVar1;
            *(float *)&pCVar6->field_0x28 =
                 *(float *)(*(int *)&pCVar6->field_0xcde4 + 0x28) -
                 *(float *)&pCVar6->field_0x5c * fVar1;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,5,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,5,1);
        }
      }
    }
    goto switchD_004d7938_caseD_5;
  }
  uVar3 = *(uint *)&param_1->field_0x273c;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_004d6ea3:
      iVar2 = 1;
    }
    else {
LAB_004d7078:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar3 < 3) goto LAB_004d6ea3;
    if (uVar3 != 3) goto LAB_004d7078;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004d7938_caseD_5:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if ((iVar2 != 0) && (iStack_2c != 9)) {
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_20c = *(float *)&param_1->field_0x2518 * param_2;
    afStack_208[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_208[1] = *(float *)&param_1->field_0x2520 * param_2;
    fStack_158 = fStack_20c;
    afStack_184[(uint)bVar8 * -2 + 0xc] = afStack_208[(uint)bVar8 * -2];
    afStack_184[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_208[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    fStack_104 = fStack_158 + *(float *)&param_1->field_0x250c;
    afStack_100[0] = fStack_154 + *(float *)&param_1->field_0x2510;
    afStack_100[1] = fStack_150 + *(float *)&param_1->field_0x2514;
    fStack_1dc = fStack_104;
    afStack_208[(uint)bVar8 * -2 + 0xc] = afStack_100[(uint)bVar8 * -2];
    afStack_208[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    afStack_184[2] = fStack_1dc + *(float *)&param_1->field_0x249c;
    afStack_184[3] = fStack_1d8 + *(float *)&param_1->field_0x24a0;
    fStack_174 = fStack_1d4 + *(float *)&param_1->field_0x24a4;
    fStack_d4 = afStack_184[2];
    afStack_d0[(uint)bVar8 * -2] = afStack_184[(uint)bVar8 * -2 + 3];
    afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_184[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_d4);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  return;
}
