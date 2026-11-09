// Name: core_xform.cpp_FUN_00586500
// Address: 00586500
// Address Range: [[00586500, 00586e48]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_00586500(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_00586500(CEnemy *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  CEventList *this_ptr;
  int iVar3;
  SMotion *pSVar4;
  CEnemy *pCVar5;
  uint uVar6;
  CPathMap *path_map;
  byte bVar7;
  float afStackY_1108 [997];
  float *pfVar8;
  CGore *this_ptr_00;
  CVector3f *pCVar9;
  float min_distance;
  int iVar10;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_15c [4];
  float fStack_158;
  CEnemy *pCStack_128;
  CEnemy *pCStack_124;
  float fStack_120;
  float afStack_11c [5];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [2];
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [5];
  uint auStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  int iStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  core_charactr_cpp_FUN_00432330(param_1,param_2,*(int *)&param_1->field_0xcdd0 == 1);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_34 = param_2 * *(float *)&param_1->field_0xcdcc * *(float *)&param_1[1].field_0x20;
  while (0.0 < fStack_34) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,afStack_80 + 0x13);
    core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar3);
  }
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  iVar3 = *(int *)(pSVar4 + 0x24);
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  iStack_20 = iVar3;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  if (iVar3 == 8) {
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005d82cf;
  }
  iVar3 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    switch(iStack_20) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar3 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
      pCStack_24 = (CMotionController *)&param_1->field_0x158;
      if (iVar3 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar3 = *(int *)&param_1->field_0xcde4;
        if (iVar3 != 0) {
          fStack_9c = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_98[0] = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
          afStack_98[1] = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_e4 = fStack_9c;
          afStack_11c[(uint)bVar7 * -2 + 0xf] = afStack_98[(uint)bVar7 * -2];
          afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
               afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fStack_2c = fStack_dc * fStack_dc + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0;
          fStack_30 = (float)(((int)fStack_2c >> 1) + _DAT_01d1a0a4);
          if (fStack_30 < _DAT_005e65e8) {
            iVar10 = 1;
            iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
            iVar3 = iVar3 + 5;
          }
          else {
            iVar10 = 1;
            iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            iVar3 = iVar3 + 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,iVar3,iVar10);
          iVar3 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&param_1[1].field_0x1c);
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"dog5.wav")
            ;
            *(uint *)&param_1[1].field_0x1c = uVar6;
          }
        }
      }
      else {
        fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_24);
        if ((float)_DAT_005d82df < fStack_14) {
          iVar10 = 1;
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (pCStack_24,iVar3 + 5,iVar10);
        }
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar3 = *(int *)&param_1->field_0xcde4;
      if (iVar3 == 0) {
        iVar3 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        puVar1 = &param_1->field_0x158;
        if (iVar3 == 0) {
          iVar10 = 1;
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)puVar1,iVar3,iVar10);
        }
        else {
          fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
          if ((float)_DAT_005d82df < fStack_14) {
            iVar10 = 1;
            iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)puVar1,iVar3 + 5,iVar10);
          }
        }
        break;
      }
      fStack_fc = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
      fStack_f8 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
      fStack_f4 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
      fStack_120 = fStack_fc;
      afStack_11c[(uint)bVar7 * -2] = afStack_11c[(uint)bVar7 * -2 + 9];
      afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      fStack_28 = SQRT(afStack_11c[1] * afStack_11c[1] +
                       fStack_120 * fStack_120 + afStack_11c[0] * afStack_11c[0]);
      fStack_18 = fStack_28;
      if ((((_DAT_005e65e8 < fStack_28) && (iStack_20 == 5)) || (iStack_20 == 6)) ||
         (iStack_20 == 7)) {
        puVar1 = &param_1->field_0x158;
        if (*(float *)&param_1->field_0xcde0 <= (float)_DAT_005d82d7) {
          fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
          if ((float)_DAT_005d82df < fStack_14) {
            iVar10 = 1;
            iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            iVar3 = iVar3 + 8;
            goto LAB_00586c35;
          }
        }
        else {
          fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
          if ((float)_DAT_005d82df < fStack_14) {
            iVar10 = 1;
            iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
            iVar3 = iVar3 + 5;
LAB_00586c35:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)puVar1,iVar3,iVar10);
          }
        }
      }
      if (((_DAT_005d82e7 < fStack_28) && (fStack_28 < _DAT_005d82eb)) &&
         (iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,10), iVar3 == 5)) {
        iVar10 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,iVar3 + 9,iVar10);
        *(uint *)&param_1->field_0xcde0 = 0x40200000;
      }
      CStack_90._8_4_ = 0x40800000;
      max_distance = 0.5235988;
      uStack_1c = 0x40800000;
      min_distance = 1.5;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
      CStack_90._0_4_ = 0;
      pCVar9 = &CStack_90;
      CStack_90._4_4_ = 0;
      path_map = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xcde4);
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),
                         path_map,pCVar9,min_distance,max_distance);
      if (iVar3 < 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      else if ((0 < iVar3) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
        iVar10 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(2,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,iVar3 + 9,iVar10);
        *(uint *)&param_1->field_0xcde0 = 0x40200000;
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_15c);
      fStack_158 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000,0x41700000);
      pCStack_128 = param_1;
      pCStack_124 = param_1;
      fStack_14 = fStack_158;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x4 * 0x30,
                 0x3f333333,aSStack_15c);
      pfVar8 = afStack_11c + 2;
      afStack_11c[2] = (float)uStack_f0;
      afStack_11c[(uint)bVar7 * -2 + 3] = afStack_11c[(uint)bVar7 * -2 + 0xc];
      afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      core_actor_cpp_FUN_00408b80(param_1,pfVar8);
      pfVar8 = afStack_80 + 5;
      auStack_6c[0] = uStack_d8;
      afStack_80[(uint)bVar7 * -2 + 6] = afStack_11c[(uint)bVar7 * -2 + 0x12];
      pCVar5 = param_1;
      afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
      core_enemy_cpp_FUN_004893f0(pCVar5,pfVar8);
      iVar3 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&param_1[1].field_0x1c);
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"dog5.wav");
        *(uint *)&param_1[1].field_0x1c = uVar6;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
        pfVar8 = afStack_80 + 2;
        afStack_80[2] = (float)uStack_c0;
        afStack_80[(uint)bVar7 * -2 + 3] = afStack_11c[(uint)bVar7 * -2 + 0x18];
        afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
        core_actor_cpp_FUN_00408b80(param_1,pfVar8);
        blood_type = BLOOD_TYPE_RED;
        pCVar9 = &CStack_a8;
        CStack_a8._0_4_ = CStack_b4._0_4_;
        *(uint *)((int)&CStack_a8 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_b4 + (uint)bVar7 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_gore_cpp_FUN_004cec40(this_ptr_00,pCVar9,blood_type);
        this_ptr = 0x01C6E360;
        *(uint *)&param_1->field_0xcdd0 = 1;
        core_event_cpp_CEventList_executeCommands_FUN_0048c150(this_ptr,"YowDead");
      }
    }
    goto switchD_00586e42_caseD_4;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  puVar1 = &param_1->field_0x158;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
      if ((float)_DAT_005d82df < fStack_14) {
        iVar10 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        iVar3 = iVar3 + 5;
LAB_00586670:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,iVar3,iVar10);
      }
    }
    else {
LAB_0058685d:
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
      if ((float)_DAT_005d82df < fStack_14) {
        iVar10 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
        goto LAB_00586670;
      }
    }
  }
  else if (uVar2 < 3) {
    fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
    if ((float)_DAT_005d82df < fStack_14) {
      iVar10 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
      iVar3 = iVar3 + 8;
      goto LAB_00586670;
    }
  }
  else {
    if (uVar2 != 3) goto LAB_0058685d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0((CMotionController *)puVar1,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_00586e42_caseD_4:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar3 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)&param_1->field_0xcde4;
    if ((iVar3 != 0) &&
       (pCVar5 = (CEnemy *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), pCVar5 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_108 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_104 = *(float *)&param_1->field_0x251c * param_2;
    fStack_100 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_cc = fStack_108;
    afStack_11c[(uint)bVar7 * -2 + 0x15] = afStack_11c[(uint)bVar7 * -2 + 6];
    afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
         afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    fStack_48 = fStack_cc + *(float *)&param_1->field_0x250c;
    fStack_44 = fStack_c8 + *(float *)&param_1->field_0x2510;
    fStack_40 = fStack_c4 + *(float *)&param_1->field_0x2514;
    fStack_60 = fStack_48;
    afStack_80[(uint)bVar7 * -2 + 9] = afStack_80[(uint)bVar7 * -2 + 0xf];
    afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
    fStack_54 = fStack_60 + *(float *)&param_1->field_0x249c;
    fStack_50 = fStack_5c + *(float *)&param_1->field_0x24a0;
    fStack_4c = fStack_58 + *(float *)&param_1->field_0x24a4;
    fStack_84 = fStack_54;
    afStack_80[(uint)bVar7 * -2] = afStack_80[(uint)bVar7 * -2 + 0xc];
    afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_84);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  return;
}
