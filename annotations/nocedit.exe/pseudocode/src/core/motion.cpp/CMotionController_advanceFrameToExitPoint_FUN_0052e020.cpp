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
  float fVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  SMotionTransition *pSVar8;
  byte bVar9;
  float local_24;
  float local_20;
  float local_18;
  
  bVar9 = 0;
  pcVar5 = this_ptr->motion_list_ptr->motions[motion_index].motion_name;
  iVar6 = 0;
  fVar3 = *inout_delta_time * *(float *)(pcVar5 + 0x20) + current_frame;
  local_20 = 0.0;
  pcVar4 = pcVar5;
  local_24 = fVar3;
  if (0 < *(int *)(pcVar5 + 0x4a4)) {
    do {
      iVar1 = ((SMotionSignal *)(pcVar4 + 0x4a8))->frame_number;
      if ((current_frame <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)0.001)) {
        local_20 = *(float *)(pcVar4 + 0x4ac);
        local_24 = (float)iVar1 + (float)0.001;
      }
      iVar6 = iVar6 + 1;
      pcVar4 = pcVar4 + 8;
    } while (iVar6 < *(int *)(pcVar5 + 0x4a4));
  }
  if ((double)local_24 < (double)*(int *)(pcVar5 + 0x28) + -0.0001) {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)*(int *)(pcVar5 + 0x60) + current_frame,
               (float)*(int *)(pcVar5 + 0x60) + local_24,1.0);
    out_transition->cmd = 1;
    out_transition->set_new_state_as_desired = 0;
    out_transition->to_motion_number = motion_index;
    out_transition->to_frame_number = local_20;
    if (local_18 <= out_transition->to_frame_number) {
      return (int)fVar3;
    }
    fVar2 = out_transition->to_frame_number;
  }
  else {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)*(int *)(pcVar5 + 0x60) + current_frame,
               (float)(*(int *)(pcVar5 + 0x60) + *(int *)(pcVar5 + 0x28)),1.0);
    piVar7 = (int *)(pcVar5 + 0x2c);
    pSVar8 = out_transition;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      pSVar8->desired_state = *piVar7;
      piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
      pSVar8 = (SMotionTransition *)((int)pSVar8 + (uint)bVar9 * -8 + 4);
    }
    iVar6 = this_ptr->in_transition;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 4) == 2)) {
      out_transition->to_motion_number = *(int *)(iVar6 + 8);
      out_transition->to_frame_number = *(float *)(this_ptr->in_transition + 0xc);
    }
    fVar2 = (float)*(int *)(pcVar5 + 0x28);
  }
  *inout_delta_time = (fVar2 - current_frame) / *(float *)(pcVar5 + 0x20);
  return (int)fVar3;
}
