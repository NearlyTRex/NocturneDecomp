// Name: core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020
// Address: 0052e020
// Address Range: [[0052e020, 0052e1cc] [03fc41f9, 03fc4238]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)

{
  SMotionTransition *pSVar1;
  float fVar3;
  SMotion *pSVar3;
  SMotion *pSVar4;
  int iVar5;
  int *piVar6;
  SMotionTransition *pSVar7;
  byte bVar8;
  float local_24;
  int local_20;
  float fVar2;
  int iVar1;
  
  pSVar4 = this_ptr->motion_list_ptr->motions + motion_index;
  iVar5 = 0;
  fVar3 = *inout_delta_time * pSVar4->fps + current_frame;
  local_20 = 0;
  pSVar3 = pSVar4;
  local_24 = fVar3;
  if (0 < pSVar4->signal_count) {
    do {
      iVar1 = pSVar3->signals[0].frame_number;
      if ((current_frame <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)0.001)) {
        local_20 = pSVar3->signals[0].value;
        local_24 = (float)iVar1 + (float)0.001;
      }
      iVar5 = iVar5 + 1;
      pSVar3 = (SMotion *)(pSVar3->motion_name + 8);
    } while (iVar5 < pSVar4->signal_count);
  }
  if ((double)local_24 < (double)pSVar4->exit_forward_from_frame + -0.0001) {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar4->frame_start + current_frame,
               (float)pSVar4->frame_start + local_24,1.0);
    out_transition->cmd = MOTION_CMD_JUMP;
    out_transition->set_new_state_as_desired = 0;
    out_transition->to_motion_number = motion_index;
    out_transition->to_frame_number = local_24;
    if (fVar3 <= out_transition->to_frame_number) {
      return local_20;
    }
    fVar2 = out_transition->to_frame_number;
  }
  else {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar4->frame_start + current_frame,
               (float)(pSVar4->frame_start + pSVar4->exit_forward_from_frame),1.0);
    out_transition->desired_state = pSVar4->unused1;
    out_transition->cmd = pSVar4->exit_forward_cmd;
    out_transition->to_motion_number = pSVar4->exit_forward_to_motion;
    out_transition->to_frame_number = pSVar4->exit_forward_to_frame;
    out_transition->tween_time = pSVar4->exit_forward_tween_time;
    out_transition->set_new_state_as_desired = pSVar4->exit_forward_set_new_state;
    pSVar1 = this_ptr->in_transition;
    if ((pSVar1 != (SMotionTransition *)0x0) && (pSVar1->cmd == MOTION_CMD_WAIT_EXIT)) {
      out_transition->to_motion_number = pSVar1->to_motion_number;
      out_transition->to_frame_number = this_ptr->in_transition->to_frame_number;
    }
    fVar2 = (float)pSVar4->exit_forward_from_frame;
  }
  *inout_delta_time = (fVar2 - current_frame) / pSVar4->fps;
  return local_20;
}
