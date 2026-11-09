// Name: core_smiley.cpp_FUN_00549ba0
// Address: 00549ba0
// Address Range: [[00549ba0, 0054a636]]
// Convention: unknown
// Signature: void core_smiley_cpp_FUN_00549ba0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_smiley_cpp_FUN_00549ba0(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  int iVar1;
  uint uVar2;
  int iVar3;
  CPathMap *path_map;
  CEnemy *pCVar4;
  byte bVar5;
  float afStackY_115c [952];
  float *pfVar6;
  uint *puVar7;
  CVector3f *pCVar8;
  float fVar9;
  SDamageInfo *pSVar10;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_264 [4];
  uint uStack_260;
  uint uStack_234;
  CEnemy *pCStack_230;
  CEnemy *pCStack_22c;
  SDamageInfo aSStack_228 [48];
  uint uStack_1f8;
  SDamageInfo aSStack_1ec [4];
  uint *puStack_1e8;
  CEnemy *pCStack_1b8;
  CEnemy *pCStack_1b4;
  SDamageInfo aSStack_1b0 [4];
  uint *puStack_1ac;
  CEnemy *pCStack_17c;
  CEnemy *pCStack_178;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [4];
  float fStack_154;
  CVector3f CStack_150;
  uint uStack_144;
  float afStack_140 [5];
  float fStack_12c;
  float afStack_128 [2];
  CVector3f CStack_120;
  uint uStack_114;
  float afStack_110 [4];
  float fStack_100;
  float afStack_fc [3];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float afStack_cc [3];
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  uint uStack_54;
  float afStack_50 [2];
  CVector3f CStack_48;
  byte auStack_3c [12];
  float afStack_30 [2];
  float fStack_28;
  int iStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  uint *puStack_14;
  
  bVar5 = 0;
  fVar9 = *(float *)&param_1[1].field_0x3c - param_2;
  *(float *)&param_1[1].field_0x3c = fVar9;
  if (fVar9 < 0.0) {
    *(uint *)&param_1[1].field_0x3c = 0;
  }
  if ((*(int *)(&param_1->field_0x23f4 + *(int *)&param_1[1].field_0x30 * 4) == 0) &&
     (iVar1 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1), iVar1 == 0)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_264);
    uStack_234 = 0;
    pCStack_230 = param_1;
    pCStack_22c = param_1;
    uStack_260 = 0x461c3f9a;
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x110))(param_1,aSStack_264);
  }
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  afStack_30[0] = param_2 * *(float *)&param_1->field_0x10a60;
  this_ptr = &param_1->field_0x2b4;
  while (0.0 < afStack_30[0]) {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr,afStack_30);
    if (uVar2 < 0x66) {
      if (uVar2 == 0x65) {
        iVar1 = *(int *)&param_1->field_0x10a78;
        if (iVar1 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr,1,1);
        }
        else {
          iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xf4))(iVar1,param_1,0);
          if (iVar1 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)this_ptr,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar2);
      }
    }
    else if (uVar2 < 0x67) {
      iVar1 = *(int *)&param_1->field_0x10a78;
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xf8))(iVar1);
      }
    }
    else if (uVar2 == 0x67) {
      iVar1 = *(int *)&param_1[1].field_0x34 + 1;
      *(int *)&param_1[1].field_0x34 = iVar1;
      if (2 < iVar1) {
        if (*(int *)&param_1->field_0x10a78 == 0) {
          (**(code **)(iRam000002b0 + 0xf8))(0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_228);
          uStack_1f8 = 4;
          (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x110))
                    (*(int *)&param_1->field_0x10a78,aSStack_228);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar2);
    }
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  pCStack_1c = (CMotionController *)&param_1->field_0x2b4;
  iVar1 = core_motion_cpp_FUN_005035c0(pCStack_1c);
  iVar1 = *(int *)(iVar1 + 0x24);
  iStack_24 = iVar1;
  iVar3 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    switch(iVar1) {
    case 1:
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"Capture");
      if (iVar1 == 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        iVar1 = *(int *)&param_1->field_0x10a78;
        if (iVar1 != 0) {
          fStack_84 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_80 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_7c = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_110[2] = fStack_84;
          afStack_110[(uint)bVar5 * -2 + 3] = afStack_e0[(uint)bVar5 * -2 + 0x18];
          afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
          fStack_28 = SQRT(fStack_100 * fStack_100 +
                           afStack_110[2] * afStack_110[2] + afStack_110[3] * afStack_110[3]);
          fStack_18 = fStack_28;
          if (fStack_28 < 0x40200000 + 1.0) {
            core_vecdir_cpp_FUN_005838f0(afStack_110 + 2);
            uStack_144 = uStack_90;
            afStack_140[(uint)bVar5 * -2] = afStack_e0[(uint)bVar5 * -2 + 0x15];
            afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
            puStack_14 = (uint *)
                         core_actor_cpp_FUN_0040d0c0
                                   (afStack_140[0] - *(float *)&param_1->field_0x34);
            if (ABS((float)puStack_14) < (float)_DAT_005e77fd) {
              *(uint *)&param_1[1].field_0x34 = 0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,9,1);
            }
          }
          if (fStack_28 < *(float *)&param_1[1].field_0x4) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,2,1);
          }
        }
      }
      break;
    case 2:
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"Capture");
      if (iVar1 == 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        iVar1 = *(int *)&param_1->field_0x10a78;
        if (iVar1 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
        else {
          if (param_1 == *(CEnemy **)(iVar1 + 0x276c)) {
            (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xf8))(iVar1);
          }
          auStack_3c._8_4_ = 0x40200000;
          fStack_20 = 0x40200000;
          *(uint *)&param_1->field_0x2510 = 0;
          *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
          *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
          auStack_3c._0_4_ = 0;
          auStack_3c._4_4_ = 0;
          max_distance = 0.17453292;
          pCVar8 = (CVector3f *)auStack_3c;
          fVar9 = 0.5;
          path_map = (CPathMap *)
                     (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                               (*(int *)&param_1->field_0x10a78);
          iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,pCVar8,
                             fVar9,max_distance);
          if ((-1 < iVar1) && (0 < iVar1)) {
            iVar1 = *(int *)&param_1->field_0x10a78;
            fStack_b4 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_b0 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_ac = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_6c = fStack_b4;
            afStack_e0[(uint)bVar5 * -2 + 0x1e] = afStack_e0[(uint)bVar5 * -2 + 0xc];
            afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f] =
                 afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
            if ((SQRT(fStack_64 * fStack_64 + fStack_6c * fStack_6c + fStack_68 * fStack_68) <
                 fStack_20 + 1.0) && (*(float *)(param_1 + 1) <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,6,1);
              *(uint *)(param_1 + 1) = 0x3f800000;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      break;
    case 6:
      if (*(int *)&param_1->field_0x10a78 == 0) {
        (**(code **)(iRam000002b0 + 0xf8))(0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1ec);
        puStack_1e8 = (uint *)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
        pSVar10 = aSStack_1ec;
        pCStack_1b8 = param_1;
        pCStack_1b4 = param_1;
        fVar9 = 1.0;
        puStack_14 = puStack_1e8;
        core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_02628618 * 0x30);
        pfVar6 = afStack_110 + 5;
        afStack_fc[0] = (float)uStack_114;
        afStack_110[(uint)bVar5 * -2 + 6] = afStack_110[(uint)bVar5 * -2];
        afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
             afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_actor_cpp_FUN_00408d70(param_1,pfVar6);
        pCVar8 = &CStack_f0;
        CStack_f0._0_4_ = CStack_174._0_4_;
        *(uint *)((int)&CStack_f0 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_174 + (uint)bVar5 * -8 + 4);
        pCVar4 = param_1;
        *(uint *)((int)&CStack_f0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_174 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_enemy_cpp_FUN_00488110(pCVar4,pCVar8,fVar9,pSVar10);
      }
      break;
    case 8:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(pCStack_1c,0);
        pfVar6 = afStack_e0 + 5;
        afStack_cc[0] = afStack_140[2];
        afStack_e0[(uint)bVar5 * -2 + 6] = afStack_140[(uint)bVar5 * -2 + 3];
        afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
             afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        core_actor_cpp_FUN_00408d70(param_1,pfVar6);
        blood_type = BLOOD_TYPE_RED;
        CStack_150._0_4_ = CStack_48._0_4_;
        *(uint *)((int)&CStack_150 + (uint)bVar5 * -8 + 4) =
             *(uint *)(auStack_3c + (uint)bVar5 * -8 + -8);
        *(uint *)((int)&CStack_150 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)(auStack_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_150,blood_type);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
      break;
    case 9:
      iVar1 = *(int *)&param_1->field_0x10a78;
      if (iVar1 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      else if (*(int *)(iVar1 + 0x276c) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      else {
        iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
        if (iVar1 == 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1b0);
          puStack_1ac = (uint *)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
          pSVar10 = aSStack_1b0;
          pCStack_17c = param_1;
          pCStack_178 = param_1;
          fVar9 = 1.0;
          puStack_14 = puStack_1ac;
          core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_02628618 * 0x30);
          puVar7 = &uStack_54;
          uStack_54 = uStack_c0;
          afStack_50[(uint)bVar5 * -2] = afStack_e0[(uint)bVar5 * -2 + 9];
          afStack_50[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          core_actor_cpp_FUN_00408d70(param_1,puVar7);
          pCVar8 = &CStack_60;
          CStack_60._0_4_ = CStack_120._0_4_;
          *(uint *)((int)&CStack_60 + (uint)bVar5 * -8 + 4) =
               *(uint *)((int)&CStack_120 + (uint)bVar5 * -8 + 4);
          pCVar4 = param_1;
          *(uint *)((int)&CStack_60 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               *(uint *)((int)&CStack_120 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          core_enemy_cpp_FUN_00488110(pCVar4,pCVar8,fVar9,pSVar10);
        }
        else {
          (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf8))
                    (*(int *)&param_1->field_0x10a78);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
      }
      break;
    case 10:
      iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))
                        (*(int *)&param_1->field_0x10a78);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf8))
                  (*(int *)&param_1->field_0x10a78);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
    }
    goto switchD_0054a4fd_caseD_3;
  }
  uVar2 = *(uint *)&param_1->field_0x27ac;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_00549e39:
      iVar1 = 2;
    }
    else {
LAB_00549f5a:
      iVar1 = 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar1,1);
  }
  else {
    if (uVar2 < 3) goto LAB_00549e39;
    if (uVar2 != 3) goto LAB_00549f5a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,1,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_0054a4fd_caseD_3:
  if (0.0 < *(float *)(param_1 + 1)) {
    *(float *)(param_1 + 1) = *(float *)(param_1 + 1) - param_2;
  }
  if (iStack_24 == 0xb) {
    puStack_14 = (uint *)&param_1->field_0x2508;
    core_actor_cpp_FUN_00408cf0(param_1,puStack_14);
    afStack_164[2] = fStack_78;
    afStack_164[(uint)bVar5 * -2 + 3] = afStack_e0[(uint)bVar5 * -2 + 0x1b];
    afStack_164[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + afStack_164[2];
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + afStack_164[3];
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_154;
    puStack_14[2] = 0;
    puStack_14[1] = puStack_14[2];
    *puStack_14 = puStack_14[1];
  }
  else {
    iVar1 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)&param_1->field_0x10a78;
      if ((iVar1 != 0) &&
         (pCVar4 = (CEnemy *)(**(code **)(*(int *)(iVar1 + 0x2b0) + 0xfc))(iVar1), pCVar4 == param_1
         )) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
      }
      core_charactr_cpp_FUN_00423a10(param_1,param_2);
      fStack_e4 = *(float *)&param_1->field_0x2588 * param_2;
      afStack_e0[0] = *(float *)&param_1->field_0x258c * param_2;
      afStack_e0[1] = *(float *)&param_1->field_0x2590 * param_2;
      afStack_e0[2] = fStack_e4;
      afStack_e0[(uint)bVar5 * -2 + 3] = afStack_e0[(uint)bVar5 * -2];
      afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fStack_a8 = afStack_e0[2] + *(float *)&param_1->field_0x257c;
      fStack_a4 = afStack_e0[3] + *(float *)&param_1->field_0x2580;
      fStack_a0 = fStack_d0 + *(float *)&param_1->field_0x2584;
      fStack_168 = fStack_a8;
      afStack_164[(uint)bVar5 * -2] = afStack_e0[(uint)bVar5 * -2 + 0xf];
      afStack_164[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
      fStack_9c = fStack_168 + *(float *)&param_1->field_0x2508;
      fStack_98 = afStack_164[0] + *(float *)&param_1->field_0x250c;
      fStack_94 = afStack_164[1] + *(float *)&param_1->field_0x2510;
      fStack_12c = fStack_9c;
      afStack_128[(uint)bVar5 * -2] = afStack_e0[(uint)bVar5 * -2 + 0x12];
      afStack_128[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
      *(uint *)&param_1->field_0x2584 = 0;
      *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
      *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
      *(uint *)&param_1->field_0x2510 = 0;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x2510;
      core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_12c);
    }
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
