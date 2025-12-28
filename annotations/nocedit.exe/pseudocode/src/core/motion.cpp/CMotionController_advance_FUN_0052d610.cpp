// Name: core_motion.cpp_CMotionController_advance_FUN_0052d610
// Address: 0052d610
// Address Range: [[0052d610, 0052d936]]
// Convention: __cdecl
// Signature: int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_advance_FUN_0052d610(CMotionController *this_ptr)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  SMotion *pSVar4;
  BADSPACEBASE *in_ESP;
  int *unaff_EDI;
  float *in_stack_00000008;
  float in_stack_ffffffb8;
  float fVar5;
  float local_40;
  byte local_3c [8];
  int local_34;
  float fStack_30;
  float local_2c;
  float *local_28;
  float *local_24;
  int *local_20;
  int *local_1c;
  float *local_14;
  
  local_24 = &this_ptr->tween_target_frame;
  local_1c = &this_ptr->tween_target_motion;
  local_28 = &this_ptr->current_frame_number;
  local_20 = &this_ptr->current_motion_index;
  local_14 = (float *)0x0;
  do {
    if (*in_stack_00000008 <= (float)1.0000000000000001e-05) break;
    iVar2 = core_motion_cpp_CMotionController_findAndStartTransition_FUN_0052d950(this_ptr);
    if (iVar2 != 0) goto LAB_0052d663;
    iVar2 = 0;
    if (this_ptr->tween_progress < 0.0) {
      iVar2 = core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020
                        (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                         (float *)&stack0xffffffbc,(SMotionTransition *)local_3c);
      switch(local_34) {
      case 1:
      case 2:
        this_ptr->current_motion_index = (int)fStack_30;
        this_ptr->current_frame_number = local_2c;
        if (local_24 != (float *)0x0) {
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
          this_ptr->state_index = pSVar4->state_index;
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
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid transition command returned by CMotionControler::advanceComplex: %d");
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
    fVar5 = *in_stack_00000008;
    if (local_40 < *in_stack_00000008) {
      fVar5 = local_40;
    }
    bVar1 = false;
    local_14 = (float *)0x0;
    if (fVar5 <= 0.0) goto switchD_0052d6ff_caseD_3;
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
    if (unaff_EDI != (int *)0x0) {
LAB_0052d70d:
      in_stack_ffffffb8 = this_ptr->tween_progress;
      iVar2 = core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70
                        (this_ptr,(int *)local_14,(float *)local_1c,(float)local_3c._0_4_,
                         in_stack_ffffffb8);
    }
    if ((bVar1) &&
       (in_stack_ffffffb8 = (float)local_3c._4_4_,
       iVar3 = core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70
                         (this_ptr,unaff_EDI,local_14,(float)local_3c._4_4_,
                          1.0 - this_ptr->tween_progress), iVar2 == 0)) {
      iVar2 = iVar3;
    }
    if (this_ptr->tween_direction == 0) {
      fVar5 = in_stack_ffffffb8 * this_ptr->tween_speed + this_ptr->tween_progress;
      this_ptr->tween_progress = fVar5;
      if (((float)0.49990000000000001 < fVar5) &&
         (core_motion_cpp_CMotionController_reverseTransition_FUN_0052da50(this_ptr),
         this_ptr->tween_set_new_state != 0)) {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
        this_ptr->state_index = pSVar4->state_index;
      }
    }
    else {
      fVar5 = this_ptr->tween_progress - in_stack_ffffffb8 * this_ptr->tween_speed;
      this_ptr->tween_progress = fVar5;
      if (fVar5 < (float)0.0001) {
        core_motion_cpp_CMotionController_clearTweenState_FUN_0052de40(this_ptr);
      }
    }
LAB_0052d782:
    *in_stack_00000008 = *in_stack_00000008 - in_stack_ffffffb8;
    if ((this_ptr->in_transition != 0) &&
       (*(int *)(this_ptr->in_transition + 8) == this_ptr->current_motion_index)) {
      this_ptr->in_transition = 0;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
LAB_0052d663:
    local_14 = (float *)((int)local_14 + 1);
  } while ((int)local_14 < 5);
  *in_stack_00000008 = 0.0;
  return 0;
}
