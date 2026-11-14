// Name: core_moocow.cpp_CMooCow_process_FUN_004f8cc0
// Address: 004f8cc0
// Address Range: [[004f8cc0, 004f9009]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_process_FUN_004f8cc0(CMooCow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moocow_cpp_CMooCow_process_FUN_004f8cc0(CMooCow *this_ptr,float delta_time)

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
  iVar5 = core_charactr_cpp_FUN_0042cd70(this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,0);
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  pCVar1 = &(this_ptr->base).model;
  fStack_60 = delta_time;
  while (0.0 < fStack_60) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar1->base,&stack0xffffffa0);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&this_ptr->base,iVar5);
  }
  (this_ptr->base).walk_step_speed = (this_ptr->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar1->base);
  iVar5 = pSVar6->state_index;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660(&this_ptr->base,delta_time);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      pCVar1 = &(this_ptr->base).model;
      afStack_1c[2] = core_motion_cpp_FUN_004fc930(&pCVar1->base);
      if ((float)_DAT_005c91ec < afStack_1c[2]) {
        iVar7 = 1;
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,iVar5,iVar7);
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,5);
        if ((iVar5 == 5) &&
           (iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                              (0x02CF5680,this_ptr->sfx_handle), iVar5 == 0)) {
          uVar8 = (*((this_ptr->base).base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"cow?.wav");
          this_ptr->sfx_handle = uVar8;
        }
      }
    }
    goto switchD_004f9003_caseD_5;
  }
  EVar4 = (this_ptr->base).walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_004f8d8c:
      iVar7 = 1;
      iVar5 = 5;
    }
    else {
LAB_004f8f31:
      afStack_1c[2] = core_motion_cpp_FUN_004fc930(&(this_ptr->base).model.base);
      if (afStack_1c[2] <= (float)_DAT_005c91f4) goto LAB_004f8d9f;
      iVar7 = 1;
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).model.base,iVar5,iVar7);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_004f8d8c;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_004f8f31;
    afStack_1c[2] = core_motion_cpp_FUN_004fc930(&pCVar1->base);
    if ((float)_DAT_005c91f4 < afStack_1c[2]) {
      iVar7 = 1;
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,iVar5,iVar7);
      engine_console_cpp_CConsole_printf_FUN_00441ff0
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
  }
LAB_004f8d9f:
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
switchD_004f9003_caseD_5:
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0(&this_ptr->base);
  if (iVar5 != 0) {
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
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
    core_charactr_cpp_FUN_0042c230(&this_ptr->base,&CStack_2c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&(this_ptr->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(&this_ptr->base,delta_time);
  return;
}
