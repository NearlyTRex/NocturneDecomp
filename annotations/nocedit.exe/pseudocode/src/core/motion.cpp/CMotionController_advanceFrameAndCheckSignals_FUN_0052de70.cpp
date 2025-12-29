// Name: core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70
// Address: 0052de70
// Address Range: [[0052de70, 0052e01e]]
// Convention: __cdecl
// Signature: int core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70(CMotionController * this_ptr, int * inout_motion_index, float * inout_frame_number, float delta_time, float scale_factor)

#include "nocturne.h"

int __cdecl
core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70
          (CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,
          float delta_time,float scale_factor)

{
  int iVar1;
  int iVar2;
  SMotion *pSVar3;
  SMotion *pSVar4;
  int iVar5;
  float in_stack_00000030;
  float local_20;
  
  pSVar4 = this_ptr->motion_list_ptr->motions + *inout_motion_index;
  iVar5 = 0;
  iVar2 = 0;
  local_20 = delta_time * pSVar4->fps + *inout_frame_number;
  pSVar3 = pSVar4;
  if (0 < pSVar4->signal_count) {
    do {
      iVar1 = pSVar3->signals[0].frame_number;
      if ((*inout_frame_number <= (float)iVar1) &&
         ((float)iVar1 <= local_20 + (float)0.001)) {
        local_20 = (float)iVar1 + (float)0.001;
        iVar5 = pSVar3->signals[0].value;
      }
      iVar2 = iVar2 + 1;
      pSVar3 = (SMotion *)(pSVar3->motion_name + 8);
    } while (iVar2 < pSVar4->signal_count);
  }
  if ((double)local_20 < (double)pSVar4->frame_count + -0.0001) {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar4->frame_start + *inout_frame_number,
               (float)pSVar4->frame_start + local_20,scale_factor);
    *inout_frame_number = (float)this_ptr;
    return iVar5;
  }
  (*this_ptr->vtable->accumulateScaledRootMotion)
            (this_ptr,(float)pSVar4->frame_start + *inout_frame_number,
             (float)(pSVar4->frame_start + pSVar4->frame_count),scale_factor);
  switch(pSVar4->exit_forward_cmd) {
  case 3:
  case 4:
  case 5:
  case 6:
    *inout_frame_number = (float)(pSVar4->frame_count + -1);
    return iVar5;
  }
  if (pSVar4->exit_forward_to_frame == -1f) {
    iVar2 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,*inout_motion_index,(float)(pSVar4->frame_count + -1),
                       pSVar4->exit_forward_to_motion);
    in_stack_00000030 = (float)iVar2;
  }
  *inout_motion_index = pSVar4->exit_forward_to_motion;
  *inout_frame_number = in_stack_00000030;
  return iVar5;
}
