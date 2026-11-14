// Name: core_moocow.cpp_CMooCow_process_FUN_00521480
// Address: 00521480
// Address Range: [[00521480, 005217c9]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_process_FUN_00521480(CMooCow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moocow_cpp_CMooCow_process_FUN_00521480(CMooCow *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  EWalkState EVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  float afStackY_1044 [1014];
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
  
  bVar9 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(&this_ptr->base,delta_time);
  if (iVar5 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00432f10(this_ptr,delta_time,0);
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  pCVar1 = &(this_ptr->base).model;
  fStack_60 = delta_time;
  while (0.0 < fStack_60) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar1->base,&stack0xffffffa0);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(&this_ptr->base,iVar5);
  }
  (this_ptr->base).walk_step_speed = (this_ptr->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  iVar5 = pSVar6->state_index;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240(&this_ptr->base,delta_time);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      pCVar1 = &(this_ptr->base).model;
      afStack_1c[2] = core_motion_cpp_FUN_00525020(&pCVar1->base);
      if ((float)_DAT_005ea3b2 < afStack_1c[2]) {
        iVar7 = 1;
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,iVar5,iVar7);
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,5);
        if ((iVar5 == 5) &&
           (iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                              (0x02C82A60,this_ptr->sfx_handle), iVar5 == 0)) {
          uVar8 = (*((this_ptr->base).base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"cow?.wav");
          this_ptr->sfx_handle = uVar8;
        }
      }
    }
    goto switchD_005217c3_caseD_5;
  }
  EVar4 = (this_ptr->base).walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_0052154c:
      iVar7 = 1;
      iVar5 = 5;
    }
    else {
LAB_005216f1:
      afStack_1c[2] = core_motion_cpp_FUN_00525020(&(this_ptr->base).model.base);
      if (afStack_1c[2] <= (float)_DAT_005ea3ba) goto LAB_0052155f;
      iVar7 = 1;
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).model.base,iVar5,iVar7);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_0052154c;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_005216f1;
    afStack_1c[2] = core_motion_cpp_FUN_00525020(&pCVar1->base);
    if ((float)_DAT_005ea3ba < afStack_1c[2]) {
      iVar7 = 1;
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,iVar5,iVar7);
      engine_console_cpp_CConsole_printf_FUN_00445430
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
  }
LAB_0052155f:
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
switchD_005217c3_caseD_5:
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120(&this_ptr->base);
  if (iVar5 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_44 = (this_ptr->base).velocity.x * delta_time;
    fStack_40 = (this_ptr->base).velocity.y * delta_time;
    fStack_3c = (this_ptr->base).velocity.z * delta_time;
    fStack_5c = fStack_44;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    pCVar2 = &(this_ptr->base).position_delta;
    fStack_38 = fStack_5c + pCVar2->x;
    fStack_34 = fStack_58 + (this_ptr->base).position_delta.y;
    fStack_30 = fStack_54 + (this_ptr->base).position_delta.z;
    fStack_50 = fStack_38;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffcc + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    pCVar3 = &(this_ptr->base).model.accumulated_root_motion;
    fStack_20 = fStack_50 + pCVar3->x;
    afStack_1c[0] = fStack_4c + (this_ptr->base).model.accumulated_root_motion.y;
    afStack_1c[1] = fStack_48 + (this_ptr->base).model.accumulated_root_motion.z;
    CStack_2c.x = fStack_20;
    *(float *)((int)&CStack_2c + (uint)bVar9 * -8 + 4) = afStack_1c[(uint)bVar9 * -2];
    *(float *)((int)&CStack_2c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_1c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (this_ptr->base).position_delta.z = 0.0;
    (this_ptr->base).position_delta.y = (this_ptr->base).position_delta.z;
    pCVar2->x = (this_ptr->base).position_delta.y;
    (this_ptr->base).model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).model.accumulated_root_motion.y =
         (this_ptr->base).model.accumulated_root_motion.z;
    pCVar3->x = (this_ptr->base).model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750(&this_ptr->base,&CStack_2c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80(&this_ptr->base,delta_time);
  return;
}
