// Name: core_xform.cpp_FUN_005b8440
// Address: 005b8440
// Address Range: [[005b8440, 005b8440]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b8440(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_005b8440(CEnemy *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  CEventList *this_ptr;
  CSound *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  CEnemy *pCVar6;
  uint uVar7;
  CPathMap *path_map;
  byte bVar8;
  float afStackY_1108 [997];
  uint *puVar9;
  CGore *this_ptr_00;
  CVector3f *pCVar10;
  float fVar11;
  int iVar12;
  SDamageInfo *damage_info;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_15c [4];
  float fStack_158;
  CEnemy *pCStack_128;
  CEnemy *pCStack_124;
  float fStack_120;
  float afStack_11c [4];
  float fStack_10c;
  CVector3f CStack_108;
  uint uStack_fc;
  float afStack_f8 [2];
  byte auStack_f0 [8];
  float afStack_e8 [4];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint auStack_cc [3];
  uint uStack_c0;
  uint uStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [2];
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [2];
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  int iStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x30 * 4) == 0) ||
      (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x34 * 4) == 0)) &&
     (iVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar4 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,0x10,1);
  }
  core_charactr_cpp_FUN_00434790(param_1,param_2);
  core_charactr_cpp_FUN_00432f10(param_1,param_2,*(int *)&param_1->field_0xc1d4 == 1);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_2c = param_2 * *(float *)&param_1->field_0xc1d0 * *(float *)&param_1[1].field_0x4c;
  while (0.0 < fStack_2c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&param_1->field_0x158,&fStack_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar4);
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  iVar4 = *(int *)(pSVar5 + 0x24);
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  iStack_20 = iVar4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  if (iVar4 == 8) {
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)dRam005fa324;
  }
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    switch(iStack_20) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar4 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
      pCStack_24 = (CMotionController *)&param_1->field_0x158;
      if (iVar4 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar4 = *(int *)&param_1->field_0xc1e8;
        if (iVar4 != 0) {
          fStack_d8 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_d4 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_d0 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_120 = fStack_d8;
          afStack_11c[(uint)bVar8 * -2] = afStack_e8[(uint)bVar8 * -2 + 5];
          afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6];
          fStack_34 = afStack_11c[1] * afStack_11c[1] +
                      fStack_120 * fStack_120 + afStack_11c[0] * afStack_11c[0];
          fStack_30 = (float)(((int)fStack_34 >> 1) + _DAT_01cc804c);
          if (fStack_30 < _DAT_00608218) {
            iVar12 = 1;
            iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
            iVar4 = iVar4 + 5;
          }
          else {
            iVar12 = 1;
            iVar4 = core_actor_cpp_FUN_0040cc60(0,0);
            iVar4 = iVar4 + 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,iVar4,iVar12);
          iVar4 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&param_1[1].field_0x48);
          if (iVar4 == 0) {
            uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"dog-alert?.wav");
            *(uint *)&param_1[1].field_0x48 = uVar7;
          }
        }
      }
      else {
        fStack_14 = core_motion_cpp_FUN_00525020(pCStack_24);
        if ((float)_DAT_005fa334 < fStack_14) {
          iVar12 = 1;
          iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (pCStack_24,iVar4 + 5,iVar12);
        }
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar4 = core_actor_cpp_FUN_0040cd00(0.01);
      if ((iVar4 != 0) &&
         (iVar4 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&param_1[1].field_0x48),
         iVar4 == 0)) {
        uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"dog-alert?.wav");
        *(uint *)&param_1[1].field_0x48 = uVar7;
      }
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar4 = *(int *)&param_1->field_0xc1e8;
      if (iVar4 == 0) {
        iVar4 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        puVar1 = &param_1->field_0x158;
        if (iVar4 == 0) {
          iVar12 = 1;
          iVar4 = core_actor_cpp_FUN_0040cc60(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar1,iVar4,iVar12);
        }
        else {
          fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)puVar1);
          if ((float)_DAT_005fa334 < fStack_14) {
            iVar12 = 1;
            iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,iVar4 + 5,iVar12);
          }
        }
        break;
      }
      fStack_84 = *(float *)&param_1->field_0x20 - *(float *)(iVar4 + 0x20);
      afStack_80[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
      afStack_80[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
      afStack_11c[2] = fStack_84;
      afStack_11c[(uint)bVar8 * -2 + 3] = afStack_80[(uint)bVar8 * -2];
      afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      fStack_28 = SQRT(fStack_10c * fStack_10c +
                       afStack_11c[2] * afStack_11c[2] + afStack_11c[3] * afStack_11c[3]);
      fStack_18 = fStack_28;
      if ((((_DAT_00608218 < fStack_28) && (iStack_20 == 5)) || (iStack_20 == 6)) ||
         (iStack_20 == 7)) {
        puVar1 = &param_1->field_0x158;
        if (*(float *)&param_1->field_0xc1e4 <= (float)_DAT_005fa32c) {
          fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)puVar1);
          if ((float)_DAT_005fa334 < fStack_14) {
            iVar12 = 1;
            iVar4 = core_actor_cpp_FUN_0040cc60(0,0);
            iVar4 = iVar4 + 8;
            goto LAB_005b8bfc;
          }
        }
        else {
          fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)puVar1);
          if ((float)_DAT_005fa334 < fStack_14) {
            iVar12 = 1;
            iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
            iVar4 = iVar4 + 5;
LAB_005b8bfc:
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,iVar4,iVar12);
          }
        }
      }
      if (((_DAT_005fa33c < fStack_28) && (fStack_28 < _DAT_005fa340)) &&
         (iVar4 = core_actor_cpp_FUN_0040cc60(0,10), iVar4 == 5)) {
        iVar12 = 1;
        iVar4 = core_actor_cpp_FUN_0040cc60(0,1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,iVar4 + 9,iVar12);
        pCVar3 = 0x02C82A60;
        uVar2 = *(uint *)&param_1[1].field_0x48;
        *(uint *)&param_1->field_0xc1e4 = 0x40200000;
        iVar4 = core_sound_cpp_FUN_0057d9c0(pCVar3,uVar2);
        if (iVar4 == 0) {
          uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"dog-attack?.wav");
          *(uint *)&param_1[1].field_0x48 = uVar7;
        }
      }
      CStack_78._8_4_ = 0x40800000;
      max_distance = 0.5235988;
      uStack_1c = 0x40800000;
      fVar11 = 1.5;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
      CStack_78._0_4_ = 0;
      pCVar10 = &CStack_78;
      CStack_78._4_4_ = 0;
      path_map = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xc1e8);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),
                         path_map,pCVar10,fVar11,max_distance);
      if (iVar4 < 0) {
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      else if ((0 < iVar4) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
        iVar12 = 1;
        iVar4 = core_actor_cpp_FUN_0040cc60(2,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,iVar4 + 9,iVar12);
        pCVar3 = 0x02C82A60;
        uVar2 = *(uint *)&param_1[1].field_0x48;
        *(uint *)&param_1->field_0xc1e4 = 0x40200000;
        iVar4 = core_sound_cpp_FUN_0057d9c0(pCVar3,uVar2);
        if (iVar4 == 0) {
          uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"dog-attack?.wav");
          *(uint *)&param_1[1].field_0x48 = uVar7;
        }
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_15c);
      fStack_158 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
      pCStack_128 = param_1;
      pCStack_124 = param_1;
      damage_info = aSStack_15c;
      fVar11 = 0.7;
      fStack_14 = fStack_158;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x4 * 0x30);
      puVar9 = &uStack_fc;
      uStack_fc = uStack_c0;
      afStack_f8[(uint)bVar8 * -2] = afStack_e8[(uint)bVar8 * -2 + 0xb];
      afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xc];
      core_actor_cpp_FUN_00408b40(param_1,puVar9);
      pCVar10 = &CStack_90;
      CStack_90._0_4_ = CStack_108._0_4_;
      *(uint *)((int)&CStack_90 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + 4);
      pCVar6 = param_1;
      *(uint *)((int)&CStack_90 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(pCVar6,pCVar10,fVar11,damage_info);
      iVar4 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&param_1[1].field_0x48);
      if (iVar4 == 0) {
        uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"dog-attack?.wav");
        *(uint *)&param_1[1].field_0x48 = uVar7;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,0);
        puVar9 = auStack_cc;
        auStack_cc[0] = uStack_b4;
        afStack_e8[(uint)bVar8 * -2 + 8] = afStack_e8[(uint)bVar8 * -2 + 0xe];
        afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9] =
             afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xf];
        core_actor_cpp_FUN_00408b40(param_1,puVar9);
        blood_type = BLOOD_TYPE_RED;
        pCVar10 = &CStack_54;
        CStack_54._0_4_ = CStack_a8._0_4_;
        *(uint *)((int)&CStack_54 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_a8 + (uint)bVar8 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_a8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar10,blood_type);
        this_ptr = 0x01C51D80;
        *(uint *)&param_1->field_0xc1d4 = 1;
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70(this_ptr,"YowDead");
      }
    }
    goto LAB_005b8626;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  puVar1 = &param_1->field_0x158;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)puVar1);
      if ((float)_DAT_005fa334 < fStack_14) {
        iVar12 = 1;
        iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
        iVar4 = iVar4 + 5;
code_r0x005b8604:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,iVar4,iVar12);
      }
    }
    else {
code_r0x005b87f4:
      fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
      if ((float)_DAT_005fa334 < fStack_14) {
        iVar12 = 1;
        iVar4 = core_actor_cpp_FUN_0040cc60(0,3);
        goto code_r0x005b8604;
      }
    }
  }
  else if (uVar2 < 3) {
    fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)puVar1);
    if ((float)_DAT_005fa334 < fStack_14) {
      iVar12 = 1;
      iVar4 = core_actor_cpp_FUN_0040cc60(0,0);
      iVar4 = iVar4 + 8;
      goto code_r0x005b8604;
    }
  }
  else {
    if (uVar2 != 3) goto code_r0x005b87f4;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0((CMotionController *)puVar1,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_005b8626:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar4 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar4 != 0) {
    iVar4 = *(int *)&param_1->field_0xc1e8;
    if ((iVar4 != 0) &&
       (pCVar6 = (CEnemy *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4), pCVar6 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    afStack_e8[1] = *(float *)&param_1->field_0x2518 * param_2;
    afStack_e8[2] = *(float *)&param_1->field_0x251c * param_2;
    afStack_e8[3] = *(float *)&param_1->field_0x2520 * param_2;
    fStack_48 = afStack_e8[1];
    afStack_44[(uint)bVar8 * -2] = afStack_e8[(uint)bVar8 * -2 + 2];
    afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
    fStack_9c = fStack_48 + *(float *)&param_1->field_0x250c;
    afStack_98[0] = afStack_44[0] + *(float *)&param_1->field_0x2510;
    afStack_98[1] = afStack_44[1] + *(float *)&param_1->field_0x2514;
    fStack_6c = fStack_9c;
    afStack_68[(uint)bVar8 * -2] = afStack_98[(uint)bVar8 * -2];
    afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    afStack_68[2] = fStack_6c + *(float *)&param_1->field_0x249c;
    afStack_68[3] = afStack_68[0] + *(float *)&param_1->field_0x24a0;
    fStack_58 = afStack_68[1] + *(float *)&param_1->field_0x24a4;
    auStack_f0._0_4_ = afStack_68[2];
    *(float *)(auStack_f0 + (uint)bVar8 * -8 + 4) = afStack_68[(uint)bVar8 * -2 + 3];
    *(float *)(auStack_f0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)auStack_f0);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
