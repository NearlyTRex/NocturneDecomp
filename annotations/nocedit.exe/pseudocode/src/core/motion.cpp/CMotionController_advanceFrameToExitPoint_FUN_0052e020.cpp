// Name: core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020
// Address: 0052e020
// Address Range: [[0052e020, 0052e1cc]]
// Convention: __cdecl
// Signature: int core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020(CMotionController * this_ptr, int motion_index, float current_frame, float * inout_delta_time, SMotionTransition * out_transition)

#include "nocturne.h"

int __cdecl
core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020
          (CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,
          SMotionTransition *out_transition)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  char *pcVar4;
  int unaff_EBP;
  int iVar5;
  int *piVar6;
  float unaff_EDI;
  SMotionTransition *pSVar7;
  byte bVar8;
  float local_24;
  float fStack_14;
  
  bVar8 = 0;
  pcVar4 = this_ptr->motion_list_ptr->motions[motion_index].motion_name;
  iVar5 = 0;
  local_24 = *inout_delta_time * *(float *)(pcVar4 + 0x20) + current_frame;
  pcVar3 = pcVar4;
  if (0 < *(int *)(pcVar4 + 0x4a4)) {
    do {
      iVar1 = ((SMotionSignal *)(pcVar3 + 0x4a8))->frame_number;
      if ((current_frame <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)0.001)) {
        local_24 = (float)iVar1 + (float)0.001;
      }
      iVar5 = iVar5 + 1;
      pcVar3 = pcVar3 + 8;
    } while (iVar5 < *(int *)(pcVar4 + 0x4a4));
  }
  if ((double)local_24 < (double)*(int *)(pcVar4 + 0x28) + -0.0001) {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)*(int *)(pcVar4 + 0x60) + current_frame,
               (float)*(int *)(pcVar4 + 0x60) + local_24,1.0);
    out_transition->cmd = 1;
    out_transition->set_new_state_as_desired = 0;
    out_transition->to_motion_number = motion_index;
    out_transition->to_frame_number = fStack_14;
    if (unaff_EDI <= out_transition->to_frame_number) {
      return unaff_EBP;
    }
    fVar2 = out_transition->to_frame_number;
  }
  else {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)*(int *)(pcVar4 + 0x60) + current_frame,
               (float)(*(int *)(pcVar4 + 0x60) + *(int *)(pcVar4 + 0x28)),1.0);
    piVar6 = (int *)(pcVar4 + 0x2c);
    pSVar7 = out_transition;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      pSVar7->desired_state = *piVar6;
      piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
      pSVar7 = (SMotionTransition *)((int)pSVar7 + (uint)bVar8 * -8 + 4);
    }
    iVar5 = this_ptr->in_transition;
    if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 2)) {
      out_transition->to_motion_number = *(int *)(iVar5 + 8);
      out_transition->to_frame_number = *(float *)(this_ptr->in_transition + 0xc);
    }
    fVar2 = (float)*(int *)(pcVar4 + 0x28);
  }
  *inout_delta_time = (fVar2 - current_frame) / *(float *)(pcVar4 + 0x20);
  return unaff_EBP;
}
