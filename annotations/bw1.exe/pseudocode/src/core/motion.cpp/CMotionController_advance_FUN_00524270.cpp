// Name: core_motion.cpp_CMotionController_advance_FUN_00524270
// Address: 00524270
// Address Range: [[00524270, 005245fd]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_advance_FUN_00524270(CMotionController *this_ptr,float *delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_CMotionController_advance_FUN_00524270(CMotionController *this_ptr,float *delta_time)

{
  float fVar1;
  int iVar2;
  int iVar3;
  SMotion *pSVar4;
  float local_b0;
  float local_ac;
  char local_a8 [100];
  SMotionTransition local_44;
  float *local_2c;
  int *local_28;
  int *local_24;
  float *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_2c = &this_ptr->tween_target_frame;
  local_24 = &this_ptr->tween_target_motion;
  local_20 = &this_ptr->current_frame_number;
  local_28 = &this_ptr->current_motion_index;
  local_18 = 0;
  do {
    if (*delta_time <= (float)_DAT_005eae83) break;
    iVar2 = core_motion_cpp_CMotionController_findAndStartTransition_FUN_00524620(this_ptr);
    if (iVar2 != 0) goto LAB_005242d2;
    local_b0 = *delta_time;
    iVar2 = 0;
    if (this_ptr->tween_progress < 0.0) {
      iVar2 = core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_00524d70
                        (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                         &local_b0,&local_44);
      switch(local_44.cmd) {
      case MOTION_CMD_JUMP:
      case MOTION_CMD_WAIT_EXIT:
        this_ptr->current_motion_index = local_44.to_motion_number;
        this_ptr->current_frame_number = local_44.to_frame_number;
        if (local_44.set_new_state_as_desired != 0) {
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
          this_ptr->state_index = pSVar4->state_index;
        }
        break;
      case MOTION_CMD_TWEEN:
      case MOTION_CMD_TWEEN_ADVANCE:
      case MOTION_CMD_TWEEN_ADVANCE_BOTH:
      case MOTION_CMD_TWEEN_BIDIR:
        core_motion_cpp_CMotionController_startTransition_FUN_00524880(this_ptr,&local_44);
        break;
      default:
        _DAT_01d1d400 = "..\\core\\motion.cpp";
        _DAT_01d1d404 = 0x1f6;
        core_main_c_FUN_005030e0("Invalid transition command returned by CMotionControler::advanceComplex: %d",local_44.cmd);
      }
      goto LAB_00524411;
    }
    if (this_ptr->tween_direction == 0) {
      local_ac = (float)_DAT_005eae8b - this_ptr->tween_progress;
    }
    else {
      local_ac = this_ptr->tween_progress;
    }
    local_ac = local_ac / this_ptr->tween_speed;
    if (local_ac < 0.0) {
      local_ac = 0.0;
    }
    if (local_ac < local_b0) {
      local_b0 = local_ac;
    }
    local_1c = 0;
    local_14 = 0;
    if (local_b0 <= 0.0) goto switchD_00524379_caseD_3;
    switch(this_ptr->tween_type) {
    case MOTION_CMD_TWEEN:
      break;
    case MOTION_CMD_TWEEN_ADVANCE:
      core_motion_cpp_FUN_00524f40
                (this_ptr,this_ptr->tween_target_motion,this_ptr->tween_target_frame,&local_b0);
      local_14 = 1;
      break;
    case MOTION_CMD_TWEEN_ADVANCE_BOTH:
      core_motion_cpp_FUN_00524f40
                (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,&local_b0);
      goto LAB_0052438a;
    case MOTION_CMD_TWEEN_BIDIR:
      core_motion_cpp_FUN_00524f40
                (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,&local_b0);
      core_motion_cpp_FUN_00524f40
                (this_ptr,this_ptr->tween_target_motion,this_ptr->tween_target_frame,&local_b0);
      local_14 = 1;
      goto LAB_0052438a;
    default:
      _DAT_01d1d400 = "..\\core\\motion.cpp";
      _DAT_01d1d404 = 0x1bd;
      core_main_c_FUN_005030e0("CMotionController::advance: Tweening active but invalid tweenType: %d",this_ptr->tween_type);
    }
switchD_00524379_caseD_3:
    if (local_1c != 0) {
LAB_0052438a:
      iVar2 = core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00524ba0
                        (this_ptr,local_28,local_20,local_b0,this_ptr->tween_progress);
    }
    if ((local_14 != 0) &&
       (iVar3 = core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00524ba0
                          (this_ptr,local_24,local_2c,local_b0,1.0 - this_ptr->tween_progress),
       iVar2 == 0)) {
      iVar2 = iVar3;
    }
    if (this_ptr->tween_direction == 0) {
      fVar1 = local_b0 * this_ptr->tween_speed + this_ptr->tween_progress;
      this_ptr->tween_progress = fVar1;
      if (((float)_DAT_005eae93 < fVar1) &&
         (core_motion_cpp_CMotionController_reverseTransition_FUN_00524710(this_ptr),
         this_ptr->tween_set_new_state != 0)) {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
        this_ptr->state_index = pSVar4->state_index;
      }
    }
    else {
      fVar1 = this_ptr->tween_progress - local_b0 * this_ptr->tween_speed;
      this_ptr->tween_progress = fVar1;
      if (fVar1 < (float)_DAT_005eae9b) {
        core_motion_cpp_CMotionController_clearTweenState_FUN_00524b70(this_ptr);
      }
    }
LAB_00524411:
    *delta_time = *delta_time - local_b0;
    if ((this_ptr->in_transition != (SMotionTransition *)0x0) &&
       (this_ptr->in_transition->to_motion_number == this_ptr->current_motion_index)) {
      this_ptr->in_transition = (SMotionTransition *)0x0;
    }
    if (iVar2 != 0) {
      _sprintf(local_a8,"signal%d");
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,local_a8);
      return iVar2;
    }
LAB_005242d2:
    local_18 = local_18 + 1;
  } while (local_18 < 5);
  *delta_time = 0.0;
  return 0;
}
