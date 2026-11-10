// Name: core_djien.cpp_CDjien_process_FUN_00460230
// Address: 00460230
// Address Range: [[00460230, 0046095e]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_process_FUN_00460230(CDjien *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_djien_cpp_CDjien_process_FUN_00460230(CDjien *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  CConsole *pCVar5;
  CSound *this_ptr_01;
  int iVar6;
  SMotion *pSVar7;
  uint uVar8;
  CPathMap *path_map;
  byte bVar9;
  float afStackY_1078 [1012];
  CVector3f *direction;
  float min_distance;
  float max_distance;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
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
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_24 = delta_time * *(float *)&this_ptr->field_0xc1d0 * *(float *)&this_ptr->field_0xc2cc;
  this_ptr_00 = &this_ptr->field_0x158;
  while (0.0 < fStack_24) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr_00,afStack_68 + 0x11);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar6);
  }
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr_00);
  fVar3 = delta_time * *(float *)&this_ptr->field_0xc1d0 * _DAT_005d8d68;
  uVar1 = *(uint *)(pSVar7 + 0x24);
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320(this_ptr,fVar3);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if (*(int *)&this_ptr->field_0xc2f0 != 0) {
      *(uint *)&this_ptr->field_0xc1e8 = 0;
      *(uint *)&this_ptr->field_0xc9c4 = 0;
      core_charactr_cpp_FUN_00431cc0
                (this_ptr,*(uint *)&this_ptr->field_0xc2f0,0x3f800000,0x41000000,
                 &this_ptr->field_0xc2f4);
      uVar2 = *(uint *)&this_ptr->field_0xc2f4;
      if (uVar2 == 0) {
LAB_004605ea:
        *(uint *)&this_ptr->field_0xc2f0 = 0;
        *(uint *)&this_ptr->field_0xc9c4 = 0x40800000;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0x12,1);
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: reached dest - going to protect\n");
      }
      else if (uVar2 < 2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr_00,6,1);
      }
      else {
        if (uVar2 != 2) goto LAB_004605ea;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr_00,7,1);
      }
    }
    this_ptr_01 = 0x02C82A60;
    if ((uVar1 < 3) || (uVar1 < 4)) {
      fVar3 = *(float *)&this_ptr->field_0xc9c4 - delta_time;
      *(uint *)&this_ptr->field_0xc9c0 = 0;
      *(float *)&this_ptr->field_0xc9c4 = fVar3;
      pCVar5 = g_CConsolePtr;
      if (fVar3 <= 0.0) {
        *(uint *)&this_ptr->field_0xc9c4 = 0;
        engine_console_cpp_FUN_00445430(pCVar5,"DJIEN: walk waited long enough - going home\n");
        uVar8 = core_charactr_cpp_FUN_00435380(this_ptr,"DjienHome");
        *(uint *)&this_ptr->field_0xc2f0 = uVar8;
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 == 5) {
        *(uint *)&this_ptr->field_0xc9c0 = 1;
        iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                          (this_ptr_01,*(uint *)&this_ptr->field_0xc2c8);
        if (iVar6 == 0) {
          uVar8 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"djien_awake.wav @ 4");
          *(uint *)&this_ptr->field_0xc2c8 = uVar8;
        }
      }
    }
    else if ((uVar1 < 7) || (uVar1 < 8)) {
      *(uint *)&this_ptr->field_0xc9c0 = 1;
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x150))(this_ptr);
      fVar3 = *(float *)&this_ptr->field_0xc2f0;
      if (fVar3 == 0.0) {
        iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,"DjienInZone");
        if (iVar6 == 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: got outside of box - hesitating\n");
          unkafter_djien_cpp_FUN_00460960(this_ptr);
        }
        else {
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          fVar4 = 0x41000000;
          if (*(int *)&this_ptr->field_0xc1e8 == 0) {
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: lost victim - hesitating\n");
            unkafter_djien_cpp_FUN_00460960(this_ptr);
          }
          else {
            fStack_18 = 0x41000000;
            max_distance = 0.17453292;
            *(uint *)&this_ptr->field_0x24a4 = 0;
            min_distance = 0.5;
            *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
            *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
            CStack_84.z = fVar4;
            direction = &CStack_84;
            CStack_84.x = fVar3;
            CStack_84.y = fVar3;
            path_map = (CPathMap *)
                       (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xc4))
                                 (*(int *)&this_ptr->field_0xc1e8);
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                              ((CCharacter *)this_ptr,
                               (CVector3f *)(*(int *)&this_ptr->field_0xc1e8 + 0x20),path_map,
                               direction,min_distance,max_distance);
            if (iVar6 != 0) {
              engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: reached victim or got confused - hesitating\n");
              unkafter_djien_cpp_FUN_00460960(this_ptr);
            }
          }
        }
      }
    }
    else if (uVar1 == 0x12) {
      fVar3 = *(float *)&this_ptr->field_0xc9c4 - delta_time;
      *(uint *)&this_ptr->field_0xc9c0 = 1;
      *(float *)&this_ptr->field_0xc9c4 = fVar3;
      if (fVar3 <= 0.0) {
        *(uint *)&this_ptr->field_0xc9c4 = 0;
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
        iVar6 = *(int *)&this_ptr->field_0xc1e8;
        if (iVar6 != 0) {
          fStack_48 = *(float *)(iVar6 + 0x20) - *(float *)&this_ptr->field_0x20;
          fStack_44 = *(float *)(iVar6 + 0x24) - *(float *)&this_ptr->field_0x24;
          fStack_40 = *(float *)(iVar6 + 0x28) - *(float *)&this_ptr->field_0x28;
          fStack_30 = fStack_48;
          afStack_68[(uint)bVar9 * -2 + 0xf] = afStack_68[(uint)bVar9 * -2 + 9];
          afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
               afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          fStack_1c = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
          fStack_20 = (float)(((int)fStack_1c >> 1) + _DAT_01cc804c);
          if (fStack_20 < *(float *)&this_ptr->field_0xc1e0) {
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: protect found victim - going to run\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,7,1);
          }
        }
      }
    }
    goto LAB_00460332;
  }
  uVar1 = *(uint *)&this_ptr->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00460307:
      iVar6 = 6;
    }
    else {
LAB_00460577:
      fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
      if (fStack_14 <= (float)_DAT_005d8d70) goto LAB_0046031a;
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar6,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00460307;
    if (uVar1 != 3) goto LAB_00460577;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr_00,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
LAB_0046031a:
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
LAB_00460332:
  if (*(int *)&this_ptr->field_0xc2d4 <= *(int *)&this_ptr->field_0xc2d0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"DjienSacksGone");
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,"DjienHeartDestroyed");
    if (iVar6 != 0) {
      *(uint *)&this_ptr->field_0x2538 = 0;
      pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&this_ptr->field_0x158);
      if ((*(int *)(pSVar7 + 0x24) != 0xf) && (*(int *)(pSVar7 + 0x24) != 0xe)) {
        core_sound_cpp_CSound_killSound_FUN_0057d9d0(0x02C82A60,*(uint *)&this_ptr->field_0xc2c8);
        uVar8 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"djien_die.wav@ 4");
        *(uint *)&this_ptr->field_0xc1d4 = 1;
        *(uint *)&this_ptr->field_0xc2c8 = uVar8;
        if (*(int *)&this_ptr->field_0xc9bc == 0) {
          unkafter_djien_cpp_FUN_00460cb0(this_ptr);
          core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
                    ((CMotionController *)&this_ptr->field_0x158,0xf,0.0);
        }
      }
    }
  }
  if (0.0 < *(float *)&this_ptr->field_0xc1e4) {
    *(float *)&this_ptr->field_0xc1e4 = *(float *)&this_ptr->field_0xc1e4 - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_6c = *(float *)&this_ptr->field_0x2518 * delta_time;
    afStack_68[0] = *(float *)&this_ptr->field_0x251c * delta_time;
    afStack_68[1] = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_90 = fStack_6c;
    *(float *)((int)&stack0xffffff74 + (uint)bVar9 * -8) = afStack_68[(uint)bVar9 * -2];
    *(float *)((int)&stack0xffffff78 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    afStack_68[2] = fStack_90 + *(float *)&this_ptr->field_0x250c;
    afStack_68[3] = fStack_8c + *(float *)&this_ptr->field_0x2510;
    fStack_58 = fStack_88 + *(float *)&this_ptr->field_0x2514;
    fStack_54 = afStack_68[2];
    afStack_68[(uint)bVar9 * -2 + 6] = afStack_68[(uint)bVar9 * -2 + 3];
    afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fStack_3c = fStack_54 + *(float *)&this_ptr->field_0x249c;
    fStack_38 = fStack_50 + *(float *)&this_ptr->field_0x24a0;
    fStack_34 = fStack_4c + *(float *)&this_ptr->field_0x24a4;
    CStack_78.x = fStack_3c;
    *(float *)((int)&CStack_78 + (uint)bVar9 * -8 + 4) = afStack_68[(uint)bVar9 * -2 + 0xc];
    *(float *)((int)&CStack_78 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_78);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
