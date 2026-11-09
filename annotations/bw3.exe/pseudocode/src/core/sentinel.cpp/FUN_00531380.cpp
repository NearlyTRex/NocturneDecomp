// Name: core_sentinel.cpp_FUN_00531380
// Address: 00531380
// Address Range: [[00531380, 005320ab]]
// Convention: unknown
// Signature: void core_sentinel_cpp_FUN_00531380(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sentinel_cpp_FUN_00531380(CEnemy *param_1,float param_2)

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
  float max_distance;
  float fVar12;
  SDamageInfo aSStack_290 [4];
  float fStack_28c;
  CEnemy *pCStack_25c;
  CEnemy *pCStack_258;
  SDamageInfo aSStack_254 [4];
  float fStack_250;
  float fStack_218;
  float afStack_214 [5];
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  byte auStack_194 [12];
  byte auStack_188 [12];
  uint uStack_17c;
  float afStack_178 [2];
  CVector3f CStack_170;
  uint uStack_164;
  float afStack_160 [5];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  CVector3f CStack_140;
  uint uStack_134;
  float afStack_130 [4];
  float fStack_120;
  uint uStack_11c;
  float afStack_110 [3];
  float afStack_104 [3];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [3];
  uint uStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  uint uStack_c8;
  float fStack_bc;
  uint uStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [3];
  float afStack_8c [3];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  uint uStack_5c;
  uint uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  byte *puStack_40;
  float afStack_3c [2];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_3c[0] = param_2 * *(float *)&param_1->field_0xcdcc;
  pCStack_1c = (CMotionController *)&param_1->field_0x158;
LAB_005313e3:
  if (0.0 < afStack_3c[0]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_1c,afStack_3c);
    switch(iVar2) {
    case 100:
      iVar2 = *(int *)&param_1->field_0xcde4;
      iStack_18 = 1;
      if ((((iVar2 != 0) &&
           (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar2 == 0)) &&
          (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                             (*(int *)&param_1->field_0xcde4), iVar2 == 0)) &&
         (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xe8))
                            (*(int *)&param_1->field_0xcde4,param_1,0), iVar2 != 0)) {
        afStack_ec[2] = 0x40800000;
        afStack_ec[0] = 0.0;
        afStack_ec[1] = 0.0;
        core_actor_cpp_FUN_00408b80(param_1,afStack_130 + 0x11);
        fStack_14c = fStack_bc;
        afStack_160[(uint)bVar6 * -2 + 6] = afStack_dc[(uint)bVar6 * -2 + 9];
        afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        fVar11 = fStack_14c - *(float *)(*(int *)&param_1->field_0xcde4 + 0x20);
        fVar12 = fStack_144 - *(float *)(*(int *)&param_1->field_0xcde4 + 0x28);
        if ((float)_DAT_005d00a2 < SQRT(fVar12 * fVar12 + fVar11 * fVar11)) {
          iStack_18 = 0;
        }
        iVar2 = *(int *)&param_1->field_0xcde4;
        if (((ABS(fStack_148 - *(float *)(iVar2 + 0x24)) <= (float)_DAT_005d00aa) &&
            ((iStack_18 == 0 ||
             (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xec))(iVar2,param_1,0), iVar2 != 0))))
           && (iStack_18 != 0)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
      break;
    case 0x65:
      (**(code **)(*(int *)&param_1->field_0x154 + 0xf8))(param_1);
      break;
    case 0x66:
      if (*(int *)&param_1->field_0xcde4 != 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_254);
        fStack_250 = (float)core_actor_cpp_FUN_0040ce40(0x3f800000,0x40a00000);
        fStack_14 = fStack_250;
        (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x108))
                  (*(int *)&param_1->field_0xcde4,aSStack_254);
      }
      break;
    case 0x67:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"wing?.wav");
      break;
    case 0x68:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"sentinel-fall.wav");
      break;
    default:
      core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar2);
    }
    goto LAB_005313e3;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_1c);
  iVar2 = *(int *)(pSVar3 + 0x24);
  iVar4 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    if ((iVar2 == 10) || (iVar2 == 0xb)) {
      *(uint *)&param_1->field_0x3270 = 0x3f000000;
      switch(iVar2) {
      case 0:
        goto switchD_00531823_caseD_0;
      case 1:
        goto switchD_00531823_caseD_1;
      case 2:
        goto switchD_00531823_caseD_2;
      case 3:
        goto switchD_00531823_caseD_3;
      case 4:
        goto switchD_00531823_caseD_4;
      default:
        goto switchD_00531823_caseD_5;
      case 9:
        goto switchD_00531823_caseD_9;
      case 10:
        goto switchD_00531823_caseD_a;
      case 0xe:
      case 0xf:
        goto switchD_00531823_caseD_e;
      }
    }
    *(uint *)&param_1->field_0x3270 = 0x40000000;
    switch(iVar2) {
    case 0:
switchD_00531823_caseD_0:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xcde4;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,2,1);
        }
      }
      else {
        afStack_130[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        afStack_130[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_120 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_68 = afStack_130[2];
        afStack_dc[(uint)bVar6 * -2 + 0x1e] = afStack_130[(uint)bVar6 * -2 + 3];
        afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
             afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        fStack_74 = fStack_68;
        afStack_dc[(uint)bVar6 * -2 + 0x1b] = afStack_dc[(uint)bVar6 * -2 + 0x1e];
        afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
        fStack_1f4 = fStack_74;
        afStack_214[(uint)bVar6 * -2 + 9] = afStack_dc[(uint)bVar6 * -2 + 0x1b];
        afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
        fStack_24 = fStack_1ec * fStack_1ec + fStack_1f4 * fStack_1f4 + fStack_1f0 * fStack_1f0;
        if (SQRT(fStack_24) <= _DAT_005e3a14) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,2,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,3,1);
        }
      }
      break;
    case 1:
