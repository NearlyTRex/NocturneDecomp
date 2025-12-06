// Name: core_motion.cpp_CMotionController_advance_FUN_0052d610
// Address: 0052d610
// Address Range: [[0052d610, 0052d936]]
// Convention: __cdecl
// Signature: int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_advance_FUN_0052d610(CMotionController *this_ptr)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  SMotion *pSVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float *in_stack_00000008;
  float local_44;
  float local_40;
  byte local_3c [8];
  int local_34;
  float fStack_30;
  float local_2c;
  float *local_28;
  float *local_24;
  int *local_20;
  int *local_1c;
  int *local_14;
  
  local_24 = &this_ptr->tween_target_frame;
  local_1c = &this_ptr->tween_target_motion;
  local_28 = &this_ptr->current_frame_number;
  local_20 = &this_ptr->current_motion_index;
  local_14 = (int *)0x0;
  do {
    if (*in_stack_00000008 <= (float)1.0000000000000001e-05) break;
    iVar3 = core_motion_cpp_CMotionController_findAndStartTransition_FUN_0052d950(this_ptr);
    if (iVar3 != 0) goto LAB_0052d663;
    local_44 = *in_stack_00000008;
    iVar3 = 0;
    if (this_ptr->tween_progress < 0.0) {
      iVar3 = core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020
                        (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                         &local_44,(SMotionTransition *)local_3c);
      switch(local_34) {
      case 1:
      case 2:
        this_ptr->current_motion_index = (int)fStack_30;
        this_ptr->current_frame_number = local_2c;
        if (local_24 != (float *)0x0) {
          pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
          this_ptr->state_index = pSVar5->state_index;
        }
        break;
      case 3:
      case 4:
      case 5:
      case 6:
        core_motion_cpp_CMotionController_startTransition_FUN_0052dbc0
                  (this_ptr,(SMotionTransition *)(local_3c + 4));
        break;
      default:
        g_CurrentFilename = "..\\core\\motion.cpp";
        g_CurrentLineNumber = 0x1b7;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid transition command returned by CMotionControler::advanceComplex: %d",local_34);
      }
      goto LAB_0052d782;
    }
    if (this_ptr->tween_direction == 0) {
      local_40 = (float)0.5 - this_ptr->tween_progress;
    }
    else {
      local_40 = this_ptr->tween_progress;
    }
    local_40 = local_40 / this_ptr->tween_speed;
    if (local_40 < 0.0) {
      local_40 = 0.0;
    }
    if (local_40 < local_44) {
      local_44 = local_40;
    }
    bVar1 = false;
    local_14 = (int *)0x0;
    if (local_44 <= 0.0) goto switchD_0052d6ff_caseD_3;
    switch(this_ptr->tween_type) {
    case 3:
      break;
    case 4:
      bVar1 = true;
      core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(this_ptr);
      break;
    case 5:
      core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(this_ptr);
      goto LAB_0052d70d;
    case 6:
      core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(this_ptr);
      bVar1 = true;
      core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(this_ptr);
      goto LAB_0052d70d;
    default:
      g_CurrentFilename = "..\\core\\motion.cpp";
      g_CurrentLineNumber = 0x17e;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CMotionController::advance: Tweening active but invalid tweenType: %d",this_ptr->tween_type);
    }
switchD_0052d6ff_caseD_3:
    if (unaff_EBP != 0) {
LAB_0052d70d:
      iVar3 = core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70
                        (this_ptr,local_1c,local_24,local_44,this_ptr->tween_progress);
    }
    if ((bVar1) &&
       (iVar4 = core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70
                          (this_ptr,local_14,(float *)local_1c,local_40,
                           1.0 - this_ptr->tween_progress), iVar3 == 0)) {
      iVar3 = iVar4;
    }
    if (this_ptr->tween_direction == 0) {
      fVar2 = local_40 * this_ptr->tween_speed + this_ptr->tween_progress;
      this_ptr->tween_progress = fVar2;
      if (((float)0.49990000000000001 < fVar2) &&
         (core_motion_cpp_CMotionController_reverseTransition_FUN_0052da50(this_ptr),
         this_ptr->tween_set_new_state != 0)) {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
        this_ptr->state_index = pSVar5->state_index;
      }
    }
    else {
      fVar2 = this_ptr->tween_progress - local_40 * this_ptr->tween_speed;
      this_ptr->tween_progress = fVar2;
      if (fVar2 < (float)0.0001) {
        core_motion_cpp_CMotionController_clearTweenState_FUN_0052de40(this_ptr);
      }
    }
LAB_0052d782:
    *in_stack_00000008 = *in_stack_00000008 - local_40;
    if ((this_ptr->in_transition != 0) &&
       (*(int *)(this_ptr->in_transition + 8) == this_ptr->current_motion_index)) {
      this_ptr->in_transition = 0;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
LAB_0052d663:
    local_14 = (int *)((int)local_14 + 1);
  } while ((int)local_14 < 5);
  *in_stack_00000008 = 0.0;
  return 0;
}
