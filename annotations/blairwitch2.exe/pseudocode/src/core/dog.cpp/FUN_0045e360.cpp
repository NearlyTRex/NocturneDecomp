// Name: core_dog.cpp_FUN_0045e360
// Address: 0045e360
// Address Range: [[0045e360, 0045eaa6]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_0045e360(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dog_cpp_FUN_0045e360(CEnemy *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  CEnemy *pCVar3;
  uint uVar4;
  CPathMap *path_map;
  byte bVar5;
  float afStackY_1104 [997];
  float *pfVar6;
  CVector3f *pCVar7;
  float fVar8;
  SDamageInfo *damage_info;
  uint *puVar9;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_158 [4];
  float fStack_154;
  CEnemy *pCStack_124;
  CEnemy *pCStack_120;
  float fStack_11c;
  float afStack_118 [5];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CVector3f CStack_ec;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  CVector3f CStack_c8;
  uint uStack_bc;
  float afStack_b8 [2];
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [2];
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [4];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f CStack_68;
  uint uStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float afStack_44 [6];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_0042a7a0((CCharacter *)param_1,param_2);
  core_charactr_cpp_FUN_00429420((CCharacter *)param_1,param_2,0);
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_24 = param_2 * *(float *)&param_1->field_0x10a60;
  while (0.0 < fStack_24) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&param_1->field_0x2b4,&fStack_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
  }
  iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  iVar2 = *(int *)(iVar2 + 0x24);
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  iStack_18 = iVar2;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  if (iVar2 == 2) {
    *(float *)&param_1->field_0x2598 = *(float *)&param_1->field_0x2598 * (float)_DAT_005d090c;
  }
  iVar2 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_18) {
    case 0:
      iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
      pCStack_1c = (CMotionController *)&param_1->field_0x2b4;
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        iVar2 = *(int *)&param_1->field_0x10a78;
        if (iVar2 != 0) {
          afStack_88[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_88[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_78 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_104 = afStack_88[2];
          afStack_118[(uint)bVar5 * -2 + 6] = afStack_88[(uint)bVar5 * -2 + 3];
          afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          fStack_2c = fStack_fc * fStack_fc + fStack_104 * fStack_104 + fStack_100 * fStack_100;
          fStack_28 = (float)(((int)fStack_2c >> 1) + _DAT_01caf5b4);
          if (fStack_28 < _DAT_005f5334) {
            iVar2 = 1;
          }
          else {
            iVar2 = 2;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,iVar2,1);
          iVar2 = core_sound_cpp_FUN_0055af70(0x0264B290,*(uint *)&param_1[1].field_0x8);
          if (iVar2 == 0) {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"dog5.wav")
            ;
            *(uint *)&param_1[1].field_0x8 = uVar4;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0x10a78;
      pCStack_20 = (CMotionController *)&param_1->field_0x2b4;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_00488970(param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
        }
      }
      else {
        afStack_dc[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
        afStack_dc[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
        fStack_cc = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
        fStack_f8 = afStack_dc[2];
        afStack_118[(uint)bVar5 * -2 + 9] = afStack_dc[(uint)bVar5 * -2 + 3];
        afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
             afStack_dc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        if ((_DAT_005f5334 <
             SQRT(fStack_f0 * fStack_f0 + fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4)) &&
           (iStack_18 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,2,1);
        }
        CStack_ec._8_4_ = 0x40400000;
        afStack_44[5] = (float)0x40400000;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        CStack_ec._0_4_ = 0;
        CStack_ec._4_4_ = 0;
        max_distance = 0.17453292;
        pCVar7 = &CStack_ec;
        fVar8 = 0.5;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,pCVar7,
                           fVar8,max_distance);
        if (iVar2 < 0) {
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
        }
        else if ((0 < iVar2) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
          if ((float)_DAT_005d0914 < fStack_14) {
            iVar2 = 3;
          }
          else {
            iVar2 = 4;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
          *(uint *)&param_1->field_0x10a74 = 0x40200000;
        }
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_158);
      fStack_154 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
      pCStack_124 = param_1;
      pCStack_120 = param_1;
      damage_info = aSStack_158;
      fVar8 = 0.7;
      fStack_14 = fStack_154;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,&param_1->field_0x1134 + *(int *)&param_1[1].field_0x4 * 0x30);
      pfVar6 = afStack_58 + 5;
      afStack_44[0] = afStack_118[2];
      afStack_58[(uint)bVar5 * -2 + 6] = afStack_118[(uint)bVar5 * -2 + 3];
      afStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_actor_cpp_FUN_00408d70(param_1,pfVar6);
      pCVar7 = &CStack_b0;
      CStack_b0._0_4_ = CStack_68._0_4_;
      *(uint *)((int)&CStack_b0 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_68 + (uint)bVar5 * -8 + 4);
      pCVar3 = param_1;
      *(uint *)((int)&CStack_b0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_68 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_enemy_cpp_FUN_00488110(pCVar3,pCVar7,fVar8,damage_info);
      iVar2 = core_sound_cpp_FUN_0055af70(0x0264B290,*(uint *)&param_1[1].field_0x8);
      if (iVar2 == 0) {
        uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"dog5.wav");
        *(uint *)&param_1[1].field_0x8 = uVar4;
      }
      break;
    case 7:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(&param_1->field_0x2b4,0);
        puVar9 = &uStack_bc;
        uStack_bc = uStack_5c;
        afStack_b8[(uint)bVar5 * -2] = afStack_58[(uint)bVar5 * -2];
        afStack_b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_actor_cpp_FUN_00408d70(param_1,puVar9);
        blood_type = BLOOD_TYPE_RED;
        CStack_c8._0_4_ = CStack_98._0_4_;
        *(uint *)((int)&CStack_c8 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_98 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&CStack_c8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_98 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_c8,blood_type);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
    }
    goto switchD_0045eaa0_caseD_5;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0045e482:
      iVar2 = 1;
    }
    else {
LAB_0045e65c:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0045e482;
    if (uVar1 != 3) goto LAB_0045e65c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_0045eaa0_caseD_5:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)&param_1->field_0x10a78;
    if ((iVar2 != 0) &&
       (pCVar3 = (CEnemy *)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0xfc))(iVar2), pCVar3 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
    }
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    afStack_58[2] = *(float *)&param_1->field_0x2588 * param_2;
    afStack_58[3] = *(float *)&param_1->field_0x258c * param_2;
    fStack_48 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_8c = afStack_58[2];
    afStack_88[(uint)bVar5 * -2] = afStack_58[(uint)bVar5 * -2 + 3];
    afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    fStack_74 = fStack_8c + *(float *)&param_1->field_0x257c;
    fStack_70 = afStack_88[0] + *(float *)&param_1->field_0x2580;
    fStack_6c = afStack_88[1] + *(float *)&param_1->field_0x2584;
    fStack_11c = fStack_74;
    afStack_118[(uint)bVar5 * -2] = afStack_88[(uint)bVar5 * -2 + 6];
    afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    fStack_a4 = fStack_11c + *(float *)&param_1->field_0x2508;
    afStack_a0[0] = afStack_118[0] + *(float *)&param_1->field_0x250c;
    afStack_a0[1] = afStack_118[1] + *(float *)&param_1->field_0x2510;
    fStack_e0 = fStack_a4;
    afStack_dc[(uint)bVar5 * -2] = afStack_a0[(uint)bVar5 * -2];
    afStack_dc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_e0);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
