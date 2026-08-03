// Name: core_biggs.cpp_CBiggs_process_FUN_004154b0
// Address: 004154b0
// Address Range: [[004154b0, 0041575d]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_process_FUN_004154b0(CBiggs *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_process_FUN_004154b0(CBiggs *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar6 = core_charactr_cpp_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_40 = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < local_40) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr_00->motion_controller,&local_40);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar6);
  }
  fVar3 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar3;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(&this_ptr_00->motion_controller);
  iVar6 = core_charactr_cpp_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) goto LAB_0041558b;
  uVar4 = (this_ptr->base).base.is_walking;
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_00415560:
      iVar6 = 1;
    }
    else {
LAB_00415744:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
  else {
    if (uVar4 < 3) goto LAB_00415560;
    if (uVar4 != 3) goto LAB_00415744;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_0041558b:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_3c = (this_ptr->base).base.velocity.x * delta_time;
    local_38 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar1 = &(this_ptr->base).base.position_delta;
    local_34 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_24 = local_3c + pCVar1->x;
    local_20 = local_38 + (this_ptr->base).base.position_delta.y;
    local_1c = local_34 + (this_ptr->base).base.position_delta.z;
    local_30.x = local_24 + pCVar2->x;
    local_30.y = local_20 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_30.z = local_1c + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_30);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,this_ptr->morph_event);
  if (iVar6 != 0) {
    this_ptr->morph_timer = 0.0;
    this_ptr->morphing = 1;
  }
  if ((this_ptr->morphing != 0) &&
     (fVar3 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar3,
     4.0f < fVar3)) {
    this_ptr->morph_timer = 4.0f;
    return;
  }
  return;
}
