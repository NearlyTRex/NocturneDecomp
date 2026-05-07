// Name: core_biggs.cpp_CBiggs_process_FUN_00418700
// Address: 00418700
// MANUAL RECONSTRUCTION
// Address Range: [[00418700, 004189ad]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_process_FUN_00418700(CBiggs *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_process_FUN_00418700(CBiggs *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_01;
  float fVar1;
  int iVar6;
  int iVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f *pCVar2;
  CVector3f *pCVar1;
  uint uVar4;
  float fVar3;
  float fVar5;
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
  local_40 = delta_time * (this_ptr->base).speed;
  this_ptr_01 = &(this_ptr->base).base.model;
  while (0.0 < local_40) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&this_ptr_01->motion_controller,&local_40);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar2);
  }
  fVar3 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar3;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(&this_ptr_01->motion_controller);
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) goto LAB_004187db;
  uVar4 = (this_ptr->base).base.is_walking;
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_004187b0:
      iVar2 = 1;
    }
    else {
LAB_00418994:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar2,1);
  }
  else {
    if (uVar4 < 3) goto LAB_004187b0;
    if (uVar4 != 3) goto LAB_00418994;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_01->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr->base.base.base.actor_name);
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
LAB_004187db:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar2 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar2 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_3c = (this_ptr->base).base.velocity.x * delta_time;
    local_38 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar1 = &(this_ptr->base).base.position_delta;
    local_34 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_30.x = local_3c + pCVar1->x + pCVar2->x;
    local_30.y = local_38 + (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_30.z = local_34 + (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.x = 0.0f;
    (this_ptr->base).base.position_delta.y = 0.0f;
    (this_ptr->base).base.position_delta.z = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_30);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->morph_event);
  if (iVar2 != 0) {
    this_ptr->morph_timer = 0.0;
    this_ptr->morphing = 1;
  }
  if ((this_ptr->morphing != 0) &&
     (fVar1 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar1,
     4.0f < fVar1)) {
    this_ptr->morph_timer = 4.0f;
    return;
  }
  return;
}
