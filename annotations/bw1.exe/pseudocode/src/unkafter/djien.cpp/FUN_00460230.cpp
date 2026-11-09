// Name: unkafter_djien.cpp_FUN_00460230
// Address: 00460230
// Address Range: [[00460230, 0046095e]]
// Convention: unknown
// Signature: void unkafter_djien_cpp_FUN_00460230(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_djien_cpp_FUN_00460230(CCharacter *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  uint uVar2;
  CConsole *pCVar3;
  CSound *this_ptr_00;
  int iVar4;
  SMotion *pSVar5;
  uint uVar6;
  int iVar7;
  CPathMap *path_map;
  byte bVar8;
  float afStackY_1078 [1012];
  CVector3f *direction;
  float fVar9;
  float max_distance;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [4];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_24 = param_2 * *(float *)(param_1 + 1) * *(float *)&param_1[1].field_0xfc;
  this_ptr = &param_1->field_0x158;
  while (0.0 < fStack_24) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr,afStack_74 + 0x14);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,iVar4);
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr);
  fVar9 = param_2 * *(float *)(param_1 + 1) * _DAT_005d8d68;
  uVar1 = *(uint *)(pSVar5 + 0x24);
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,fVar9);
  iVar4 = core_charactr_cpp_FUN_00432240(param_1,param_2);
  if (iVar4 == 0) {
    if (*(int *)&param_1[1].field_0x120 != 0) {
      *(uint *)&param_1[1].field_0x18 = 0;
      *(uint *)&param_1[1].field_0x7f4 = 0;
      core_charactr_cpp_FUN_00431cc0
                (param_1,*(uint *)&param_1[1].field_0x120,0x3f800000,0x41000000,
                 &param_1[1].field_0x124);
      uVar2 = *(uint *)&param_1[1].field_0x124;
      if (uVar2 == 0) {
LAB_004605ea:
        *(uint *)&param_1[1].field_0x120 = 0;
        *(uint *)&param_1[1].field_0x7f4 = 0x40800000;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0x12,1);
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: reached dest - going to protect\n");
      }
      else if (uVar2 < 2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,6,1);
      }
      else {
        if (uVar2 != 2) goto LAB_004605ea;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,7,1);
      }
    }
    this_ptr_00 = 0x02C82A60;
    if ((uVar1 < 3) || (uVar1 < 4)) {
      fVar9 = *(float *)&param_1[1].field_0x7f4 - param_2;
      *(uint *)&param_1[1].field_0x7f0 = 0;
      *(float *)&param_1[1].field_0x7f4 = fVar9;
      pCVar3 = g_CConsolePtr;
      if (fVar9 <= 0.0) {
        *(uint *)&param_1[1].field_0x7f4 = 0;
        engine_console_cpp_FUN_00445430(pCVar3,"DJIEN: walk waited long enough - going home\n");
        uVar6 = core_charactr_cpp_FUN_00435380(param_1,"DjienHome");
        *(uint *)&param_1[1].field_0x120 = uVar6;
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 == 5) {
        *(uint *)&param_1[1].field_0x7f0 = 1;
        iVar4 = core_sound_cpp_FUN_0057d9c0(this_ptr_00,*(uint *)&param_1[1].field_0xf8);
        if (iVar4 == 0) {
          uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"djien_awake.wav @ 4");
          *(uint *)&param_1[1].field_0xf8 = uVar6;
        }
      }
    }
    else if ((uVar1 < 7) || (uVar1 < 8)) {
      iVar4 = *(int *)&param_1->field_0x154;
      *(uint *)&param_1[1].field_0x7f0 = 1;
      (**(code **)(iVar4 + 0x150))(param_1);
      iVar4 = *(int *)&param_1[1].field_0x120;
      if (iVar4 == 0) {
        iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,"DjienInZone");
        if (iVar7 == 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: got outside of box - hesitating\n");
          unkafter_djien_cpp_FUN_00460960(param_1);
        }
        else {
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          uVar6 = 0x41000000;
          if (*(int *)&param_1[1].field_0x18 == 0) {
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: lost victim - hesitating\n");
            unkafter_djien_cpp_FUN_00460960(param_1);
          }
          else {
            uStack_18 = 0x41000000;
            max_distance = 0.17453292;
            *(uint *)&param_1->field_0x24a4 = 0;
            fVar9 = 0.5;
            *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
            *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
            CStack_84._8_4_ = uVar6;
            direction = &CStack_84;
            CStack_84._0_4_ = iVar4;
            CStack_84._4_4_ = iVar4;
            path_map = (CPathMap *)
                       (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x154) + 0xc4))
                                 (*(int *)&param_1[1].field_0x18);
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                              (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20),path_map
                               ,direction,fVar9,max_distance);
            if (iVar4 != 0) {
              engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: reached victim or got confused - hesitating\n");
              unkafter_djien_cpp_FUN_00460960(param_1);
            }
          }
        }
      }
    }
    else if (uVar1 == 0x12) {
      fVar9 = *(float *)&param_1[1].field_0x7f4 - param_2;
      *(uint *)&param_1[1].field_0x7f0 = 1;
      *(float *)&param_1[1].field_0x7f4 = fVar9;
      if (fVar9 <= 0.0) {
        iVar4 = *(int *)&param_1->field_0x154;
        *(uint *)&param_1[1].field_0x7f4 = 0;
        (**(code **)(iVar4 + 0x144))(param_1,param_2);
        iVar4 = *(int *)&param_1[1].field_0x18;
        if (iVar4 != 0) {
          fStack_48 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_44 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_40 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_30 = fStack_48;
          afStack_74[(uint)bVar8 * -2 + 0x12] = afStack_74[(uint)bVar8 * -2 + 0xc];
          afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
               afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
          fStack_1c = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
          fStack_20 = (float)(((int)fStack_1c >> 1) + _DAT_01cc804c);
          if (fStack_20 < *(float *)&param_1[1].field_0x10) {
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: protect found victim - going to run\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,7,1);
          }
        }
      }
    }
    goto LAB_00460332;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00460307:
      iVar4 = 6;
    }
    else {
LAB_00460577:
      fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
      if (fStack_14 <= (float)_DAT_005d8d70) goto LAB_0046031a;
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar4,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00460307;
    if (uVar1 != 3) goto LAB_00460577;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_0046031a:
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_00460332:
  if (*(int *)&param_1[1].field_0x104 <= *(int *)&param_1[1].field_0x100) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"DjienSacksGone");
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,"DjienHeartDestroyed");
    if (iVar4 != 0) {
      *(uint *)&param_1->field_0x2538 = 0;
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&param_1->field_0x158);
      if ((*(int *)(pSVar5 + 0x24) != 0xf) && (*(int *)(pSVar5 + 0x24) != 0xe)) {
        core_sound_cpp_FUN_0057d9d0(0x02C82A60,*(uint *)&param_1[1].field_0xf8);
        uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"djien_die.wav@ 4");
        *(uint *)&param_1[1].field_0x4 = 1;
        *(uint *)&param_1[1].field_0xf8 = uVar6;
        if (*(int *)&param_1[1].field_0x7ec == 0) {
          unkafter_djien_cpp_FUN_00460cb0(param_1);
          core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
                    ((CMotionController *)&param_1->field_0x158,0xf,0.0);
        }
      }
    }
  }
  if (0.0 < *(float *)&param_1[1].field_0x14) {
    *(float *)&param_1[1].field_0x14 = *(float *)&param_1[1].field_0x14 - param_2;
  }
  iVar4 = core_charactr_cpp_FUN_0042e120(param_1);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    afStack_74[2] = *(float *)&param_1->field_0x2518 * param_2;
    afStack_74[3] = *(float *)&param_1->field_0x251c * param_2;
    fStack_64 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_90 = afStack_74[2];
    *(float *)((int)&stack0xffffff74 + (uint)bVar8 * -8) = afStack_74[(uint)bVar8 * -2 + 3];
    *(float *)((int)&stack0xffffff78 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    fStack_60 = fStack_90 + *(float *)&param_1->field_0x250c;
    fStack_5c = fStack_8c + *(float *)&param_1->field_0x2510;
    fStack_58 = fStack_88 + *(float *)&param_1->field_0x2514;
    fStack_54 = fStack_60;
    afStack_74[(uint)bVar8 * -2 + 9] = afStack_74[(uint)bVar8 * -2 + 6];
    afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    fStack_3c = fStack_54 + *(float *)&param_1->field_0x249c;
    fStack_38 = fStack_50 + *(float *)&param_1->field_0x24a0;
    fStack_34 = fStack_4c + *(float *)&param_1->field_0x24a4;
    fStack_78 = fStack_3c;
    afStack_74[(uint)bVar8 * -2] = afStack_74[(uint)bVar8 * -2 + 0xf];
    afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750(param_1,(CVector3f *)&fStack_78);
  }
  core_charactr_cpp_FUN_0042e160(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80(param_1,param_2);
  return;
}
