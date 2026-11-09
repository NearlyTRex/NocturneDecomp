// Name: core_smiley.cpp_FUN_0056c220
// Address: 0056c220
// Address Range: [[0056c220, 0056ccb6]]
// Convention: unknown
// Signature: void core_smiley_cpp_FUN_0056c220(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_smiley_cpp_FUN_0056c220(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  int iVar1;
  uint uVar2;
  SMotion *pSVar3;
  int iVar4;
  CPathMap *path_map;
  CEnemy *pCVar5;
  byte bVar6;
  float afStackY_115c [952];
  float *pfVar7;
  uint *puVar8;
  CVector3f *pCVar9;
  float fVar10;
  SDamageInfo *pSVar11;
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
  
  bVar6 = 0;
  fVar10 = *(float *)&param_1[1].field_0x3c - param_2;
  *(float *)&param_1[1].field_0x3c = fVar10;
  if (fVar10 < 0.0) {
    *(uint *)&param_1[1].field_0x3c = 0;
  }
  if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x30 * 4) == 0) &&
     (iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar1 == 0)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_264);
    uStack_234 = 0;
    pCStack_230 = param_1;
    pCStack_22c = param_1;
    uStack_260 = 0x461c3f9a;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_264);
  }
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_30[0] = param_2 * *(float *)&param_1->field_0xc1d0;
  this_ptr = &param_1->field_0x158;
  while (0.0 < afStack_30[0]) {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr,afStack_30);
    if (uVar2 < 0x66) {
      if (uVar2 == 0x65) {
        iVar1 = *(int *)&param_1->field_0xc1e8;
        if (iVar1 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,1,1);
        }
        else {
          iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xec))(iVar1,param_1,0);
          if (iVar1 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)this_ptr,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar2);
      }
    }
    else if (uVar2 < 0x67) {
      iVar1 = *(int *)&param_1->field_0xc1e8;
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0xf0))(iVar1);
      }
    }
    else if (uVar2 == 0x67) {
      iVar1 = *(int *)&param_1[1].field_0x34 + 1;
      *(int *)&param_1[1].field_0x34 = iVar1;
      if (2 < iVar1) {
        if (*(int *)&param_1->field_0xc1e8 == 0) {
          (**(code **)(iRam00000154 + 0xf0))(0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_228);
          uStack_1f8 = 4;
          (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x108))
                    (*(int *)&param_1->field_0xc1e8,aSStack_228);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar2);
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  pCStack_1c = (CMotionController *)&param_1->field_0x158;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_1c);
  iVar1 = *(int *)(pSVar3 + 0x24);
  iStack_24 = iVar1;
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    switch(iVar1) {
    case 1:
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"Capture");
      if (iVar1 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar1 = *(int *)&param_1->field_0xc1e8;
        if (iVar1 != 0) {
          fStack_84 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_80 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_7c = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_110[2] = fStack_84;
          afStack_110[(uint)bVar6 * -2 + 3] = afStack_e0[(uint)bVar6 * -2 + 0x18];
          afStack_110[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
          fStack_28 = SQRT(fStack_100 * fStack_100 +
                           afStack_110[2] * afStack_110[2] + afStack_110[3] * afStack_110[3]);
          fStack_18 = fStack_28;
          if (fStack_28 < 0x40200000 + 1.0) {
            core_vecdir_cpp_FUN_005a7520(afStack_110 + 2);
            uStack_144 = uStack_90;
            afStack_140[(uint)bVar6 * -2] = afStack_e0[(uint)bVar6 * -2 + 0x15];
            afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
            puStack_14 = (uint *)
                         core_actor_cpp_FUN_0040cd60
                                   (afStack_140[0] - *(float *)&param_1->field_0x34);
            if (ABS((float)puStack_14) < (float)_DAT_005f29f7) {
              *(uint *)&param_1[1].field_0x34 = 0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,9,1);
            }
          }
          if (fStack_28 < *(float *)&param_1[1].field_0x4) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,2,1);
          }
        }
      }
      break;
    case 2:
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"Capture");
      if (iVar1 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar1 = *(int *)&param_1->field_0xc1e8;
        if (iVar1 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
        }
        else {
          if (param_1 == *(CEnemy **)(iVar1 + 0x26fc)) {
            (**(code **)(*(int *)(iVar1 + 0x154) + 0xf0))(iVar1);
          }
          auStack_3c._8_4_ = 0x40200000;
          fStack_20 = 0x40200000;
          *(uint *)&param_1->field_0x24a4 = 0;
          *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
          *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
          auStack_3c._0_4_ = 0;
          auStack_3c._4_4_ = 0;
          max_distance = 0.17453292;
          pCVar9 = (CVector3f *)auStack_3c;
          fVar10 = 0.5;
          path_map = (CPathMap *)
                     (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                               (*(int *)&param_1->field_0xc1e8);
          iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),path_map,pCVar9,
                             fVar10,max_distance);
          if ((-1 < iVar1) && (0 < iVar1)) {
            iVar1 = *(int *)&param_1->field_0xc1e8;
            fStack_b4 = *(float *)(iVar1 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_b0 = *(float *)(iVar1 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_ac = *(float *)(iVar1 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_6c = fStack_b4;
            afStack_e0[(uint)bVar6 * -2 + 0x1e] = afStack_e0[(uint)bVar6 * -2 + 0xc];
            afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
                 afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
            if ((SQRT(fStack_64 * fStack_64 + fStack_6c * fStack_6c + fStack_68 * fStack_68) <
                 fStack_20 + 1.0) && (*(float *)(param_1 + 1) <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,6,1);
              *(uint *)(param_1 + 1) = 0x3f800000;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
      }
      break;
    case 6:
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        (**(code **)(iRam00000154 + 0xf0))(0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_1ec);
        puStack_1e8 = (uint *)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
        pSVar11 = aSStack_1ec;
        pCStack_1b8 = param_1;
        pCStack_1b4 = param_1;
        fVar10 = 1.0;
        puStack_14 = puStack_1e8;
        core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_02c5fce0 * 0x30);
        pfVar7 = afStack_110 + 5;
        afStack_fc[0] = (float)uStack_114;
        afStack_110[(uint)bVar6 * -2 + 6] = afStack_110[(uint)bVar6 * -2];
        afStack_110[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_110[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        core_actor_cpp_FUN_00408b40(param_1,pfVar7);
        pCVar9 = &CStack_f0;
        CStack_f0._0_4_ = CStack_174._0_4_;
        *(uint *)((int)&CStack_f0 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_174 + (uint)bVar6 * -8 + 4);
        pCVar5 = param_1;
        *(uint *)((int)&CStack_f0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_174 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_enemy_cpp_FUN_004a0770(pCVar5,pCVar9,fVar10,pSVar11);
      }
      break;
    case 8:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(pCStack_1c,0);
        pfVar7 = afStack_e0 + 5;
        afStack_cc[0] = afStack_140[2];
        afStack_e0[(uint)bVar6 * -2 + 6] = afStack_140[(uint)bVar6 * -2 + 3];
        afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_actor_cpp_FUN_00408b40(param_1,pfVar7);
        blood_type = BLOOD_TYPE_RED;
        CStack_150._0_4_ = CStack_48._0_4_;
        *(uint *)((int)&CStack_150 + (uint)bVar6 * -8 + 4) =
             *(uint *)(auStack_3c + (uint)bVar6 * -8 + -8);
        *(uint *)((int)&CStack_150 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)(auStack_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -4);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_150,blood_type);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
      break;
    case 9:
      iVar1 = *(int *)&param_1->field_0xc1e8;
      if (iVar1 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
      }
      else if (*(int *)(iVar1 + 0x26fc) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
      }
      else {
        iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
        if (iVar1 == 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_1b0);
          puStack_1ac = (uint *)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
          pSVar11 = aSStack_1b0;
          pCStack_17c = param_1;
          pCStack_178 = param_1;
          fVar10 = 1.0;
          puStack_14 = puStack_1ac;
          core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_02c5fce0 * 0x30);
          puVar8 = &uStack_54;
          uStack_54 = uStack_c0;
          afStack_50[(uint)bVar6 * -2] = afStack_e0[(uint)bVar6 * -2 + 9];
          afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
          core_actor_cpp_FUN_00408b40(param_1,puVar8);
          pCVar9 = &CStack_60;
          CStack_60._0_4_ = CStack_120._0_4_;
          *(uint *)((int)&CStack_60 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&CStack_120 + (uint)bVar6 * -8 + 4);
          pCVar5 = param_1;
          *(uint *)((int)&CStack_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&CStack_120 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_enemy_cpp_FUN_004a0770(pCVar5,pCVar9,fVar10,pSVar11);
        }
        else {
          (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf0))
                    (*(int *)&param_1->field_0xc1e8);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
        }
      }
      break;
    case 10:
      iVar1 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                        (*(int *)&param_1->field_0xc1e8);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf0))
                  (*(int *)&param_1->field_0xc1e8);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
      }
    }
    goto switchD_0056cb7d_caseD_3;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0056c4b9:
      iVar1 = 2;
    }
    else {
LAB_0056c5da:
      iVar1 = 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar1,1);
  }
  else {
    if (uVar2 < 3) goto LAB_0056c4b9;
    if (uVar2 != 3) goto LAB_0056c5da;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,1,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_0056cb7d_caseD_3:
  if (0.0 < *(float *)(param_1 + 1)) {
    *(float *)(param_1 + 1) = *(float *)(param_1 + 1) - param_2;
  }
  if (iStack_24 == 0xb) {
    puStack_14 = (uint *)&param_1->field_0x249c;
    core_actor_cpp_FUN_00408ac0(param_1,puStack_14);
    afStack_164[2] = fStack_78;
    afStack_164[(uint)bVar6 * -2 + 3] = afStack_e0[(uint)bVar6 * -2 + 0x1b];
    afStack_164[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + afStack_164[2];
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + afStack_164[3];
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_154;
    puStack_14[2] = 0;
    puStack_14[1] = puStack_14[2];
    *puStack_14 = puStack_14[1];
  }
  else {
    iVar1 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)&param_1->field_0xc1e8;
      if ((iVar1 != 0) &&
         (pCVar5 = (CEnemy *)(**(code **)(*(int *)(iVar1 + 0x154) + 0xf4))(iVar1), pCVar5 == param_1
         )) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
      }
      core_charactr_cpp_FUN_0042d700(param_1,param_2);
      fStack_e4 = *(float *)&param_1->field_0x2518 * param_2;
      afStack_e0[0] = *(float *)&param_1->field_0x251c * param_2;
      afStack_e0[1] = *(float *)&param_1->field_0x2520 * param_2;
      afStack_e0[2] = fStack_e4;
      afStack_e0[(uint)bVar6 * -2 + 3] = afStack_e0[(uint)bVar6 * -2];
      afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fStack_a8 = afStack_e0[2] + *(float *)&param_1->field_0x250c;
      fStack_a4 = afStack_e0[3] + *(float *)&param_1->field_0x2510;
      fStack_a0 = fStack_d0 + *(float *)&param_1->field_0x2514;
      fStack_168 = fStack_a8;
      afStack_164[(uint)bVar6 * -2] = afStack_e0[(uint)bVar6 * -2 + 0xf];
      afStack_164[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      fStack_9c = fStack_168 + *(float *)&param_1->field_0x249c;
      fStack_98 = afStack_164[0] + *(float *)&param_1->field_0x24a0;
      fStack_94 = afStack_164[1] + *(float *)&param_1->field_0x24a4;
      fStack_12c = fStack_9c;
      afStack_128[(uint)bVar6 * -2] = afStack_e0[(uint)bVar6 * -2 + 0x12];
      afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      *(uint *)&param_1->field_0x2514 = 0;
      *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
      core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_12c);
    }
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
