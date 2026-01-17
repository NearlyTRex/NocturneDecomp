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
  float unaff_EBP;
  int iVar5;
  float fVar6;
  
  pSVar4 = this_ptr->motion_list_ptr->motions + *inout_motion_index;
  iVar5 = 0;
  iVar2 = 0;
  fVar6 = delta_time * pSVar4->fps + *inout_frame_number;
  pSVar3 = pSVar4;
  if (0 < pSVar4->signal_count) {
    do {
      iVar1 = pSVar3->signals[0].frame_number;
      if ((*inout_frame_number <= (float)iVar1) && ((float)iVar1 <= fVar6 + (float)0.001))
      {
        fVar6 = (float)iVar1 + (float)0.001;
        iVar5 = pSVar3->signals[0].value;
      }
      iVar2 = iVar2 + 1;
      pSVar3 = (SMotion *)(pSVar3->motion_name + 8);
    } while (iVar2 < pSVar4->signal_count);
  }
  if ((double)fVar6 < (double)pSVar4->frame_count + -0.0001) {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar4->frame_start + *inout_frame_number,
               (float)pSVar4->frame_start + fVar6,scale_factor);
    *inout_frame_number = unaff_EBP;
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
  if (pSVar4->exit_forward_to_frame == -1.0f) {
    iVar2 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,*inout_motion_index,(float)(pSVar4->frame_count + -1),
                       pSVar4->exit_forward_to_motion);
    inout_motion_index = (int *)(float)iVar2;
  }
  *inout_motion_index = pSVar4->exit_forward_to_motion;
  *inout_frame_number = (float)inout_motion_index;
  return iVar5;
}