switchD_00531823_caseD_1:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if (*(int *)&param_1->field_0xcde4 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      break;
    case 2:
switchD_00531823_caseD_2:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      fVar11 = 0x40800000;
      pCStack_28 = (CMotionController *)&param_1->field_0x158;
      if (*(int *)&param_1->field_0xcde4 == 0) {
        iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,2,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_2c = 0x40800000;
        fVar12 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_188._0_4_ = 0;
        auStack_188._8_4_ = fVar11;
        pCVar10 = (CVector3f *)auStack_188;
        auStack_188._4_4_ = 0;
        pCVar5 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xcde4);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),pCVar5,pCVar10,
                           fVar12,max_distance);
        if (-1 < iVar2) {
          iVar2 = *(int *)&param_1->field_0xcde4;
          fStack_a4 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
          fStack_a0 = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
          fStack_9c = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
          fStack_218 = fStack_a4;
          afStack_214[(uint)bVar6 * -2] = afStack_dc[(uint)bVar6 * -2 + 0xf];
          afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
          fStack_34 = SQRT(afStack_214[1] * afStack_214[1] + fStack_218 * fStack_218);
          afStack_214[0] = 0.0;
          fStack_30 = fStack_34;
          if (_DAT_005e3a14 < fStack_34) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,3,1);
          }
          if ((fStack_30 <= fStack_2c) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
            iVar2 = *(int *)&param_1->field_0xcde4;
            fStack_1a0 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_19c = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_198 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_110[0] = fStack_1a0;
            afStack_130[(uint)bVar6 * -2 + 9] = afStack_1d8[(uint)bVar6 * -2 + 0xf];
            afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_1d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
            core_vecdir_cpp_FUN_00576250(afStack_130 + 8);
            uStack_e0 = uStack_1e8;
            afStack_dc[(uint)bVar6 * -2] = afStack_214[(uint)bVar6 * -2 + 0xc];
            afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
            fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                         (afStack_dc[0] - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005d009a) {
              iVar2 = core_actor_cpp_FUN_0040cf40(0.5);
              if (iVar2 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,10,1);
                *(uint *)&param_1[1].field_0x4 = 0x40a00000;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,4,1);
              }
              *(uint *)&param_1->field_0xcde0 = 0x3f800000;
            }
          }
          if (*(float *)&param_1->field_0xcddc < fStack_30) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,0,1);
          }
        }
      }
      break;
    case 3:
switchD_00531823_caseD_3:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      pCStack_20 = (CMotionController *)&param_1->field_0x158;
      if (*(int *)&param_1->field_0xcde4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0,1);
      }
      else {
        fVar12 = 0.17453292;
        fVar11 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_194._0_4_ = 0;
        auStack_194._8_4_ = 0x40800000;
        pCVar10 = (CVector3f *)auStack_194;
        auStack_194._4_4_ = 0;
        pCVar5 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xcde4);
        core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                  ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),pCVar5
                   ,pCVar10,fVar11,fVar12);
        iVar2 = *(int *)&param_1->field_0xcde4;
        fStack_1ac = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
        fStack_1a8 = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
        fStack_1a4 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
        afStack_1d8[2] = fStack_1ac;
        afStack_1d8[(uint)bVar6 * -2 + 3] = afStack_1d8[(uint)bVar6 * -2 + 0xc];
        afStack_1d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_1d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        if (_DAT_005e3a14 <=
            SQRT(fStack_1c8 * fStack_1c8 +
                 afStack_1d8[2] * afStack_1d8[2] + afStack_1d8[3] * afStack_1d8[3])) {
          iVar2 = core_actor_cpp_FUN_0040cf40(0.1);
          if (iVar2 != 0) {
            iVar2 = core_actor_cpp_FUN_0040cf40(0.5);
            if (iVar2 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0xe,1);
            }
          }
        }
        else {
          iVar2 = core_actor_cpp_FUN_0040cf40(0.5);
          if (iVar2 == 0) {
            iVar2 = core_actor_cpp_FUN_0040cf40(0.5);
            if (iVar2 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,4,1);
            }
          }
          else {
            iVar2 = core_actor_cpp_FUN_0040cf40(0.5);
            if (iVar2 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0xe,1);
            }
          }
        }
      }
      break;
    case 4:
