// Name: core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00524ba0
// Address: 00524ba0
// Address Range: [[00524ba0, 00524d64]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00524ba0(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00524ba0(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

{
  int iVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  SMotion *pSVar5;
  int iVar6;
  float local_1c;
  float fStack_18;
  
  pSVar5 = this_ptr->motion_list_ptr->motions + *inout_motion_index;
  iVar6 = 0;
  iVar3 = 0;
  local_1c = delta_time * pSVar5->fps + *inout_frame_number;
  pSVar4 = pSVar5;
  if (0 < pSVar5->signal_count) {
    do {
      iVar1 = pSVar4->signals[0].frame_number;
      if ((*inout_frame_number <= (float)iVar1) && ((float)iVar1 <= local_1c + (float)_DAT_005eaf6b)
         ) {
        local_1c = (float)iVar1 + (float)_DAT_005eaf6b;
        iVar6 = pSVar4->signals[0].value;
      }
      iVar3 = iVar3 + 1;
      pSVar4 = (SMotion *)(pSVar4->motion_name + 8);
    } while (iVar3 < pSVar5->signal_count);
  }
  if ((double)local_1c < (double)pSVar5->frame_count + _DAT_005eaf5b) {
    fVar2 = 1.0 / (float)pSVar5->frame_step;
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar5->frame_start + *inout_frame_number * fVar2,
               local_1c * fVar2 + (float)pSVar5->frame_start,scale_factor);
    *inout_frame_number = local_1c;
    return iVar6;
  }
  (*this_ptr->vtable->accumulateScaledRootMotion)
            (this_ptr,(float)pSVar5->frame_start + *inout_frame_number / (float)pSVar5->frame_step,
             (float)(pSVar5->frame_start + pSVar5->stored_frame_count),scale_factor);
  switch(pSVar5->exit_forward_cmd) {
  case 3:
  case 4:
  case 5:
  case 6:
    *inout_frame_number = (float)(pSVar5->frame_count + -1);
    return iVar6;
  }
  fStack_18 = pSVar5->exit_forward_to_frame;
  if (fStack_18 == _DAT_005eaf63) {
    iVar3 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,*inout_motion_index,(float)(pSVar5->frame_count + -1),
                       pSVar5->exit_forward_to_motion);
    fStack_18 = (float)iVar3;
  }
  *inout_motion_index = pSVar5->exit_forward_to_motion;
  *inout_frame_number = fStack_18;
  return iVar6;
}
