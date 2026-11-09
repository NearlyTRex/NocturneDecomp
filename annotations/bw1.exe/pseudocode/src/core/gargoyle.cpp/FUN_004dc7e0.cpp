// Name: core_gargoyle.cpp_FUN_004dc7e0
// Address: 004dc7e0
// Address Range: [[004dc7e0, 004dd2bf]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004dc7e0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gargoyle_cpp_FUN_004dc7e0(CEnemy *param_1,float param_2)

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
  CEnemy *this_ptr_00;
  float *pfVar8;
  CVector3f *pCVar9;
  float fVar10;
  float fVar11;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_17c [4];
  float fStack_178;
  CEnemy *pCStack_148;
  CEnemy *pCStack_144;
  float fStack_140;
  float afStack_13c [5];
  CVector3f CStack_128;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  CVector3f CStack_104;
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  float fStack_ac;
  float fStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  byte auStack_80 [12];
  float fStack_74;
  float afStack_70 [5];
  uint uStack_5c;
  float fStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
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
  fStack_34 = param_2 * *(float *)&param_1->field_0xc1d0;
  pCStack_18 = (CMotionController *)&param_1->field_0x158;
  while (0.0 < fStack_34) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_18,afStack_70 + 0xf);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_18);
  iVar2 = *(int *)(pSVar3 + 0x24);
  iStack_2c = iVar2;
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    switch(iVar2) {
    case 0:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = core_gargoyle_cpp_FUN_004dc630(param_1);
      if (iVar2 == 0) {
        fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0,0x3f800000);
        *(float *)&param_1[1].field_0x58 = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,5,1);
        iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x44);
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)&param_1[1].field_0x44 = uVar5;
        }
      }
      else if (*(int *)&param_1[1].field_0x54 == 0) {
        iVar2 = *(int *)&param_1->field_0xc1e8;
        if (iVar2 == 0) {
          iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
          if (iVar2 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,1,1);
          }
        }
        else {
          afStack_118[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_118[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_108 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_44 = afStack_118[2];
          afStack_70[(uint)bVar7 * -2 + 0xc] = afStack_118[(uint)bVar7 * -2 + 3];
          afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
               afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_38 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40);
          fStack_28 = fStack_38;
          if (fStack_38 < 0x40400000) {
            core_vecdir_cpp_FUN_005a7520(afStack_70 + 0xb);
            uStack_b0 = uStack_bc;
            afStack_d0[(uint)bVar7 * -2 + 9] = afStack_d0[(uint)bVar7 * -2 + 6];
            afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                         (fStack_ac - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005e398c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,3,1);
            }
          }
          if (fStack_28 < *(float *)&param_1->field_0xc1e0) {
            this_ptr = &param_1->field_0x158;
            if (_DAT_00601008 <= fStack_28) {
              iVar2 = core_actor_cpp_FUN_0040cd00(0.1);
              if (iVar2 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)this_ptr,2,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)this_ptr,4,1);
              }
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)this_ptr,1,1);
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = core_gargoyle_cpp_FUN_004dc630(param_1);
      fVar10 = 0x40400000;
      pCStack_1c = (CMotionController *)&param_1->field_0x158;
      if (iVar2 == 0) {
        fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0,0x3f800000);
        *(float *)&param_1[1].field_0x58 = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,5,1);
        iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x44);
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)&param_1[1].field_0x44 = uVar5;
        }
      }
      else if (*(int *)&param_1[1].field_0x54 == 0) {
        if (*(int *)&param_1->field_0xc1e8 == 0) {
          iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
          }
        }
        else {
          max_distance = 0.17453292;
          fVar11 = 0.5;
          *(uint *)&param_1->field_0x24a4 = 0;
          *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
          *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
          pCVar9 = (CVector3f *)auStack_80;
          auStack_80._0_4_ = 0;
          auStack_80._4_4_ = 0;
          auStack_80._8_4_ = fVar10;
          fStack_20 = fVar10;
          pCVar6 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xc1e8);
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar6,pCVar9,
                             fVar11,max_distance);
          if (-1 < iVar2) {
            iVar2 = *(int *)&param_1->field_0xc1e8;
            fStack_d4 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
            afStack_d0[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
            afStack_d0[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
            fStack_50 = fStack_d4;
            afStack_70[(uint)bVar7 * -2 + 9] = afStack_d0[(uint)bVar7 * -2];
            afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            uStack_4c = 0;
            fStack_30 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50);
            fStack_24 = fStack_30;
            if (_DAT_00601008 < fStack_30) {
              iVar2 = core_actor_cpp_FUN_0040cd00(0.1);
              if (iVar2 == 0) {
                iVar2 = 2;
              }
              else {
                iVar2 = 4;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,iVar2,1);
            }
            if ((fStack_24 <= fStack_20) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
              iVar2 = *(int *)&param_1->field_0xc1e8;
              fStack_140 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
              afStack_13c[0] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
              afStack_13c[1] = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
              fStack_74 = fStack_140;
              afStack_70[(uint)bVar7 * -2] = afStack_13c[(uint)bVar7 * -2];
              afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                   afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
              core_vecdir_cpp_FUN_005a7520(&fStack_74);
              afStack_70[2] = (float)uStack_5c;
              afStack_70[(uint)bVar7 * -2 + 3] = afStack_70[(uint)bVar7 * -2 + 6];
              afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                   afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
              fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                           (afStack_70[3] - *(float *)&param_1->field_0x34);
              if (ABS(fStack_14) < (float)_DAT_005e398c) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,3,1);
                *(uint *)&param_1->field_0xc1e4 = 0x3f800000;
              }
            }
            if (*(float *)&param_1->field_0xc1e0 < fStack_24) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,0,1);
            }
          }
        }
      }
      else {
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        fVar11 = 0.17453292;
        CStack_104._0_4_ = 0;
        CStack_104._4_4_ = 0;
        CStack_104._8_4_ = 0;
        pCVar9 = &CStack_104;
        fVar10 = 0.5;
        pCVar6 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1[1].field_0x3c + 0x154) + 0xc4))
                           (*(int *)&param_1[1].field_0x3c);
        core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                  ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1[1].field_0x3c + 0x20),pCVar6
                   ,pCVar9,fVar10,fVar11);
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_17c);
      fStack_178 = (float)core_actor_cpp_FUN_0040cc00(0x40400000,0x40a00000);
      damage_info = aSStack_17c;
      pCStack_148 = param_1;
      pCStack_144 = param_1;
      fVar10 = 0.4;
      fStack_14 = fStack_178;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01cd0ca4 * 0x30);
      pfVar8 = afStack_13c + 2;
      afStack_13c[2] = (float)uStack_f8;
      afStack_13c[(uint)bVar7 * -2 + 3] = afStack_f4[(uint)bVar7 * -2];
      afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1,pfVar8);
      pCVar9 = &CStack_128;
      CStack_128._0_4_ = CStack_e0._0_4_;
      *(uint *)((int)&CStack_128 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_e0 + (uint)bVar7 * -8 + 4);
      this_ptr_00 = param_1;
      *(uint *)((int)&CStack_128 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_e0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(this_ptr_00,pCVar9,fVar10,damage_info);
      break;
    case 5:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = core_gargoyle_cpp_FUN_004dc630(param_1);
      if ((iVar2 != 0) &&
         (fVar10 = *(float *)&param_1[1].field_0x58 - param_2,
         *(float *)&param_1[1].field_0x58 = fVar10, fVar10 < 0.0)) {
        *(uint *)&param_1[1].field_0x58 = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,0,1);
        iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x44);
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"gargoyle-alive?.wav");
          *(uint *)&param_1[1].field_0x44 = uVar5;
        }
      }
    }
    goto switchD_004dd1fd_caseD_4;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004dc8ec:
      iVar2 = 1;
    }
    else {
LAB_004dcb6f:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004dc8ec;
    if (uVar1 != 3) goto LAB_004dcb6f;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004dd1fd_caseD_4:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_11c = *(float *)&param_1->field_0x2518 * param_2;
    afStack_118[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_118[1] = *(float *)&param_1->field_0x2520 * param_2;
    afStack_f4[2] = fStack_11c;
    afStack_f4[(uint)bVar7 * -2 + 3] = afStack_118[(uint)bVar7 * -2];
    afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_8c = afStack_f4[2] + *(float *)&param_1->field_0x250c;
    fStack_88 = afStack_f4[3] + *(float *)&param_1->field_0x2510;
    fStack_84 = fStack_e4 + *(float *)&param_1->field_0x2514;
    afStack_d0[2] = fStack_8c;
    afStack_d0[(uint)bVar7 * -2 + 3] = afStack_a0[(uint)bVar7 * -2 + 6];
    afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    afStack_a0[2] = afStack_d0[2] + *(float *)&param_1->field_0x249c;
    afStack_a0[3] = afStack_d0[3] + *(float *)&param_1->field_0x24a0;
    fStack_90 = fStack_c0 + *(float *)&param_1->field_0x24a4;
    fStack_a4 = afStack_a0[2];
    afStack_a0[(uint)bVar7 * -2] = afStack_a0[(uint)bVar7 * -2 + 3];
    afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_a4);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
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
    iVar4 = *(int *)&param_1->field_0x108 + _DAT_01c43530;
    iVar2 = *(int *)&param_1[1].field_0x48;
    *(int *)&param_1->field_0x108 = iVar4;
    if (iVar2 < iVar4) {
      *(int *)&param_1->field_0x108 = iVar2;
    }
  }
  else if (*(int *)&param_1[1].field_0x48 < *(int *)&param_1->field_0x108) {
    iVar4 = *(int *)&param_1->field_0x108 - _DAT_01c43530;
    iVar2 = *(int *)&param_1[1].field_0x48;
    *(int *)&param_1->field_0x108 = iVar4;
    if (iVar4 < iVar2) {
      *(int *)&param_1->field_0x108 = iVar2;
    }
  }
  if (*(int *)&param_1->field_0x10c < *(int *)&param_1[1].field_0x4c) {
    iVar4 = *(int *)&param_1->field_0x10c + _DAT_01c43530;
    iVar2 = *(int *)&param_1[1].field_0x4c;
    *(int *)&param_1->field_0x10c = iVar4;
    if (iVar2 < iVar4) {
      *(int *)&param_1->field_0x10c = iVar2;
    }
  }
  else if (*(int *)&param_1[1].field_0x4c < *(int *)&param_1->field_0x10c) {
    iVar4 = *(int *)&param_1->field_0x10c - _DAT_01c43530;
    iVar2 = *(int *)&param_1[1].field_0x4c;
    *(int *)&param_1->field_0x10c = iVar4;
    if (iVar4 < iVar2) {
      *(int *)&param_1->field_0x10c = iVar2;
    }
  }
  if (*(int *)&param_1->field_0x110 < *(int *)&param_1[1].field_0x50) {
    iVar4 = *(int *)&param_1->field_0x110 + _DAT_01c43530;
    iVar2 = *(int *)&param_1[1].field_0x50;
    *(int *)&param_1->field_0x110 = iVar4;
    if (iVar2 < iVar4) {
      *(int *)&param_1->field_0x110 = iVar2;
      return;
    }
  }
  else if (*(int *)&param_1[1].field_0x50 < *(int *)&param_1->field_0x110) {
    iVar4 = *(int *)&param_1->field_0x110 - _DAT_01c43530;
    iVar2 = *(int *)&param_1[1].field_0x50;
    *(int *)&param_1->field_0x110 = iVar4;
    if (iVar4 < iVar2) {
      *(int *)&param_1->field_0x110 = iVar2;
      return;
    }
  }
  return;
}
