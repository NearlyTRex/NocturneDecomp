// Name: core_biggs.cpp_CBiggs_process_FUN_00414b30
// Address: 00414b30
// Address Range: [[00414b30, 00414df4]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_process_FUN_00414b30(CBiggs *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_process_FUN_00414b30(CBiggs *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
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
  
  bVar6 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_60 = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < fStack_60) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      (&this_ptr_00->base,&stack0xffffffa0);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar5);
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) goto LAB_00414c01;
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_00414bd6:
      iVar5 = 1;
    }
    else {
LAB_00414dda:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_00414bd6;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_00414dda;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_00414c01:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_50 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_4c = (this_ptr->base).base.velocity.y * delta_time;
    fStack_48 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_38 = fStack_50;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    pCVar1 = &(this_ptr->base).base.position_delta;
    fStack_5c = fStack_38 + pCVar1->x;
    fStack_58 = fStack_34 + (this_ptr->base).base.position_delta.y;
    fStack_54 = fStack_30 + (this_ptr->base).base.position_delta.z;
    fStack_20 = fStack_5c;
    afStack_1c[(uint)bVar6 * -2] = *(float *)((int)&stack0xffffffa8 + (uint)bVar6 * -8);
    afStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_44 = fStack_20 + pCVar2->x;
    fStack_40 = afStack_1c[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_3c = afStack_1c[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_2c.x = fStack_44;
    *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8);
    *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_2c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->morph_event);
  if (iVar5 != 0) {
    this_ptr->morph_timer = 0.0;
    this_ptr->morphing = 1;
  }
  if ((this_ptr->morphing != 0) &&
     (fVar4 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar4,
     0x40800000 < fVar4)) {
    this_ptr->morph_timer = 0x40800000;
    return;
  }
  return;
}