switchD_00531823_caseD_4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_290);
      fStack_28c = (float)core_actor_cpp_FUN_0040ce40(0x40e00000,0x41700000);
      pCStack_25c = param_1;
      pCStack_258 = param_1;
      puStack_40 = &param_1->field_0xfd8;
      fStack_14 = fStack_28c;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,puStack_40 + _DAT_01ed7864 * 0x30,0x3f800000,aSStack_290);
      pfVar8 = afStack_130 + 0xb;
      afStack_104[0] = (float)uStack_b0;
      afStack_130[(uint)bVar6 * -2 + 0xc] = afStack_dc[(uint)bVar6 * -2 + 0xc];
      afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      core_actor_cpp_FUN_00408b80(param_1,pfVar8);
      pfVar8 = afStack_dc + 0x11;
      afStack_98[0] = (float)uStack_1b8;
      afStack_dc[(uint)bVar6 * -2 + 0x12] = afStack_1d8[(uint)bVar6 * -2 + 9];
      pCVar7 = param_1;
      afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_1d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      core_enemy_cpp_FUN_004893f0(pCVar7,pfVar8);
      fStack_28c = (float)core_actor_cpp_FUN_0040ce40(0x41700000,0x41f00000);
      pCStack_25c = param_1;
      pCStack_258 = param_1;
      fStack_14 = fStack_28c;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,puStack_40 + _DAT_01ed785c * 0x30,0x3f800000,aSStack_290);
      pfVar8 = afStack_dc + 0x14;
      afStack_8c[0] = (float)uStack_c8;
      afStack_dc[(uint)bVar6 * -2 + 0x15] = afStack_dc[(uint)bVar6 * -2 + 6];
      afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      core_actor_cpp_FUN_00408b80(param_1,pfVar8);
      puVar9 = &uStack_134;
      uStack_134 = uStack_17c;
      afStack_130[(uint)bVar6 * -2] = afStack_178[(uint)bVar6 * -2];
      pCVar7 = param_1;
      afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_enemy_cpp_FUN_004893f0(pCVar7,puVar9);
    default:
      break;
    case 9:
switchD_00531823_caseD_9:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
        puVar9 = &uStack_164;
        uStack_164 = uStack_11c;
        afStack_160[(uint)bVar6 * -2] = afStack_130[(uint)bVar6 * -2 + 6];
        afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        core_actor_cpp_FUN_00408b80(param_1,puVar9);
        blood_type = BLOOD_TYPE_RED;
        pCVar10 = &CStack_170;
        CStack_170._0_4_ = CStack_140._0_4_;
        *(uint *)((int)&CStack_170 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_140 + (uint)bVar6 * -8 + 4);
        this_ptr = g_CGorePtr;
        *(uint *)((int)&CStack_170 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_140 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_gore_cpp_FUN_004cec40(this_ptr,pCVar10,blood_type);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
      break;
    case 10:
switchD_00531823_caseD_a:
      fVar11 = *(float *)&param_1[1].field_0x4 - param_2;
      *(float *)&param_1[1].field_0x4 = fVar11;
      if (fVar11 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
switchD_00531823_caseD_e:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xcde4;
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      else {
        fStack_80 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_7c = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_78 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        afStack_160[2] = fStack_80;
        afStack_160[(uint)bVar6 * -2 + 3] = afStack_dc[(uint)bVar6 * -2 + 0x18];
        afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
        core_vecdir_cpp_FUN_00576250(afStack_160 + 2);
        uStack_5c = afStack_214[2];
        afStack_dc[(uint)bVar6 * -2 + 0x21] = afStack_214[(uint)bVar6 * -2 + 3];
        afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
             afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        *(uint *)&param_1->field_0x34 = uStack_58;
      }
    }
    goto switchD_00531823_caseD_5;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0053145a:
      iVar2 = 2;
    }
    else {
LAB_005317fe:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0053145a;
    if (uVar1 != 3) goto LAB_005317fe;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_00531823_caseD_5:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_1c4 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_1c0 = *(float *)&param_1->field_0x251c * param_2;
    fStack_1bc = *(float *)&param_1->field_0x2520 * param_2;
    fStack_200 = fStack_1c4;
    afStack_214[(uint)bVar6 * -2 + 6] = afStack_1d8[(uint)bVar6 * -2 + 6];
    afStack_214[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_1d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_f8 = fStack_200 + *(float *)&param_1->field_0x250c;
    fStack_f4 = fStack_1fc + *(float *)&param_1->field_0x2510;
    fStack_f0 = fStack_1f8 + *(float *)&param_1->field_0x2514;
    fStack_50 = fStack_f8;
    afStack_dc[(uint)bVar6 * -2 + 0x24] = afStack_130[(uint)bVar6 * -2 + 0xf];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
         afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    afStack_dc[2] = fStack_50 + *(float *)&param_1->field_0x249c;
    afStack_dc[3] = fStack_4c + *(float *)&param_1->field_0x24a0;
    fStack_cc = fStack_48 + *(float *)&param_1->field_0x24a4;
    fStack_1dc = afStack_dc[2];
    afStack_1d8[(uint)bVar6 * -2] = afStack_dc[(uint)bVar6 * -2 + 3];
    afStack_1d8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_1dc);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  return;
}
