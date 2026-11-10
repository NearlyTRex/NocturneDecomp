// Name: core_moocow.cpp_CMooCow_process_FUN_00521480
// Address: 00521480
// Address Range: [[00521480, 005217c9]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_process_FUN_00521480(CMooCow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moocow_cpp_CMooCow_process_FUN_00521480(CMooCow *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1044 [1014];
  int iVar6;
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
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [3];
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00432f10(this_ptr,delta_time,0);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  this_ptr_00 = &this_ptr->field_0x158;
  fStack_60 = delta_time;
  while (0.0 < fStack_60) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr_00,&stack0xffffffa0);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar2);
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr_00);
  uVar4 = *(uint *)(pSVar3 + 0x24);
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    switch(uVar4) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      afStack_1c[2] = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
      if ((float)_DAT_005ea3b2 < afStack_1c[2]) {
        iVar6 = 1;
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,iVar2,iVar6);
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,5);
        if ((iVar2 == 5) &&
           (iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                              (0x02C82A60,*(uint *)&this_ptr->field_0xc1d8), iVar2 == 0)) {
          uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"cow?.wav");
          *(uint *)&this_ptr->field_0xc1d8 = uVar4;
        }
      }
    }
    goto switchD_005217c3_caseD_5;
  }
  uVar1 = *(uint *)&this_ptr->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0052154c:
      iVar6 = 1;
      iVar2 = 5;
    }
    else {
LAB_005216f1:
      afStack_1c[2] = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
      if (afStack_1c[2] <= (float)_DAT_005ea3ba) goto LAB_0052155f;
      iVar6 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar2,iVar6);
  }
  else {
    if (uVar1 < 3) goto LAB_0052154c;
    if (uVar1 != 3) goto LAB_005216f1;
    afStack_1c[2] = core_motion_cpp_FUN_00525020((CMotionController *)this_ptr_00);
    if ((float)_DAT_005ea3ba < afStack_1c[2]) {
      iVar6 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr_00,iVar2,iVar6);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
  }
LAB_0052155f:
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
switchD_005217c3_caseD_5:
  iVar2 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_44 = *(float *)&this_ptr->field_0x2518 * delta_time;
    fStack_40 = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_3c = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_5c = fStack_44;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_38 = fStack_5c + *(float *)&this_ptr->field_0x250c;
    fStack_34 = fStack_58 + *(float *)&this_ptr->field_0x2510;
    fStack_30 = fStack_54 + *(float *)&this_ptr->field_0x2514;
    fStack_50 = fStack_38;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_20 = fStack_50 + *(float *)&this_ptr->field_0x249c;
    afStack_1c[0] = fStack_4c + *(float *)&this_ptr->field_0x24a0;
    afStack_1c[1] = fStack_48 + *(float *)&this_ptr->field_0x24a4;
    CStack_2c.x = fStack_20;
    *(float *)((int)&CStack_2c + (uint)bVar5 * -8 + 4) = afStack_1c[(uint)bVar5 * -2];
    *(float *)((int)&CStack_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_2c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
