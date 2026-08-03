// Name: core_motion.cpp_CMotionController_advance_FUN_004e11c0
// Address: 004e11c0
// Address Range: [[004e11c0, 004e14e6]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_advance_FUN_004e11c0(CMotionController *this_ptr,float *delta_time)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_advance_FUN_004e11c0(CMotionController *this_ptr,float *delta_time)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  SMotion *pSVar5;
  float local_48;
  float local_44;
  SMotionTransition local_40;
  float *local_28;
  float *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  local_24 = &this_ptr->tween_target_frame;
  local_1c = &this_ptr->tween_target_motion;
  local_28 = &this_ptr->current_frame_number;
  local_20 = &this_ptr->current_motion_index;
  local_14 = 0;
  do {
    if (*delta_time <= (float)1.0000000000000001e-05) break;
    iVar3 = core_motion_cpp_CMotionController_findAndStartTransition_FUN_004e1500(this_ptr);
    if (iVar3 != 0) goto LAB_004e1213;
    local_48 = *delta_time;
    iVar3 = 0;
    if (this_ptr->tween_progress < 0.0) {
      iVar3 = core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_004e1bd0
                        (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                         &local_48,&local_40);
      switch(local_40.cmd) {
      case MOTION_CMD_JUMP:
      case MOTION_CMD_WAIT_EXIT:
        this_ptr->current_motion_index = local_40.to_motion_number;
        this_ptr->current_frame_number = local_40.to_frame_number;
        if (local_40.set_new_state_as_desired != 0) {
          pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(this_ptr);
          this_ptr->state_index = pSVar5->state_index;
        }
        break;
      case MOTION_CMD_TWEEN:
      case MOTION_CMD_TWEEN_ADVANCE:
      case MOTION_CMD_TWEEN_ADVANCE_BOTH:
      case MOTION_CMD_TWEEN_BIDIR:
        core_motion_cpp_CMotionController_startTransition_FUN_004e1770(this_ptr,&local_40);
        break;
      default:
        g_CHAR_PTR_01cc4800 = "..\\core\\motion.cpp";
        g_INT_01cc4804 = 0x1b7;
        core_main_c_FUN_004c8440("Invalid transition command returned by CMotionControler::advanceComplex: %d",local_40.cmd);
      }
      goto LAB_004e1332;
    }
    if (this_ptr->tween_direction == 0) {
      local_44 = (float)0.5 - this_ptr->tween_progress;
    }
    else {
      local_44 = this_ptr->tween_progress;
    }
    local_44 = local_44 / this_ptr->tween_speed;
    if (local_44 < 0.0) {
      local_44 = 0.0;
    }
    if (local_44 < local_48) {
      local_48 = local_44;
    }
    bVar1 = false;
    local_18 = 0;
    if (local_48 <= 0.0) goto switchD_004e12af_caseD_3;
    switch(this_ptr->tween_type) {
    case MOTION_CMD_TWEEN:
      break;
    case MOTION_CMD_TWEEN_ADVANCE:
      bVar1 = true;
      core_motion_cpp_CMotionController_advanceTween_FUN_004e1d80
                (this_ptr,this_ptr->tween_target_motion,this_ptr->tween_target_frame,&local_48);
      break;
    case MOTION_CMD_TWEEN_ADVANCE_BOTH:
      core_motion_cpp_CMotionController_advanceTween_FUN_004e1d80
                (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,&local_48);
      goto LAB_004e12bd;
    case MOTION_CMD_TWEEN_BIDIR:
      core_motion_cpp_CMotionController_advanceTween_FUN_004e1d80
                (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,&local_48);
      bVar1 = true;
      core_motion_cpp_CMotionController_advanceTween_FUN_004e1d80
                (this_ptr,this_ptr->tween_target_motion,this_ptr->tween_target_frame,&local_48);
      goto LAB_004e12bd;
    default:
      g_CHAR_PTR_01cc4800 = "..\\core\\motion.cpp";
      g_INT_01cc4804 = 0x17e;
      core_main_c_FUN_004c8440("CMotionController::advance: Tweening active but invalid tweenType: %d",this_ptr->tween_type);
    }
switchD_004e12af_caseD_3:
    if (local_18 != 0) {
LAB_004e12bd:
      iVar3 = core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20
                        (this_ptr,local_20,local_28,local_48,this_ptr->tween_progress);
    }
    if ((bVar1) &&
       (iVar4 = core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20
                          (this_ptr,local_1c,local_24,local_48,1.0 - this_ptr->tween_progress),
       iVar3 == 0)) {
      iVar3 = iVar4;
    }
    if (this_ptr->tween_direction == 0) {
      fVar2 = local_48 * this_ptr->tween_speed + this_ptr->tween_progress;
      this_ptr->tween_progress = fVar2;
      if (((float)0.49990000000000001 < fVar2) &&
         (core_motion_cpp_CMotionController_reverseTransition_FUN_004e1600(this_ptr),
         this_ptr->tween_set_new_state != 0)) {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(this_ptr);
        this_ptr->state_index = pSVar5->state_index;
      }
    }
    else {
      fVar2 = this_ptr->tween_progress - local_48 * this_ptr->tween_speed;
      this_ptr->tween_progress = fVar2;
      if (fVar2 < (float)0.0001) {
        core_motion_cpp_CMotionController_clearTweenState_FUN_004e19f0(this_ptr);
      }
    }
LAB_004e1332:
    *delta_time = *delta_time - local_48;
    if ((this_ptr->in_transition != (SMotionTransition *)0x0) &&
       (this_ptr->in_transition->to_motion_number == this_ptr->current_motion_index)) {
      this_ptr->in_transition = (SMotionTransition *)0x0;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
LAB_004e1213:
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  *delta_time = 0.0;
  return 0;
}
