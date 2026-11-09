// Name: core_gargoyle.cpp_FUN_004c5350
// Address: 004c5350
// Address Range: [[004c5350, 004c5e36]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004c5350(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gargoyle_cpp_FUN_004c5350(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  int iVar4;
  uint uVar5;
  CPathMap *pCVar6;
  byte bVar7;
  float afStackY_1128 [997];
  CEnemy *pCVar8;
  float *pfVar9;
  CVector3f *pCVar10;
  float fVar11;
  float fVar12;
  float max_distance;
  SDamageInfo aSStack_17c [4];
  float fStack_178;
  CEnemy *pCStack_148;
  CEnemy *pCStack_144;
  float fStack_140;
  float afStack_13c [4];
  float fStack_12c;
  uint uStack_128;
  float fStack_124;
  float afStack_11c [3];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  float fStack_f0;
  float afStack_ec [3];
  uint uStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  CVector3f CStack_80;
  uint uStack_74;
  float afStack_70 [5];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  byte auStack_44 [12];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar2 == 0) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&param_1->field_0x158);
    if (*(int *)(pSVar3 + 0x24) == 8) {
      return;
    }
    if (*(int *)(pSVar3 + 0x24) == 5) {
      return;
    }
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_38 = param_2 * *(float *)&param_1->field_0xcdcc;
  pCStack_1c = (CMotionController *)&param_1->field_0x158;
  while (0.0 < fStack_38) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_1c,&fStack_38);
    core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_1c);
  iVar2 = *(int *)(pSVar3 + 0x24);
  iStack_2c = iVar2;
  iVar4 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    switch(iVar2) {
    case 0:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = core_gargoyle_cpp_FUN_004c51a0(param_1);
      if (iVar2 == 0) {
        fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
        *(float *)&param_1[1].field_0x58 = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,5,1);
        iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x44);
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)&param_1[1].field_0x44 = uVar5;
        }
      }
      else if (*(int *)&param_1[1].field_0x54 == 0) {
        iVar2 = *(int *)&param_1->field_0xcde4;
        if (iVar2 == 0) {
          iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
          if (iVar2 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,1,1);
          }
        }
        else {
          fStack_104 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_100 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_fc = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_d4 = fStack_104;
          afStack_13c[(uint)bVar7 * -2 + 0x1b] = afStack_13c[(uint)bVar7 * -2 + 0xf];
          afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
               afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          fStack_34 = SQRT(fStack_cc * fStack_cc + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0);
          fStack_28 = fStack_34;
          if (fStack_34 < 0x40400000) {
            core_vecdir_cpp_FUN_00576250(afStack_13c + 0x1a);
            uStack_50 = uStack_e0;
            afStack_70[(uint)bVar7 * -2 + 9] = afStack_13c[(uint)bVar7 * -2 + 0x18];
            afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
            fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                         (fStack_4c - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005c3f98) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,3,1);
            }
          }
          if (fStack_28 < *(float *)&param_1->field_0xcddc) {
            this_ptr = &param_1->field_0x158;
            if (_DAT_005e0778 <= fStack_28) {
              iVar2 = core_actor_cpp_FUN_0040cf40(0.1);
              if (iVar2 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)this_ptr,2,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)this_ptr,4,1);
              }
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)this_ptr,1,1);
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = core_gargoyle_cpp_FUN_004c51a0(param_1);
      fVar11 = 0x40400000;
      pCStack_20 = (CMotionController *)&param_1->field_0x158;
      if (iVar2 == 0) {
        fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
        *(float *)&param_1[1].field_0x58 = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,5,1);
        iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x44);
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)&param_1[1].field_0x44 = uVar5;
        }
      }
      else if (*(int *)&param_1[1].field_0x54 == 0) {
        if (*(int *)&param_1->field_0xcde4 == 0) {
          iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,1,1);
          }
        }
        else {
          max_distance = 0.17453292;
          fVar12 = 0.5;
          *(uint *)&param_1->field_0x24a4 = 0;
          *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
          *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
          pCVar10 = (CVector3f *)auStack_44;
          auStack_44._0_4_ = 0;
          auStack_44._4_4_ = 0;
          auStack_44._8_4_ = fVar11;
          fStack_18 = fVar11;
          pCVar6 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xcde4);
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),pCVar6,pCVar10,
                             fVar12,max_distance);
          if (-1 < iVar2) {
            iVar2 = *(int *)&param_1->field_0xcde4;
            fStack_98 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
            fStack_94 = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
            fStack_90 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
            fStack_f8 = fStack_98;
            afStack_13c[(uint)bVar7 * -2 + 0x12] = afStack_ac[(uint)bVar7 * -2 + 6];
            afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                 afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            uStack_f4 = 0;
            fStack_30 = SQRT(fStack_f0 * fStack_f0 + fStack_f8 * fStack_f8);
            fStack_24 = fStack_30;
            if (_DAT_005e0778 < fStack_30) {
              iVar2 = core_actor_cpp_FUN_0040cf40(0.1);
              if (iVar2 == 0) {
                iVar2 = 2;
              }
              else {
                iVar2 = 4;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,iVar2,1);
            }
            if ((fStack_24 <= fStack_18) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
              iVar2 = *(int *)&param_1->field_0xcde4;
              afStack_13c[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
              afStack_13c[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
              fStack_12c = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
              afStack_70[2] = afStack_13c[2];
              afStack_70[(uint)bVar7 * -2 + 3] = afStack_13c[(uint)bVar7 * -2 + 3];
              afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                   afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              core_vecdir_cpp_FUN_00576250(afStack_70 + 2);
              uStack_128 = uStack_bc;
              afStack_13c[(uint)bVar7 * -2 + 6] = afStack_13c[(uint)bVar7 * -2 + 0x21];
              afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                   afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22];
              fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                           (fStack_124 - *(float *)&param_1->field_0x34);
              if (ABS(fStack_14) < (float)_DAT_005c3f98) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,3,1);
                *(uint *)&param_1->field_0xcde0 = 0x3f800000;
              }
            }
            if (*(float *)&param_1->field_0xcddc < fStack_24) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0,1);
            }
          }
        }
      }
      else {
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        fVar12 = 0.17453292;
        CStack_80._0_4_ = 0;
        CStack_80._4_4_ = 0;
        CStack_80._8_4_ = 0;
        pCVar10 = &CStack_80;
        fVar11 = 0.5;
        pCVar6 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1[1].field_0x3c + 0x154) + 0xc4))
                           (*(int *)&param_1[1].field_0x3c);
        core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                  ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1[1].field_0x3c + 0x20),pCVar6
                   ,pCVar10,fVar11,fVar12);
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_17c);
      fStack_178 = (float)core_actor_cpp_FUN_0040ce40(0x40400000,0x40a00000);
      pCStack_148 = param_1;
      pCStack_144 = param_1;
      fStack_14 = fStack_178;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&param_1->field_0xfd8 + _DAT_01d22cac * 0x30,0x3ecccccd,aSStack_17c);
      pfVar9 = afStack_13c + 0x14;
      afStack_ec[0] = (float)uStack_8c;
      afStack_13c[(uint)bVar7 * -2 + 0x15] = afStack_ac[(uint)bVar7 * -2 + 9];
      afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
           afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      core_actor_cpp_FUN_00408b80(param_1,pfVar9);
      pfVar9 = afStack_13c + 8;
      afStack_11c[0] = (float)uStack_74;
      afStack_13c[(uint)bVar7 * -2 + 9] = afStack_70[(uint)bVar7 * -2];
      pCVar8 = param_1;
      afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_enemy_cpp_FUN_004893f0(pCVar8,pfVar9);
      break;
    case 5:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = core_gargoyle_cpp_FUN_004c51a0(param_1);
      if ((iVar2 != 0) &&
         (fVar11 = *(float *)&param_1[1].field_0x58 - param_2,
         *(float *)&param_1[1].field_0x58 = fVar11, fVar11 < 0.0)) {
        *(uint *)&param_1[1].field_0x58 = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
        iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x44);
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"gargoyle-alive?.wav");
          *(uint *)&param_1[1].field_0x44 = uVar5;
        }
      }
    }
    goto switchD_004c5d74_caseD_4;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004c5463:
      iVar2 = 1;
    }
    else {
LAB_004c56ef:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004c5463;
    if (uVar1 != 3) goto LAB_004c56ef;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004c5d74_caseD_4:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_110 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_10c = *(float *)&param_1->field_0x251c * param_2;
    fStack_108 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_c8 = fStack_110;
    afStack_13c[(uint)bVar7 * -2 + 0x1e] = afStack_13c[(uint)bVar7 * -2 + 0xc];
    afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f] =
         afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    afStack_ac[2] = fStack_c8 + *(float *)&param_1->field_0x250c;
    afStack_ac[3] = fStack_c4 + *(float *)&param_1->field_0x2510;
    fStack_9c = fStack_c0 + *(float *)&param_1->field_0x2514;
    fStack_5c = afStack_ac[2];
    afStack_70[(uint)bVar7 * -2 + 6] = afStack_ac[(uint)bVar7 * -2 + 3];
    afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    fStack_140 = fStack_5c + *(float *)&param_1->field_0x249c;
    afStack_13c[0] = fStack_58 + *(float *)&param_1->field_0x24a0;
    afStack_13c[1] = fStack_54 + *(float *)&param_1->field_0x24a4;
    fStack_b0 = fStack_140;
    afStack_ac[(uint)bVar7 * -2] = afStack_13c[(uint)bVar7 * -2];
    afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_b0);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  if (iStack_2c == 5) {
    *(int *)&param_1[1].field_0x48 = *(int *)&param_1[1].field_0x30 << 8;
    *(int *)&param_1[1].field_0x4c = *(int *)&param_1[1].field_0x34 << 8;
    *(int *)&param_1[1].field_0x50 = *(int *)&param_1[1].field_0x38 << 8;
  }
  else {
    *(uint *)&param_1[1].field_0x4c = 0xffff;
    *(uint *)&param_1[1].field_0x50 = 0xffff;
    *(uint *)&param_1[1].field_0x48 = 0xffff;
  }
  if (*(int *)&param_1->field_0x108 < *(int *)&param_1[1].field_0x48) {
    iVar4 = *(int *)&param_1->field_0x108 + _DAT_01c5fad0;
    iVar2 = *(int *)&param_1[1].field_0x48;
    *(int *)&param_1->field_0x108 = iVar4;
    if (iVar2 < iVar4) {
      *(int *)&param_1->field_0x108 = iVar2;
    }
  }
  else if (*(int *)&param_1[1].field_0x48 < *(int *)&param_1->field_0x108) {
    iVar4 = *(int *)&param_1->field_0x108 - _DAT_01c5fad0;
    iVar2 = *(int *)&param_1[1].field_0x48;
    *(int *)&param_1->field_0x108 = iVar4;
    if (iVar4 < iVar2) {
      *(int *)&param_1->field_0x108 = iVar2;
    }
  }
  if (*(int *)&param_1->field_0x10c < *(int *)&param_1[1].field_0x4c) {
    iVar4 = *(int *)&param_1->field_0x10c + _DAT_01c5fad0;
    iVar2 = *(int *)&param_1[1].field_0x4c;
    *(int *)&param_1->field_0x10c = iVar4;
    if (iVar2 < iVar4) {
      *(int *)&param_1->field_0x10c = iVar2;
    }
  }
  else if (*(int *)&param_1[1].field_0x4c < *(int *)&param_1->field_0x10c) {
    iVar4 = *(int *)&param_1->field_0x10c - _DAT_01c5fad0;
    iVar2 = *(int *)&param_1[1].field_0x4c;
    *(int *)&param_1->field_0x10c = iVar4;
    if (iVar4 < iVar2) {
      *(int *)&param_1->field_0x10c = iVar2;
    }
  }
  if (*(int *)&param_1->field_0x110 < *(int *)&param_1[1].field_0x50) {
    iVar4 = *(int *)&param_1->field_0x110 + _DAT_01c5fad0;
    iVar2 = *(int *)&param_1[1].field_0x50;
    *(int *)&param_1->field_0x110 = iVar4;
    if (iVar2 < iVar4) {
      *(int *)&param_1->field_0x110 = iVar2;
      return;
    }
  }
  else if (*(int *)&param_1[1].field_0x50 < *(int *)&param_1->field_0x110) {
    iVar4 = *(int *)&param_1->field_0x110 - _DAT_01c5fad0;
    iVar2 = *(int *)&param_1[1].field_0x50;
    *(int *)&param_1->field_0x110 = iVar4;
    if (iVar4 < iVar2) {
      *(int *)&param_1->field_0x110 = iVar2;
      return;
    }
  }
  return;
}
